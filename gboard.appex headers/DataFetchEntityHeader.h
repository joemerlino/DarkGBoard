//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class DataFetchEntityEntityMedia, Title;

@interface DataFetchEntityHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMedia; // @dynamic hasMedia;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) DataFetchEntityEntityMedia *media; // @dynamic media;
@property(retain, nonatomic) Title *title; // @dynamic title;

@end
