//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class StyledText, WebAnswerSource;

@interface WebAnswer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) StyledText *answerValue; // @dynamic answerValue;
@property(nonatomic) _Bool hasAnswerValue; // @dynamic hasAnswerValue;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(retain, nonatomic) WebAnswerSource *source; // @dynamic source;

@end

