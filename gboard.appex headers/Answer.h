//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ShortAnswer, WebAnswer;

@interface Answer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int answerOneOfCase; // @dynamic answerOneOfCase;
@property(retain, nonatomic) ShortAnswer *shortAnswer; // @dynamic shortAnswer;
@property(retain, nonatomic) WebAnswer *webAnswer; // @dynamic webAnswer;

@end

