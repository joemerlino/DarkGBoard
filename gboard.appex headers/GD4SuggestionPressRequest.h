//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GD4InputContext, NSString;

@interface GD4SuggestionPressRequest : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) NSString *candidateText; // @dynamic candidateText;
@property(nonatomic) int candidateType; // @dynamic candidateType;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasCandidateText; // @dynamic hasCandidateText;
@property(nonatomic) _Bool hasCandidateType; // @dynamic hasCandidateType;
@property(nonatomic) _Bool hasInputContext; // @dynamic hasInputContext;
@property(retain, nonatomic) GD4InputContext *inputContext; // @dynamic inputContext;

@end

