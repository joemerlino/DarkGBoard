//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, WinLossRecord;

@interface ScheduleResult_ParticipantSeriesStandings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsOver; // @dynamic hasIsOver;
@property(nonatomic) _Bool hasOtherParticipant; // @dynamic hasOtherParticipant;
@property(nonatomic) _Bool hasRoundType; // @dynamic hasRoundType;
@property(nonatomic) _Bool hasTournament; // @dynamic hasTournament;
@property(nonatomic) _Bool hasTournamentRound; // @dynamic hasTournamentRound;
@property(nonatomic) _Bool hasWlr; // @dynamic hasWlr;
@property(nonatomic) _Bool isOver; // @dynamic isOver;
@property(retain, nonatomic) LocalizedEntityNames *otherParticipant; // @dynamic otherParticipant;
@property(nonatomic) int roundType; // @dynamic roundType;
@property(retain, nonatomic) LocalizedEntityNames *tournament; // @dynamic tournament;
@property(retain, nonatomic) LocalizedEntityNames *tournamentRound; // @dynamic tournamentRound;
@property(retain, nonatomic) WinLossRecord *wlr; // @dynamic wlr;

@end

