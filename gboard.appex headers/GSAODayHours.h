//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GSAODayHours : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocalizedDayName; // @dynamic hasLocalizedDayName;
@property(retain, nonatomic) NSMutableArray *hoursIntervalArray; // @dynamic hoursIntervalArray;
@property(readonly, nonatomic) unsigned long long hoursIntervalArray_Count; // @dynamic hoursIntervalArray_Count;
@property(copy, nonatomic) NSString *localizedDayName; // @dynamic localizedDayName;

@end

