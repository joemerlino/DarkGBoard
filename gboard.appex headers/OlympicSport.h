//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class EntityMedals, MultiParticipantsEventRecords, MultiParticipantsEventResultData, NSMutableArray, OlympicSport_EventsCount;

@interface OlympicSport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allSportsArray; // @dynamic allSportsArray;
@property(readonly, nonatomic) unsigned long long allSportsArray_Count; // @dynamic allSportsArray_Count;
@property(retain, nonatomic) MultiParticipantsEventResultData *champion; // @dynamic champion;
@property(retain, nonatomic) OlympicSport_EventsCount *eventsCount; // @dynamic eventsCount;
@property(nonatomic) _Bool hasChampion; // @dynamic hasChampion;
@property(nonatomic) _Bool hasEventsCount; // @dynamic hasEventsCount;
@property(nonatomic) _Bool hasMedalCount; // @dynamic hasMedalCount;
@property(nonatomic) _Bool hasRecords; // @dynamic hasRecords;
@property(retain, nonatomic) EntityMedals *medalCount; // @dynamic medalCount;
@property(retain, nonatomic) MultiParticipantsEventRecords *records; // @dynamic records;

@end
