//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, WPOFDLabelSet, WPOFDNote, WPOFDSenseFamily;

@interface WPOFDSubEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool containsWordRelevantToQuery; // @dynamic containsWordRelevantToQuery;
@property(nonatomic) _Bool hasContainsWordRelevantToQuery; // @dynamic hasContainsWordRelevantToQuery;
@property(nonatomic) _Bool hasLabelSet; // @dynamic hasLabelSet;
@property(nonatomic) _Bool hasLemma; // @dynamic hasLemma;
@property(nonatomic) _Bool hasNote; // @dynamic hasNote;
@property(nonatomic) _Bool hasSenseFamily; // @dynamic hasSenseFamily;
@property(nonatomic) _Bool hasSyllabifiedLemma; // @dynamic hasSyllabifiedLemma;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasVariantDescription; // @dynamic hasVariantDescription;
@property(retain, nonatomic) NSMutableArray *indexingKeysArray; // @dynamic indexingKeysArray;
@property(readonly, nonatomic) unsigned long long indexingKeysArray_Count; // @dynamic indexingKeysArray_Count;
@property(retain, nonatomic) WPOFDLabelSet *labelSet; // @dynamic labelSet;
@property(copy, nonatomic) NSString *lemma; // @dynamic lemma;
@property(retain, nonatomic) WPOFDNote *note; // @dynamic note;
@property(retain, nonatomic) NSMutableArray *partsOfSpeechArray; // @dynamic partsOfSpeechArray;
@property(readonly, nonatomic) unsigned long long partsOfSpeechArray_Count; // @dynamic partsOfSpeechArray_Count;
@property(retain, nonatomic) NSMutableArray *phoneticsArray; // @dynamic phoneticsArray;
@property(readonly, nonatomic) unsigned long long phoneticsArray_Count; // @dynamic phoneticsArray_Count;
@property(retain, nonatomic) WPOFDSenseFamily *senseFamily; // @dynamic senseFamily;
@property(copy, nonatomic) NSString *syllabifiedLemma; // @dynamic syllabifiedLemma;
@property(retain, nonatomic) NSMutableArray *triggeringPhrasesArray; // @dynamic triggeringPhrasesArray;
@property(readonly, nonatomic) unsigned long long triggeringPhrasesArray_Count; // @dynamic triggeringPhrasesArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *variantDescription; // @dynamic variantDescription;
@property(retain, nonatomic) NSMutableArray *variantGroupArray; // @dynamic variantGroupArray;
@property(readonly, nonatomic) unsigned long long variantGroupArray_Count; // @dynamic variantGroupArray_Count;
@property(retain, nonatomic) NSMutableArray *variantMessagesArray; // @dynamic variantMessagesArray;
@property(readonly, nonatomic) unsigned long long variantMessagesArray_Count; // @dynamic variantMessagesArray_Count;
@property(retain, nonatomic) NSMutableArray *variantsArray; // @dynamic variantsArray;
@property(readonly, nonatomic) unsigned long long variantsArray_Count; // @dynamic variantsArray_Count;

@end

