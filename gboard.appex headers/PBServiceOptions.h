//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class PBMutableArray;

@interface PBServiceOptions : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool deprecated; // @dynamic deprecated;
@property(nonatomic) double failureDetectionDelay; // @dynamic failureDetectionDelay;
@property(nonatomic) _Bool hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) _Bool hasFailureDetectionDelay; // @dynamic hasFailureDetectionDelay;
@property(nonatomic) _Bool hasMulticastStub; // @dynamic hasMulticastStub;
@property(nonatomic) _Bool hasUninterpretedOptionArray; // @dynamic hasUninterpretedOptionArray;
@property(nonatomic) _Bool multicastStub; // @dynamic multicastStub;
@property(retain, nonatomic) PBMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;

@end

