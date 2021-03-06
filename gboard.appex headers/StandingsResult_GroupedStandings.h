//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, NSMutableArray, StandingsResult_GroupedStandings_Context;

@interface StandingsResult_GroupedStandings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) LocalizedEntityNames *context; // @dynamic context;
@property(retain, nonatomic) StandingsResult_GroupedStandings_Context *groupContext; // @dynamic groupContext;
@property(retain, nonatomic) NSMutableArray *groupedStandingsArray; // @dynamic groupedStandingsArray;
@property(readonly, nonatomic) unsigned long long groupedStandingsArray_Count; // @dynamic groupedStandingsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasGroupContext; // @dynamic hasGroupContext;
@property(nonatomic) _Bool hasHierarchyLevel; // @dynamic hasHierarchyLevel;
@property(nonatomic) _Bool hasLeagueSeason; // @dynamic hasLeagueSeason;
@property(nonatomic) _Bool hasStandingsAvailable; // @dynamic hasStandingsAvailable;
@property(nonatomic) int hierarchyLevel; // @dynamic hierarchyLevel;
@property(retain, nonatomic) LocalizedEntityNames *leagueSeason; // @dynamic leagueSeason;
@property(nonatomic) _Bool standingsAvailable; // @dynamic standingsAvailable;
@property(retain, nonatomic) NSMutableArray *standingsTableArray; // @dynamic standingsTableArray;
@property(readonly, nonatomic) unsigned long long standingsTableArray_Count; // @dynamic standingsTableArray_Count;

@end

