//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LocalizedEntityNames, NSMutableArray;

@interface BracketsResult_Round_MatchGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *matchArray; // @dynamic matchArray;
@property(readonly, nonatomic) unsigned long long matchArray_Count; // @dynamic matchArray_Count;
@property(retain, nonatomic) LocalizedEntityNames *title; // @dynamic title;

@end
