//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface UnclicksLoggingControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool eligibleForExperiment; // @dynamic eligibleForExperiment;
@property(nonatomic) _Bool hasEligibleForExperiment; // @dynamic hasEligibleForExperiment;
@property(nonatomic) _Bool hasTrigger; // @dynamic hasTrigger;
@property(retain, nonatomic) NSMutableArray *plusboxStringsArray; // @dynamic plusboxStringsArray;
@property(readonly, nonatomic) unsigned long long plusboxStringsArray_Count; // @dynamic plusboxStringsArray_Count;
@property(nonatomic) _Bool trigger; // @dynamic trigger;

@end

