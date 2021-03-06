//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GD4ExperimentValues;

@interface GD4KeyboardRuntimeParams : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool avoidComposingSpan; // @dynamic avoidComposingSpan;
@property(nonatomic) _Bool blockOffensiveWords; // @dynamic blockOffensiveWords;
@property(nonatomic) int capsMode; // @dynamic capsMode;
@property(nonatomic) _Bool dedupComposingSuggestions; // @dynamic dedupComposingSuggestions;
@property(nonatomic) _Bool enableAutoCapitalization; // @dynamic enableAutoCapitalization;
@property(nonatomic) _Bool enableAutoCorrection; // @dynamic enableAutoCorrection;
@property(nonatomic) _Bool enableDoubleSpaceToPeriod; // @dynamic enableDoubleSpaceToPeriod;
@property(nonatomic) _Bool enableNextWordPrediction; // @dynamic enableNextWordPrediction;
@property(nonatomic) _Bool enableUserHistoryLearning; // @dynamic enableUserHistoryLearning;
@property(retain, nonatomic) GD4ExperimentValues *experimentValues; // @dynamic experimentValues;
@property(nonatomic) _Bool hasAvoidComposingSpan; // @dynamic hasAvoidComposingSpan;
@property(nonatomic) _Bool hasBlockOffensiveWords; // @dynamic hasBlockOffensiveWords;
@property(nonatomic) _Bool hasCapsMode; // @dynamic hasCapsMode;
@property(nonatomic) _Bool hasDedupComposingSuggestions; // @dynamic hasDedupComposingSuggestions;
@property(nonatomic) _Bool hasEnableAutoCapitalization; // @dynamic hasEnableAutoCapitalization;
@property(nonatomic) _Bool hasEnableAutoCorrection; // @dynamic hasEnableAutoCorrection;
@property(nonatomic) _Bool hasEnableDoubleSpaceToPeriod; // @dynamic hasEnableDoubleSpaceToPeriod;
@property(nonatomic) _Bool hasEnableNextWordPrediction; // @dynamic hasEnableNextWordPrediction;
@property(nonatomic) _Bool hasEnableUserHistoryLearning; // @dynamic hasEnableUserHistoryLearning;
@property(nonatomic) _Bool hasExperimentValues; // @dynamic hasExperimentValues;
@property(nonatomic) _Bool hasPreserveManuallyCapitalizedWords; // @dynamic hasPreserveManuallyCapitalizedWords;
@property(nonatomic) _Bool hasSuspendNextWordPredictionOnBackspace; // @dynamic hasSuspendNextWordPredictionOnBackspace;
@property(nonatomic) _Bool preserveManuallyCapitalizedWords; // @dynamic preserveManuallyCapitalizedWords;
@property(nonatomic) _Bool suspendNextWordPredictionOnBackspace; // @dynamic suspendNextWordPredictionOnBackspace;

@end

