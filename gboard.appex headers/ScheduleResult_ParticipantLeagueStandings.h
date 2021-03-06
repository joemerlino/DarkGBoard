//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class EntityMedals, LocalizedEntityNames, WinLossRecord;

@interface ScheduleResult_ParticipantLeagueStandings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) LocalizedEntityNames *group; // @dynamic group;
@property(nonatomic) _Bool hasGroup; // @dynamic hasGroup;
@property(nonatomic) _Bool hasLeague; // @dynamic hasLeague;
@property(nonatomic) _Bool hasLeagueSeason; // @dynamic hasLeagueSeason;
@property(nonatomic) _Bool hasMedalCount; // @dynamic hasMedalCount;
@property(nonatomic) _Bool hasPosition; // @dynamic hasPosition;
@property(nonatomic) _Bool hasTournamentRound; // @dynamic hasTournamentRound;
@property(nonatomic) _Bool hasWlr; // @dynamic hasWlr;
@property(retain, nonatomic) LocalizedEntityNames *league; // @dynamic league;
@property(retain, nonatomic) LocalizedEntityNames *leagueSeason; // @dynamic leagueSeason;
@property(retain, nonatomic) EntityMedals *medalCount; // @dynamic medalCount;
@property(nonatomic) int position; // @dynamic position;
@property(retain, nonatomic) LocalizedEntityNames *tournamentRound; // @dynamic tournamentRound;
@property(retain, nonatomic) WinLossRecord *wlr; // @dynamic wlr;

@end

