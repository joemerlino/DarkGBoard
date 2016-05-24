//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, WPOFDPerPlatformImages, WPOFDSynonymBigramsComparison;

@interface WPOFDSynonymComparison : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int comparisonPreference; // @dynamic comparisonPreference;
@property(retain, nonatomic) NSMutableArray *entriesArray; // @dynamic entriesArray;
@property(readonly, nonatomic) unsigned long long entriesArray_Count; // @dynamic entriesArray_Count;
@property(retain, nonatomic) WPOFDSynonymBigramsComparison *followingComparison; // @dynamic followingComparison;
@property(nonatomic) _Bool hasComparisonPreference; // @dynamic hasComparisonPreference;
@property(nonatomic) _Bool hasFollowingComparison; // @dynamic hasFollowingComparison;
@property(nonatomic) _Bool hasPrecedingComparison; // @dynamic hasPrecedingComparison;
@property(nonatomic) _Bool hasSynonym; // @dynamic hasSynonym;
@property(nonatomic) _Bool hasTerm; // @dynamic hasTerm;
@property(nonatomic) _Bool hasUsageOverTimeComparisonImage; // @dynamic hasUsageOverTimeComparisonImage;
@property(retain, nonatomic) WPOFDSynonymBigramsComparison *precedingComparison; // @dynamic precedingComparison;
@property(copy, nonatomic) NSString *synonym; // @dynamic synonym;
@property(copy, nonatomic) NSString *term; // @dynamic term;
@property(retain, nonatomic) WPOFDPerPlatformImages *usageOverTimeComparisonImage; // @dynamic usageOverTimeComparisonImage;

@end

