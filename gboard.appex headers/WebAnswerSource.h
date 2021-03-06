//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class CommonAttributionSource, NSMutableArray, NSString, StyledText;

@interface WebAnswerSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CommonAttributionSource *attribution; // @dynamic attribution;
@property(retain, nonatomic) NSMutableArray *breadcrumbArray; // @dynamic breadcrumbArray;
@property(readonly, nonatomic) unsigned long long breadcrumbArray_Count; // @dynamic breadcrumbArray_Count;
@property(nonatomic) _Bool hasAttribution; // @dynamic hasAttribution;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) StyledText *title; // @dynamic title;
@property(copy, nonatomic) NSString *veName; // @dynamic veName;

@end

