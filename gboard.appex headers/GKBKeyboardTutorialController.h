//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class CALayer, GKBPopupViewManager, NSDictionary, NSString, NSTimer, UIImageView, UIPageControl, UIScrollView, UIView;

@interface GKBKeyboardTutorialController : UIViewController <UIScrollViewDelegate>
{
    GKBPopupViewManager *_popupManager;
    UIView *_anchorView;
    NSDictionary *_heightConstants;
    NSDictionary *_logoPositionConstants;
    double _width;
    double _height;
    UIView *_circleRevealMaskView;
    UIView *_keyboardView;
    UIImageView *_pageTwoKeyboard;
    UIScrollView *_scrollView;
    UIView *_morphingInputBoxView;
    UIView *_onboardingView;
    UIView *_blueOverlayView;
    UIPageControl *_pageIndicator;
    CALayer *_pulseLayer;
    UIImageView *_strokesImageView;
    UIImageView *_morphingGImageView;
    _Bool _didAnimateSecondPage;
    long long _currentStrokeIndex;
    NSTimer *_strokesTimer;
    double _logoOffset;
    NSTimer *_dismissOnboardingTimer;
}

+ (_Bool)hasShownKeyboardTutorial;
- (void).cxx_destruct;
- (void)setHasShownKeyboardTutorial;
- (void)clearTutorialPage;
- (void)dismissOnboarding;
- (void)showStroke;
- (void)startAnimatingSecondPage;
- (void)startPulsatingCircle;
- (void)performPulsingCircle;
- (void)advanceToSecondPage;
- (void)performOnboardingIntro;
- (void)generateViews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showTutorial;
- (void)stopTutorial;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithPopupViewManager:(id)arg1 anchorView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
