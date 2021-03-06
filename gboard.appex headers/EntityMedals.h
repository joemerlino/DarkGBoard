//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GWPImage, GWPLink, LocalizedEntityNames;

@interface EntityMedals : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bronze; // @dynamic bronze;
@property(retain, nonatomic) GWPLink *entity; // @dynamic entity;
@property(retain, nonatomic) LocalizedEntityNames *entityRef; // @dynamic entityRef;
@property(retain, nonatomic) GWPImage *flag; // @dynamic flag;
@property(nonatomic) int gold; // @dynamic gold;
@property(nonatomic) _Bool hasBronze; // @dynamic hasBronze;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasEntityRef; // @dynamic hasEntityRef;
@property(nonatomic) _Bool hasFlag; // @dynamic hasFlag;
@property(nonatomic) _Bool hasGold; // @dynamic hasGold;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasSilver; // @dynamic hasSilver;
@property(nonatomic) _Bool hasTotal; // @dynamic hasTotal;
@property(nonatomic) int rank; // @dynamic rank;
@property(nonatomic) int silver; // @dynamic silver;
@property(nonatomic) int total; // @dynamic total;

@end

