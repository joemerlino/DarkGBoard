//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SubRequestIdentifier;

@interface LeagueMembersResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(retain, nonatomic) SubRequestIdentifier *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSMutableArray *teamArray; // @dynamic teamArray;
@property(readonly, nonatomic) unsigned long long teamArray_Count; // @dynamic teamArray_Count;

@end

