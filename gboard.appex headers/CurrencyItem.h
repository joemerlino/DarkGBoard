//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class CurrencyValue, NSString;

@interface CurrencyItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *code; // @dynamic code;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *localizedMessage; // @dynamic localizedMessage;
@property(retain, nonatomic) CurrencyValue *value; // @dynamic value;

@end

