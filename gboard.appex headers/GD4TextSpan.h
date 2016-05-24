//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GD4SpanInstrumentation, GD4TouchData, NSString, PBMutableArray;

@interface GD4TextSpan : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool candidateBlacklisted; // @dynamic candidateBlacklisted;
@property(retain, nonatomic) PBMutableArray *candidatesArray; // @dynamic candidatesArray;
@property(nonatomic) int commitEventId; // @dynamic commitEventId;
@property(retain, nonatomic) GD4TextSpan *deletedSpan; // @dynamic deletedSpan;
@property(nonatomic) _Bool hasCandidateBlacklisted; // @dynamic hasCandidateBlacklisted;
@property(nonatomic) _Bool hasCandidatesArray; // @dynamic hasCandidatesArray;
@property(nonatomic) _Bool hasCommitEventId; // @dynamic hasCommitEventId;
@property(nonatomic) _Bool hasDeletedSpan; // @dynamic hasDeletedSpan;
@property(nonatomic) _Bool hasInstrumentation; // @dynamic hasInstrumentation;
@property(nonatomic) _Bool hasIsPotentiallyIncompleteSpan; // @dynamic hasIsPotentiallyIncompleteSpan;
@property(nonatomic) _Bool hasIsSeparator; // @dynamic hasIsSeparator;
@property(nonatomic) _Bool hasIsStartOfSentence; // @dynamic hasIsStartOfSentence;
@property(nonatomic) _Bool hasNonDecodable; // @dynamic hasNonDecodable;
@property(nonatomic) _Bool hasOriginalSpan; // @dynamic hasOriginalSpan;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTouchData; // @dynamic hasTouchData;
@property(retain, nonatomic) GD4SpanInstrumentation *instrumentation; // @dynamic instrumentation;
@property(nonatomic) _Bool isPotentiallyIncompleteSpan; // @dynamic isPotentiallyIncompleteSpan;
@property(nonatomic) _Bool isSeparator; // @dynamic isSeparator;
@property(nonatomic) _Bool isStartOfSentence; // @dynamic isStartOfSentence;
@property(nonatomic) _Bool nonDecodable; // @dynamic nonDecodable;
@property(retain, nonatomic) GD4TextSpan *originalSpan; // @dynamic originalSpan;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) GD4TouchData *touchData; // @dynamic touchData;

@end

