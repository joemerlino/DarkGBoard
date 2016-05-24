//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, MultiParticipantsEventResultData, NSMutableArray, SportsTeam;

@interface AthleteResultData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *athleteArray; // @dynamic athleteArray;
@property(readonly, nonatomic) unsigned long long athleteArray_Count; // @dynamic athleteArray_Count;
@property(retain, nonatomic) LocalizedEntityNames *countryDelegation; // @dynamic countryDelegation;
@property(retain, nonatomic) MultiParticipantsEventResultData *finalMark; // @dynamic finalMark;
@property(nonatomic) _Bool hasCountryDelegation; // @dynamic hasCountryDelegation;
@property(nonatomic) _Bool hasFinalMark; // @dynamic hasFinalMark;
@property(nonatomic) _Bool hasLane; // @dynamic hasLane;
@property(nonatomic) _Bool hasMedal; // @dynamic hasMedal;
@property(nonatomic) _Bool hasQualified; // @dynamic hasQualified;
@property(nonatomic) _Bool hasRanking; // @dynamic hasRanking;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTeam; // @dynamic hasTeam;
@property(nonatomic) int lane; // @dynamic lane;
@property(nonatomic) int medal; // @dynamic medal;
@property(nonatomic) _Bool qualified; // @dynamic qualified;
@property(nonatomic) int ranking; // @dynamic ranking;
@property(retain, nonatomic) NSMutableArray *resultPartArray; // @dynamic resultPartArray;
@property(readonly, nonatomic) unsigned long long resultPartArray_Count; // @dynamic resultPartArray_Count;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) SportsTeam *team; // @dynamic team;

@end

