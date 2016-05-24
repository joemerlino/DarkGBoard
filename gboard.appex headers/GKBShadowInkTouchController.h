//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UITapGestureRecognizer, UIView;

@interface GKBShadowInkTouchController : NSObject
{
    UITapGestureRecognizer *_gestureRecognizer;
    UIColor *_inkColor;
    UIView *_blotContainerView;
    _Bool _enabled;
    _Bool _hasShadowAnimation;
    double _initialInkBlotDiameter;
    double _initialInkBlotAlpha;
    double _finalInkBlotAlpha;
    double _expandingDuration;
    double _delayBeforeFadingAwayDuration;
    double _fadingAwayDuration;
    double _endShadowRadiusMultiple;
    double _endShadowOpacityMultiple;
    double _shadowAnimationDuration;
    CDUnknownBlockType _shouldStartAnimationHandler;
    UIView *_baseView;
    CDUnknownBlockType _completionHandler;
}

+ (void)animateInkInView:(id)arg1 fromPoint:(struct CGPoint)arg2;
+ (void)animateInkFromView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) CDUnknownBlockType shouldStartAnimationHandler; // @synthesize shouldStartAnimationHandler=_shouldStartAnimationHandler;
@property(nonatomic) double shadowAnimationDuration; // @synthesize shadowAnimationDuration=_shadowAnimationDuration;
@property(nonatomic) double endShadowOpacityMultiple; // @synthesize endShadowOpacityMultiple=_endShadowOpacityMultiple;
@property(nonatomic) double endShadowRadiusMultiple; // @synthesize endShadowRadiusMultiple=_endShadowRadiusMultiple;
@property(nonatomic) double fadingAwayDuration; // @synthesize fadingAwayDuration=_fadingAwayDuration;
@property(nonatomic) double delayBeforeFadingAwayDuration; // @synthesize delayBeforeFadingAwayDuration=_delayBeforeFadingAwayDuration;
@property(nonatomic) double expandingDuration; // @synthesize expandingDuration=_expandingDuration;
@property(nonatomic) double finalInkBlotAlpha; // @synthesize finalInkBlotAlpha=_finalInkBlotAlpha;
@property(nonatomic) double initialInkBlotAlpha; // @synthesize initialInkBlotAlpha=_initialInkBlotAlpha;
@property(nonatomic) double initialInkBlotDiameter; // @synthesize initialInkBlotDiameter=_initialInkBlotDiameter;
@property(nonatomic) _Bool hasShadowAnimation; // @synthesize hasShadowAnimation=_hasShadowAnimation;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)inkBlotHideAnimation:(id)arg1;
- (void)animateShadow;
- (void)handleTap:(id)arg1;
- (void)commonInit;
- (void)radiateInkFromPoint:(struct CGPoint)arg1;
- (void)showInkBlot;
- (void)hideInkBlot;
- (void)dealloc;
- (id)initWithTouchableView:(id)arg1 inkColor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

