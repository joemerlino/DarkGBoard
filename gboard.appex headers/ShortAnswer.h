//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class AnswerLink, AnswerMetadataList, DataFetchEntityId, NSMutableArray, NSString;

@interface ShortAnswer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AnswerLink *answerLink; // @dynamic answerLink;
@property(copy, nonatomic) NSString *answerValue; // @dynamic answerValue;
@property(copy, nonatomic) NSString *attributeId; // @dynamic attributeId;
@property(retain, nonatomic) NSMutableArray *breadcrumbArray; // @dynamic breadcrumbArray;
@property(readonly, nonatomic) unsigned long long breadcrumbArray_Count; // @dynamic breadcrumbArray_Count;
@property(copy, nonatomic) NSString *explanation; // @dynamic explanation;
@property(nonatomic) _Bool hasAnswerLink; // @dynamic hasAnswerLink;
@property(nonatomic) _Bool hasMetadataList; // @dynamic hasMetadataList;
@property(nonatomic) _Bool hasSubjectEntityId; // @dynamic hasSubjectEntityId;
@property(copy, nonatomic) NSString *localizedAttributeName; // @dynamic localizedAttributeName;
@property(copy, nonatomic) NSString *localizedSubjectName; // @dynamic localizedSubjectName;
@property(retain, nonatomic) AnswerMetadataList *metadataList; // @dynamic metadataList;
@property(copy, nonatomic) NSString *spokenAnswer; // @dynamic spokenAnswer;
@property(retain, nonatomic) DataFetchEntityId *subjectEntityId; // @dynamic subjectEntityId;

@end

