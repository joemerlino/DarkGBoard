//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPB2Timestamp, NSMutableArray;

@interface HourlyForecast : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *forecastArray; // @dynamic forecastArray;
@property(readonly, nonatomic) unsigned long long forecastArray_Count; // @dynamic forecastArray_Count;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasUpdateTime; // @dynamic hasUpdateTime;
@property(retain, nonatomic) GPB2Timestamp *startTime; // @dynamic startTime;
@property(retain, nonatomic) GPB2Timestamp *updateTime; // @dynamic updateTime;

@end

