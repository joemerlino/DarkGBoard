//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GWPImage, GWPLink, GWPPerson, NSMutableArray, NSString, SportsTeam;

@interface Athlete : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bib; // @dynamic bib;
@property(nonatomic) _Bool hasBib; // @dynamic hasBib;
@property(nonatomic) _Bool hasJerseyNumber; // @dynamic hasJerseyNumber;
@property(nonatomic) _Bool hasPerson; // @dynamic hasPerson;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasRoleShort; // @dynamic hasRoleShort;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStatusShort; // @dynamic hasStatusShort;
@property(nonatomic) _Bool hasTeam; // @dynamic hasTeam;
@property(nonatomic) _Bool hasTeamImage; // @dynamic hasTeamImage;
@property(nonatomic) _Bool hasUniformNumber; // @dynamic hasUniformNumber;
@property(copy, nonatomic) NSString *jerseyNumber; // @dynamic jerseyNumber;
@property(retain, nonatomic) GWPPerson *person; // @dynamic person;
@property(retain, nonatomic) GWPLink *role; // @dynamic role;
@property(retain, nonatomic) GWPLink *roleShort; // @dynamic roleShort;
@property(retain, nonatomic) GWPLink *status; // @dynamic status;
@property(retain, nonatomic) GWPLink *statusShort; // @dynamic statusShort;
@property(retain, nonatomic) SportsTeam *team; // @dynamic team;
@property(retain, nonatomic) NSMutableArray *teamDataArray; // @dynamic teamDataArray;
@property(readonly, nonatomic) unsigned long long teamDataArray_Count; // @dynamic teamDataArray_Count;
@property(retain, nonatomic) GWPImage *teamImage; // @dynamic teamImage;
@property(nonatomic) int uniformNumber; // @dynamic uniformNumber;

@end

