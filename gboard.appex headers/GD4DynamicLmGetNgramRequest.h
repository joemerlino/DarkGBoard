//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GD4DynamicLmGetNgramRequest : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPrecedingText; // @dynamic hasPrecedingText;
@property(nonatomic) _Bool hasTargetTerm; // @dynamic hasTargetTerm;
@property(retain, nonatomic) NSString *precedingText; // @dynamic precedingText;
@property(retain, nonatomic) NSString *targetTerm; // @dynamic targetTerm;

@end

