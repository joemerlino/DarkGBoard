//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class StyledText;

@interface GSAPExistence : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsClosed; // @dynamic hasIsClosed;
@property(nonatomic) _Bool hasLocalizedClosedReasonText; // @dynamic hasLocalizedClosedReasonText;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool isClosed; // @dynamic isClosed;
@property(retain, nonatomic) StyledText *localizedClosedReasonText; // @dynamic localizedClosedReasonText;
@property(nonatomic) int reason; // @dynamic reason;

@end
