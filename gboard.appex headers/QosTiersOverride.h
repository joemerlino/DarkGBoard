//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class PBMutableArray;

@interface QosTiersOverride : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQosTierConfigurationArray; // @dynamic hasQosTierConfigurationArray;
@property(nonatomic) _Bool hasQosTierFingerprint; // @dynamic hasQosTierFingerprint;
@property(retain, nonatomic) PBMutableArray *qosTierConfigurationArray; // @dynamic qosTierConfigurationArray;
@property(nonatomic) long long qosTierFingerprint; // @dynamic qosTierFingerprint;

@end

