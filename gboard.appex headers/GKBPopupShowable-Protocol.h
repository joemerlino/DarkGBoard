//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GKBActionDef, GKBKeyData, UITouch, UIView;

@protocol GKBPopupShowable
@property(readonly, nonatomic) double offsetX;
@property(readonly, nonatomic) struct CGSize estimatedSize;
@property(readonly, nonatomic) _Bool acceptsTouchEvents;
- (void)reset;
- (GKBKeyData *)handleTouch:(UITouch *)arg1;
- (GKBKeyData *)initializeWithActionDef:(GKBActionDef *)arg1 softKeyView:(UIView *)arg2 touchPoint:(struct CGPoint)arg3;
@end

