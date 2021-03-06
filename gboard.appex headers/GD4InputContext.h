//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class PBMutableArray;

@interface GD4InputContext : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int composingSpanEndIndex; // @dynamic composingSpanEndIndex;
@property(nonatomic) int composingSpanStartIndex; // @dynamic composingSpanStartIndex;
@property(nonatomic) _Bool disableComposingSpan; // @dynamic disableComposingSpan;
@property(nonatomic) int endOfSelectionCharacterIndex; // @dynamic endOfSelectionCharacterIndex;
@property(nonatomic) int endOfSelectionSpanIndex; // @dynamic endOfSelectionSpanIndex;
@property(nonatomic) _Bool hasComposingSpanEndIndex; // @dynamic hasComposingSpanEndIndex;
@property(nonatomic) _Bool hasComposingSpanStartIndex; // @dynamic hasComposingSpanStartIndex;
@property(nonatomic) _Bool hasDisableComposingSpan; // @dynamic hasDisableComposingSpan;
@property(nonatomic) _Bool hasEndOfSelectionCharacterIndex; // @dynamic hasEndOfSelectionCharacterIndex;
@property(nonatomic) _Bool hasEndOfSelectionSpanIndex; // @dynamic hasEndOfSelectionSpanIndex;
@property(nonatomic) _Bool hasLastEventId; // @dynamic hasLastEventId;
@property(nonatomic) _Bool hasRevertibleSpanIndex; // @dynamic hasRevertibleSpanIndex;
@property(nonatomic) _Bool hasShiftMode; // @dynamic hasShiftMode;
@property(nonatomic) _Bool hasSpansArray; // @dynamic hasSpansArray;
@property(nonatomic) _Bool hasStartOfSelectionCharacterIndex; // @dynamic hasStartOfSelectionCharacterIndex;
@property(nonatomic) _Bool hasStartOfSelectionSpanIndex; // @dynamic hasStartOfSelectionSpanIndex;
@property(nonatomic) _Bool hasSuspendNextWordPrediction; // @dynamic hasSuspendNextWordPrediction;
@property(nonatomic) int lastEventId; // @dynamic lastEventId;
@property(nonatomic) int revertibleSpanIndex; // @dynamic revertibleSpanIndex;
@property(nonatomic) int shiftMode; // @dynamic shiftMode;
@property(retain, nonatomic) PBMutableArray *spansArray; // @dynamic spansArray;
@property(nonatomic) int startOfSelectionCharacterIndex; // @dynamic startOfSelectionCharacterIndex;
@property(nonatomic) int startOfSelectionSpanIndex; // @dynamic startOfSelectionSpanIndex;
@property(nonatomic) _Bool suspendNextWordPrediction; // @dynamic suspendNextWordPrediction;

@end

