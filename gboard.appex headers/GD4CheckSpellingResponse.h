//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class PBMutableArray;

@interface GD4CheckSpellingResponse : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInVocabulary; // @dynamic hasInVocabulary;
@property(nonatomic) _Bool hasSuggestionsArray; // @dynamic hasSuggestionsArray;
@property(nonatomic) _Bool inVocabulary; // @dynamic inVocabulary;
@property(retain, nonatomic) PBMutableArray *suggestionsArray; // @dynamic suggestionsArray;

@end

