//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, NSMutableDictionary, UIColor;

@interface GKBGestureCanvas : UIView
{
    NSMutableDictionary *_IDToTrackMap;
    NSMutableDictionary *_pointToLayerMap;
    CADisplayLink *_displayLink;
    struct CGRect _trackBounds;
    double _trackStartTime;
    id <GKBGestureCanvasDelegate> _delegate;
    UIColor *_trackColor;
    double _maxTrackWidth;
}

@property(nonatomic) double maxTrackWidth; // @synthesize maxTrackWidth=_maxTrackWidth;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(nonatomic) __weak id <GKBGestureCanvasDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doAnimation;
- (void)stopAnimation;
- (void)startAnimationIfNeeded;
- (float)decayFactorForTime:(double)arg1 segmentIndex:(unsigned long long)arg2;
- (float)widthForTime:(double)arg1 segmentIndex:(unsigned long long)arg2;
- (float)alphaForTime:(double)arg1 segmentIndex:(unsigned long long)arg2;
- (void)updateTrackPaths;
- (void)updateTrackBoundsForPoint:(id)arg1;
- (void)recalculateClipRect;
- (id)keyForPoint:(id)arg1;
- (void)addLineFrom:(id)arg1 to:(id)arg2;
- (_Bool)shouldAddPoint:(id)arg1 withLastPoint:(id)arg2;
- (void)reset;
- (void)addTrackPoint:(id)arg1 toTrackWithID:(long long)arg2;
- (id)init;

@end

