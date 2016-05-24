//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIGroupedCellBackground.h"

@interface GOOCardStyle : NIGroupedCellBackground
{
    _Bool _usesDarkTheme;
    _Bool _shouldInsetCellDividers;
}

+ (double)shadowPlusBorderWidthForCardStyle:(id)arg1;
+ (struct UIEdgeInsets)dividerInsets;
@property(nonatomic) _Bool shouldInsetCellDividers; // @synthesize shouldInsetCellDividers=_shouldInsetCellDividers;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
- (long long)backgroundTagForFirst:(_Bool)arg1 last:(_Bool)arg2 drawDivider:(_Bool)arg3;
- (id)cacheKeyForFirst:(_Bool)arg1 last:(_Bool)arg2 highlighted:(_Bool)arg3 drawDivider:(_Bool)arg4;
- (void)_applyDividerPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (id)init;

@end

