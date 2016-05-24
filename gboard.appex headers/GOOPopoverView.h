//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface GOOPopoverView : UIView
{
    UIView *_contentView;
    struct UIEdgeInsets _insetsForEdgesFromArrows;
    struct UIEdgeInsets _insetsForValidArrowOffsets;
    struct CGPoint _point;
    NSArray *_edgeImages;
    NSArray *_arrowImages;
    int _arrowEdge;
    double _arrowOffset;
    id <GOOPopoverViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GOOPopoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)minimumDistanceFromDeviceEdges;
- (struct UIEdgeInsets)contentInsets;
- (unsigned long long)arrowDirection;
- (void)setFrame:(struct CGRect)arg1;
- (void)showAtPoint:(struct CGPoint)arg1 arrowDirections:(unsigned long long)arg2;
- (void)pointAtRect:(struct CGRect)arg1 arrowDirections:(unsigned long long)arg2;
- (void)pointAtView:(id)arg1 withOffset:(struct CGSize)arg2 arrowDirections:(unsigned long long)arg3;
- (void)pointAtView:(id)arg1 arrowDirections:(unsigned long long)arg2;
- (void)didAnimateOut;
- (void)animateOut;
- (void)prepareToAnimateOut;
- (void)animateInWithDuration:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)shouldDisplayArrow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end

