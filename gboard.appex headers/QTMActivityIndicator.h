//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, NSArray, QTMColorGroup;

@interface QTMActivityIndicator : UIView
{
    _Bool _animatingOut;
    _Bool _animationsAdded;
    _Bool _cycleInProgress;
    _Bool _animating;
    _Bool _showTrack;
    id <QTMActivityIndicatorDelegate> _delegate;
    double _spinnerRadius;
    double _strokeWidth;
    QTMColorGroup *_strokeColorGroup;
    long long _cycleStart;
    unsigned long long _polychromeColorCount;
    long long _cycleCount;
    NSArray *_polyColors;
    CALayer *_outerRotationLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_trackLayer;
    double _minStrokeDifference;
}

+ (double)defaultHeight;
@property(readonly, nonatomic) double minStrokeDifference; // @synthesize minStrokeDifference=_minStrokeDifference;
@property(readonly, nonatomic) CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(readonly, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(readonly, nonatomic) CALayer *outerRotationLayer; // @synthesize outerRotationLayer=_outerRotationLayer;
@property(readonly, nonatomic) NSArray *polyColors; // @synthesize polyColors=_polyColors;
@property(readonly, nonatomic) long long cycleCount; // @synthesize cycleCount=_cycleCount;
@property(nonatomic) _Bool showTrack; // @synthesize showTrack=_showTrack;
@property(nonatomic) unsigned long long polychromeColorCount; // @synthesize polychromeColorCount=_polychromeColorCount;
@property(nonatomic) long long cycleStart; // @synthesize cycleStart=_cycleStart;
@property(retain, nonatomic) QTMColorGroup *strokeColorGroup; // @synthesize strokeColorGroup=_strokeColorGroup;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) double spinnerRadius; // @synthesize spinnerRadius=_spinnerRadius;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <QTMActivityIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAnimations;
- (void)animateOut;
- (void)strokeRotationCycleFinished;
- (void)addStrokeRotationCycle;
- (void)updatePolychromeStrokeColor;
- (void)updateStrokePath;
- (void)actuallyStopAnimating;
- (void)actuallyStartAnimating;
- (void)setStrokeColor:(id)arg1;
- (void)resetStrokeColor;
- (void)stopAnimatingImmediately;
- (void)stopAnimating;
- (void)startAnimating;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)commonInitializerWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

