//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Athlete, Metadata, NSMutableArray, NSString;

@interface PlayerStatsResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Athlete *athlete; // @dynamic athlete;
@property(retain, nonatomic) NSMutableArray *careerStatisticsArray; // @dynamic careerStatisticsArray;
@property(readonly, nonatomic) unsigned long long careerStatisticsArray_Count; // @dynamic careerStatisticsArray_Count;
@property(retain, nonatomic) NSMutableArray *currentSeasonStatisticsArray; // @dynamic currentSeasonStatisticsArray;
@property(readonly, nonatomic) unsigned long long currentSeasonStatisticsArray_Count; // @dynamic currentSeasonStatisticsArray_Count;
@property(retain, nonatomic) NSMutableArray *eventStatisticsArray; // @dynamic eventStatisticsArray;
@property(readonly, nonatomic) unsigned long long eventStatisticsArray_Count; // @dynamic eventStatisticsArray_Count;
@property(nonatomic) int focusedSeasonIndex; // @dynamic focusedSeasonIndex;
@property(copy, nonatomic) NSString *focusedStatType; // @dynamic focusedStatType;
@property(nonatomic) _Bool hasAthlete; // @dynamic hasAthlete;
@property(nonatomic) _Bool hasFocusedSeasonIndex; // @dynamic hasFocusedSeasonIndex;
@property(nonatomic) _Bool hasFocusedStatType; // @dynamic hasFocusedStatType;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) Metadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSMutableArray *previousEventStatisticsArray; // @dynamic previousEventStatisticsArray;
@property(readonly, nonatomic) unsigned long long previousEventStatisticsArray_Count; // @dynamic previousEventStatisticsArray_Count;
@property(retain, nonatomic) NSMutableArray *seasonStatisticsArray; // @dynamic seasonStatisticsArray;
@property(readonly, nonatomic) unsigned long long seasonStatisticsArray_Count; // @dynamic seasonStatisticsArray_Count;

@end
