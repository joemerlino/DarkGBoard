//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QTMInkTouchController, QTMInkView, UIView;

@protocol QTMInkTouchControllerDelegate <NSObject>

@optional
- (void)inkTouchController:(QTMInkTouchController *)arg1 didProcessInkView:(QTMInkView *)arg2 atTouchLocation:(struct CGPoint)arg3;
- (_Bool)shouldInkTouchControllerProcessInkTouches:(QTMInkTouchController *)arg1;
- (QTMInkView *)inkTouchController:(QTMInkTouchController *)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (void)inkTouchController:(QTMInkTouchController *)arg1 insertInkView:(UIView *)arg2 intoView:(UIView *)arg3;
@end

