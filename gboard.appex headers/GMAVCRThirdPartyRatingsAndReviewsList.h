//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GMAVCRThirdPartyRatingsAndReviewsList_DisplayHint, NSMutableArray;

@interface GMAVCRThirdPartyRatingsAndReviewsList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMAVCRThirdPartyRatingsAndReviewsList_DisplayHint *displayHint; // @dynamic displayHint;
@property(nonatomic) _Bool hasDisplayHint; // @dynamic hasDisplayHint;
@property(retain, nonatomic) NSMutableArray *thirdPartyArray; // @dynamic thirdPartyArray;
@property(readonly, nonatomic) unsigned long long thirdPartyArray_Count; // @dynamic thirdPartyArray_Count;

@end
