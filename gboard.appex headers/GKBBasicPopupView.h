//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GKBPopupShowable.h"

@class GKBKeyData, NSLayoutConstraint, UILabel;

@interface GKBBasicPopupView : UIView <GKBPopupShowable>
{
    UIView *_anchorView;
    GKBKeyData *_keyData;
    NSLayoutConstraint *_heightConstraint;
    struct CGSize _estimatedSize;
    UILabel *_popupLabel;
    double _contentHeight;
}

@property(readonly, nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) UILabel *popupLabel; // @synthesize popupLabel=_popupLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double offsetX;
@property(readonly, nonatomic) struct CGSize estimatedSize;
@property(readonly, nonatomic) _Bool acceptsTouchEvents;
- (void)reset;
- (id)handleTouch:(id)arg1;
- (id)initializeWithActionDef:(id)arg1 softKeyView:(id)arg2 touchPoint:(struct CGPoint)arg3;

@end

