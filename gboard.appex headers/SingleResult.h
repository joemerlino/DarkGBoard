//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class BiddingInfo;

@interface SingleResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BiddingInfo *biddingInfo; // @dynamic biddingInfo;
@property(nonatomic) _Bool hasBiddingInfo; // @dynamic hasBiddingInfo;
@property(nonatomic) _Bool hasIsExplicitIntent; // @dynamic hasIsExplicitIntent;
@property(nonatomic) _Bool isExplicitIntent; // @dynamic isExplicitIntent;

@end

