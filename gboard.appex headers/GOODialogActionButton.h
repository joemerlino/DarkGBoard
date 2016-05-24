//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QTMButton.h"

#import "GOOMultiLineButtonImplementsSizeThatFits.h"

@interface GOODialogActionButton : QTMButton <GOOMultiLineButtonImplementsSizeThatFits>
{
    _Bool _disableRTLTextAlignmentForTitle;
    double _minimumContentHeight;
    double _minimumWidth;
}

@property(nonatomic) _Bool disableRTLTextAlignmentForTitle; // @synthesize disableRTLTextAlignmentForTitle=_disableRTLTextAlignmentForTitle;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
- (struct CGSize)titleSizeWithWidth:(double)arg1;
- (struct CGSize)sizeOfContentsWithSize:(struct CGSize)arg1 shouldLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2 shape:(long long)arg3;

@end

