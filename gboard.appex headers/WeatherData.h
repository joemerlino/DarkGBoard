//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class CommonAttributionSourceList, FocusedIntent, GPB2Timestamp, HourlyForecast, NSMutableArray, WeatherLocation, WeatherState;

@interface WeatherData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CommonAttributionSourceList *attributionSourceList; // @dynamic attributionSourceList;
@property(retain, nonatomic) WeatherState *current; // @dynamic current;
@property(retain, nonatomic) GPB2Timestamp *currentUpdateTime; // @dynamic currentUpdateTime;
@property(retain, nonatomic) NSMutableArray *dailyForecastArray; // @dynamic dailyForecastArray;
@property(readonly, nonatomic) unsigned long long dailyForecastArray_Count; // @dynamic dailyForecastArray_Count;
@property(retain, nonatomic) FocusedIntent *focusedIntent; // @dynamic focusedIntent;
@property(nonatomic) _Bool hasAttributionSourceList; // @dynamic hasAttributionSourceList;
@property(nonatomic) _Bool hasCurrent; // @dynamic hasCurrent;
@property(nonatomic) _Bool hasCurrentUpdateTime; // @dynamic hasCurrentUpdateTime;
@property(nonatomic) _Bool hasFocusedIntent; // @dynamic hasFocusedIntent;
@property(nonatomic) _Bool hasHourlyForecast; // @dynamic hasHourlyForecast;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) HourlyForecast *hourlyForecast; // @dynamic hourlyForecast;
@property(retain, nonatomic) WeatherLocation *location; // @dynamic location;

@end

