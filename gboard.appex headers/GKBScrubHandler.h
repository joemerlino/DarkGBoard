//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKBEventConsumer.h"
#import "GKBTouchHandler.h"

@class GKBSoftKeyboardView, NSString, UITouch;

@interface GKBScrubHandler : NSObject <GKBTouchHandler, GKBEventConsumer>
{
    id <GKBTouchHandlerDelegate> _delegate;
    GKBSoftKeyboardView *_keyboardView;
    struct CGPoint _startPoint;
    UITouch *_touch;
    double _touchDownTime;
    _Bool _inScrub;
    long long _previousStopNumber;
    double _lastKeyPressTime;
}

- (void).cxx_destruct;
- (long long)getStopNumber;
- (void)handleScrubWithAction:(int)arg1;
- (_Bool)shouldStartScrub;
- (void)handleTouches:(id)arg1 withAction:(long long)arg2;
- (void)onSoftKeyboardViewLayout;
- (void)onKeyboardStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)close;
- (void)reset;
- (void)deactivate;
- (void)activate;
- (void)setSoftKeyboardView:(id)arg1;
- (void)configureWithDelegate:(id)arg1;
- (_Bool)consumeEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
