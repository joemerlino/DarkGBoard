//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, NSMutableArray;

@interface CommonAttributionSourceList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBBoolValue *complete; // @dynamic complete;
@property(nonatomic) _Bool hasComplete; // @dynamic hasComplete;
@property(retain, nonatomic) NSMutableArray *sourceArray; // @dynamic sourceArray;
@property(readonly, nonatomic) unsigned long long sourceArray_Count; // @dynamic sourceArray_Count;

@end

