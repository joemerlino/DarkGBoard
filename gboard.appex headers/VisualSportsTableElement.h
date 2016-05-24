//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, NSMutableArray, NSString;

@interface VisualSportsTableElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool addNumberedRanking; // @dynamic addNumberedRanking;
@property(nonatomic) int customLogoHeight; // @dynamic customLogoHeight;
@property(nonatomic) int customLogoWidth; // @dynamic customLogoWidth;
@property(nonatomic) _Bool displayIcons; // @dynamic displayIcons;
@property(retain, nonatomic) LocalizedEntityNames *entity; // @dynamic entity;
@property(nonatomic) _Bool hasAddNumberedRanking; // @dynamic hasAddNumberedRanking;
@property(nonatomic) _Bool hasCustomLogoHeight; // @dynamic hasCustomLogoHeight;
@property(nonatomic) _Bool hasCustomLogoWidth; // @dynamic hasCustomLogoWidth;
@property(nonatomic) _Bool hasDisplayIcons; // @dynamic hasDisplayIcons;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasIsShown; // @dynamic hasIsShown;
@property(nonatomic) _Bool hasTableHeader; // @dynamic hasTableHeader;
@property(nonatomic) _Bool isShown; // @dynamic isShown;
@property(retain, nonatomic) NSMutableArray *tableColumnArray; // @dynamic tableColumnArray;
@property(readonly, nonatomic) unsigned long long tableColumnArray_Count; // @dynamic tableColumnArray_Count;
@property(retain, nonatomic) NSMutableArray *tableEntryArray; // @dynamic tableEntryArray;
@property(readonly, nonatomic) unsigned long long tableEntryArray_Count; // @dynamic tableEntryArray_Count;
@property(copy, nonatomic) NSString *tableHeader; // @dynamic tableHeader;

@end
