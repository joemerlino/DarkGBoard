//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GD4InputContext;

@interface GD4EditUserHistoryRequest : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int affectedSpanIndex; // @dynamic affectedSpanIndex;
@property(nonatomic) _Bool hasAffectedSpanIndex; // @dynamic hasAffectedSpanIndex;
@property(nonatomic) _Bool hasInputContext; // @dynamic hasInputContext;
@property(nonatomic) _Bool hasOperation; // @dynamic hasOperation;
@property(retain, nonatomic) GD4InputContext *inputContext; // @dynamic inputContext;
@property(nonatomic) int operation; // @dynamic operation;

@end

