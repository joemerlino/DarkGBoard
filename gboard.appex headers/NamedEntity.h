//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Localization, NSMutableArray, NSString;

@interface NamedEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *abbreviation; // @dynamic abbreviation;
@property(copy, nonatomic) NSString *affiliation; // @dynamic affiliation;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(nonatomic) _Bool hasAbbreviation; // @dynamic hasAbbreviation;
@property(nonatomic) _Bool hasAffiliation; // @dynamic hasAffiliation;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;
@property(nonatomic) _Bool hasOriginal; // @dynamic hasOriginal;
@property(nonatomic) _Bool hasStatsId; // @dynamic hasStatsId;
@property(nonatomic) _Bool hasStatsIdType; // @dynamic hasStatsIdType;
@property(nonatomic) _Bool hasStatsName; // @dynamic hasStatsName;
@property(retain, nonatomic) Localization *original; // @dynamic original;
@property(copy, nonatomic) NSString *statsId; // @dynamic statsId;
@property(nonatomic) int statsIdType; // @dynamic statsIdType;
@property(copy, nonatomic) NSString *statsName; // @dynamic statsName;
@property(retain, nonatomic) NSMutableArray *translationsArray; // @dynamic translationsArray;
@property(readonly, nonatomic) unsigned long long translationsArray_Count; // @dynamic translationsArray_Count;

@end
