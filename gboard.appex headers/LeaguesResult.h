//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SubRequestIdentifier;

@interface LeaguesResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(retain, nonatomic) SubRequestIdentifier *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSMutableArray *leagueArray; // @dynamic leagueArray;
@property(readonly, nonatomic) unsigned long long leagueArray_Count; // @dynamic leagueArray_Count;

@end
