//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GKBKeyboardTypeMapEntry, NSString;

@interface GKBInputBundleDef : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasImeClass; // @dynamic hasImeClass;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasPrimeKeyboard; // @dynamic hasPrimeKeyboard;
@property(nonatomic) _Bool hasSymbolKeyboard; // @dynamic hasSymbolKeyboard;
@property(retain, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSString *imeClass; // @dynamic imeClass;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *primeKeyboard; // @dynamic primeKeyboard;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *symbolKeyboard; // @dynamic symbolKeyboard;

@end

