//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GOOMultiLineViewMetric : NSObject
{
    int _type;
    double _value;
}

+ (id)metricWithVerticalAlignment:(int)arg1;
+ (id)metricWithFlexibleEdges;
+ (id)metricWithFlexibleMinimumSpace:(double)arg1;
+ (id)metricWithFlexibleSpace;
+ (id)metricWithSpace:(double)arg1;
+ (id)metricWithMinimumDimension:(double)arg1;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;

@end
