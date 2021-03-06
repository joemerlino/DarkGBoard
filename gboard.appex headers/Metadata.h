//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, NSString;

@interface Metadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool displayHomeFirst; // @dynamic displayHomeFirst;
@property(retain, nonatomic) LocalizedEntityNames *entity; // @dynamic entity;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasDisplayHomeFirst; // @dynamic hasDisplayHomeFirst;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasIsAmericanEntity; // @dynamic hasIsAmericanEntity;
@property(nonatomic) _Bool hasLeague; // @dynamic hasLeague;
@property(nonatomic) _Bool hasLeagueSeason; // @dynamic hasLeagueSeason;
@property(nonatomic) _Bool hasOpponent; // @dynamic hasOpponent;
@property(nonatomic) _Bool hasSeries; // @dynamic hasSeries;
@property(nonatomic) _Bool hasSports; // @dynamic hasSports;
@property(nonatomic) _Bool isAmericanEntity; // @dynamic isAmericanEntity;
@property(retain, nonatomic) LocalizedEntityNames *league; // @dynamic league;
@property(retain, nonatomic) LocalizedEntityNames *leagueSeason; // @dynamic leagueSeason;
@property(retain, nonatomic) LocalizedEntityNames *opponent; // @dynamic opponent;
@property(retain, nonatomic) LocalizedEntityNames *series; // @dynamic series;
@property(copy, nonatomic) NSString *sports; // @dynamic sports;

@end

