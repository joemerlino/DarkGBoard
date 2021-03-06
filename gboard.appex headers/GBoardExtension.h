//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ArtEvent, NSString, OnboardingEvent, Performance, QueryPredictionEvent, SearchEvent, SettingsEvent;

@interface GBoardExtension : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *anonymousUserId; // @dynamic anonymousUserId;
@property(retain, nonatomic) ArtEvent *artEvent; // @dynamic artEvent;
@property(nonatomic) _Bool fullAccessEnabled; // @dynamic fullAccessEnabled;
@property(retain, nonatomic) NSString *gboardVersion; // @dynamic gboardVersion;
@property(nonatomic) _Bool hasAnonymousUserId; // @dynamic hasAnonymousUserId;
@property(nonatomic) _Bool hasArtEvent; // @dynamic hasArtEvent;
@property(nonatomic) _Bool hasFullAccessEnabled; // @dynamic hasFullAccessEnabled;
@property(nonatomic) _Bool hasGboardVersion; // @dynamic hasGboardVersion;
@property(nonatomic) _Bool hasOnboardingEvent; // @dynamic hasOnboardingEvent;
@property(nonatomic) _Bool hasPerformance; // @dynamic hasPerformance;
@property(nonatomic) _Bool hasQueryPredictionEvent; // @dynamic hasQueryPredictionEvent;
@property(nonatomic) _Bool hasSearchEvent; // @dynamic hasSearchEvent;
@property(nonatomic) _Bool hasSettingsEvent; // @dynamic hasSettingsEvent;
@property(retain, nonatomic) OnboardingEvent *onboardingEvent; // @dynamic onboardingEvent;
@property(retain, nonatomic) Performance *performance; // @dynamic performance;
@property(retain, nonatomic) QueryPredictionEvent *queryPredictionEvent; // @dynamic queryPredictionEvent;
@property(retain, nonatomic) SearchEvent *searchEvent; // @dynamic searchEvent;
@property(retain, nonatomic) SettingsEvent *settingsEvent; // @dynamic settingsEvent;

@end

