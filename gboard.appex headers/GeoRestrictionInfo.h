//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface GeoRestrictionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int fallbackPolicy; // @dynamic fallbackPolicy;
@property(nonatomic) _Bool hasFallbackPolicy; // @dynamic hasFallbackPolicy;
@property(retain, nonatomic) NSMutableArray *ruleArray; // @dynamic ruleArray;
@property(readonly, nonatomic) unsigned long long ruleArray_Count; // @dynamic ruleArray_Count;

@end

