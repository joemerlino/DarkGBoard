//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface WPOFDThesaurusEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *antonymsArray; // @dynamic antonymsArray;
@property(readonly, nonatomic) unsigned long long antonymsArray_Count; // @dynamic antonymsArray_Count;
@property(retain, nonatomic) NSMutableArray *examplesArray; // @dynamic examplesArray;
@property(readonly, nonatomic) unsigned long long examplesArray_Count; // @dynamic examplesArray_Count;
@property(nonatomic) _Bool hasHeadword; // @dynamic hasHeadword;
@property(copy, nonatomic) NSString *headword; // @dynamic headword;
@property(retain, nonatomic) NSMutableArray *synonymsArray; // @dynamic synonymsArray;
@property(readonly, nonatomic) unsigned long long synonymsArray_Count; // @dynamic synonymsArray_Count;

@end

