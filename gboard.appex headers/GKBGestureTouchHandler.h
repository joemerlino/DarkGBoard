//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKBEventConsumer.h"
#import "GKBGestureCanvasDelegate.h"
#import "GKBTouchHandler.h"

@class GD4TouchData, GKBGestureCanvas, GKBSoftKeyboardView, NSString, UITouch;

@interface GKBGestureTouchHandler : NSObject <GKBTouchHandler, GKBGestureCanvasDelegate, GKBEventConsumer>
{
    id <GKBTouchHandlerDelegate> _delegate;
    GKBSoftKeyboardView *_view;
    _Bool _activated;
    _Bool _gestureStarted;
    _Bool _disableGesture;
    _Bool _isAfterTapping;
    _Bool _lastTimeIsGesture;
    double _latestTouchUpTime;
    double _trackStartTime;
    _Bool _fastMoveDetected;
    float _fastMoveDetectedX;
    float _fastMoveDetectedY;
    unsigned long long _fastMoveDetectedTime;
    float _gestureStartDistanceThresholdMax;
    float _gestureStartDistanceThresholdMin;
    float _fastMoveSpeedThreshold;
    GD4TouchData *_touchData;
    double _lastSendTime;
    UITouch *_touch;
    struct CGPoint _touchDownPoint;
    long long _currentPointerID;
    GKBGestureCanvas *_gestureCanvas;
}

- (void).cxx_destruct;
- (long long)getGestureDynamicTimeThresholdFor:(long long)arg1;
- (float)getGestureDynamicDistanceThresholdFor:(long long)arg1;
- (void)detectFastMovement;
- (float)getDistanceFromX1:(float)arg1 y1:(float)arg2 toX2:(float)arg3 y2:(float)arg4;
- (_Bool)consumeEvent:(id)arg1;
- (void)gestureCanvasCleared:(id)arg1;
- (void)onKeyboardStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)close;
- (void)reset;
- (void)deactivate;
- (void)activate;
- (void)sendEvent;
- (void)hideGestureCanvas;
- (void)showGestureCanvas;
- (id)touchPointFromTouch:(id)arg1 withAction:(long long)arg2;
- (_Bool)shouldStartGesture;
- (_Bool)shouldStartGestureOnKey:(id)arg1;
- (void)handleTouches:(id)arg1 withAction:(long long)arg2;
- (void)onSoftKeyboardViewLayout;
- (void)setSoftKeyboardView:(id)arg1;
- (void)configureWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
