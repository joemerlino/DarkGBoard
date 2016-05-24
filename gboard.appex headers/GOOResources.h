//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GOOResources : NSObject
{
}

+ (id)tintImage:(id)arg1 withColor:(id)arg2;
+ (id)bundlePathWithName:(id)arg1;
+ (id)baseBundle;
+ (id)sharedInstance;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)headerFontWithSize:(double)arg1;
- (id)boldTextFontWithSize:(double)arg1;
- (id)mediumTextFontWithSize:(double)arg1;
- (id)lightTextFontWithSize:(double)arg1;
- (id)textFontWithSize:(double)arg1;
- (void)applyTitleColorSelector:(SEL)arg1 toButton:(id)arg2;
- (void)applyBackgroundImageSelector:(SEL)arg1 toButton:(id)arg2;
- (void)applyImageSelector:(SEL)arg1 toButton:(id)arg2;
- (id)gradientColorsForDarkHighlight;
- (id)gradientColorsForHighlight;
- (id)colorForHighlightState;
- (id)stringForKey:(id)arg1 bundleName:(id)arg2;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2 tintColor:(id)arg3;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)imageFromAssetCatalogWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)bundleWithName:(id)arg1;

@end

