//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GWPLocalizedString, LocalizedEntityNames, NSMutableArray, StandingsResult_GroupedStandings_Context;

@interface StandingsResult_GroupedStandings_StandingsTable : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allocatedPlacesArray; // @dynamic allocatedPlacesArray;
@property(readonly, nonatomic) unsigned long long allocatedPlacesArray_Count; // @dynamic allocatedPlacesArray_Count;
@property(retain, nonatomic) LocalizedEntityNames *context; // @dynamic context;
@property(retain, nonatomic) StandingsResult_GroupedStandings_Context *groupContext; // @dynamic groupContext;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasGroupContext; // @dynamic hasGroupContext;
@property(nonatomic) _Bool hasRankedEntitiesTitle; // @dynamic hasRankedEntitiesTitle;
@property(retain, nonatomic) GWPLocalizedString *rankedEntitiesTitle; // @dynamic rankedEntitiesTitle;
@property(retain, nonatomic) NSMutableArray *standingsEntryArray; // @dynamic standingsEntryArray;
@property(readonly, nonatomic) unsigned long long standingsEntryArray_Count; // @dynamic standingsEntryArray_Count;

@end

