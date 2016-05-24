//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface GKBFlightProgressView : UIView
{
    UILabel *_departureLabel;
    UILabel *_arrivalLabel;
    UIImageView *_planeImageView;
    double _progress;
    _Bool _onTime;
    NSLayoutConstraint *_planeCenterXConstraint;
}

- (void).cxx_destruct;
- (void)setDeparture:(id)arg1 arrival:(id)arg2 progress:(double)arg3 onTime:(_Bool)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

