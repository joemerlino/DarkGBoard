//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPB2Date, GTPTimeOfDay;

@interface EventRichSnippetItem_DateTime : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPB2Date *date; // @dynamic date;
@property(nonatomic) _Bool hasDate; // @dynamic hasDate;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(retain, nonatomic) GTPTimeOfDay *time; // @dynamic time;

@end

