//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface QosTierConfiguration : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLogSourceName; // @dynamic hasLogSourceName;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(retain, nonatomic) NSString *logSourceName; // @dynamic logSourceName;
@property(nonatomic) int qosTier; // @dynamic qosTier;

@end

