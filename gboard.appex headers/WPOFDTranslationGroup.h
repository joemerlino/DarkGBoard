//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, WPOFDPartOfSpeech;

@interface WPOFDTranslationGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPos; // @dynamic hasPos;
@property(retain, nonatomic) WPOFDPartOfSpeech *pos; // @dynamic pos;
@property(retain, nonatomic) NSMutableArray *translationsArray; // @dynamic translationsArray;
@property(readonly, nonatomic) unsigned long long translationsArray_Count; // @dynamic translationsArray_Count;

@end
