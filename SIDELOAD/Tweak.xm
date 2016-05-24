@interface GKBLabelWithBackgroundImage : UILabel
@end

static BOOL keep = NO;
%hook GKBSoftKeyView
- (id)imageNamed:(id)arg1{
	keep = YES;
	return %orig;
}
%end
%hook GKBLabelWithBackgroundImage
- (void)setFrame:(CGRect)arg1{
	self.textColor = [UIColor blackColor];
	%orig;
}
- (void)didMoveToWindow{
	return ;
}
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
	[arg2 setBackgroundColor:[UIColor colorWithRed:.3f green:.3f blue:.3f alpha:.1f]];
	%orig;
}
%end
