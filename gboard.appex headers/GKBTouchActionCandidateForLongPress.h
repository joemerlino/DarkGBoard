//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBTouchActionCandidate.h"

@class NSTimer;

@interface GKBTouchActionCandidateForLongPress : GKBTouchActionCandidate
{
    _Bool _activated;
    NSTimer *_activateTimer;
}

- (void).cxx_destruct;
- (void)destroyActivateTimer;
- (_Bool)shouldShowPopupOnLongPress;
- (void)activate;
- (void)activateTimerFired:(id)arg1;
- (void)startActivateTimer;
- (void)revalidate;
- (void)invalidate;
- (long long)handleTouchAction:(long long)arg1;

@end

