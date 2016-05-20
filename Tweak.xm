%group MOD

static BOOL keep = NO;
%hook GKBSoftKeyView
- (id)imageNamed:(id)arg1{
	keep = YES;
	return %orig;
}
%end
%hook GKBLabelWithBackgroundImage
- (void)setTextColor:(id)arg1{
	arg1 = [UIColor whiteColor];
	%orig;
}
%end
%hook GKBImageLayer
- (id)currentLayer{
	if(keep){
		keep = NO;
		return %orig;
	}
	return nil;
}
%end
%hook GKBKeyboardImpl
- (void)keyboardViewHelper:(id)arg1 didCreateView:(id)arg2{
	[arg2 setBackgroundColor:[UIColor colorWithWhite:90.0/255 alpha:1]];
	%orig;
}
%end

%end

static void PreferencesCallback(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo)
{
	CFPreferencesAppSynchronize(CFSTR("com.joemerlino.darkgboard"));
}

%ctor
{
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, PreferencesCallback, CFSTR("com.joemerlino.darkgboard.preferencechanged"), NULL, CFNotificationSuspensionBehaviorCoalesce);
	NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/private/var/mobile/Library/Preferences/com.joemerlino.darkgboard.plist"];
	static BOOL enabled = ([prefs objectForKey:@"enabled"] ? [[prefs objectForKey:@"enabled"] boolValue] : YES);
	if (enabled)
		%init(MOD);
}