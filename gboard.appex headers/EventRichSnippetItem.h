//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class EventRichSnippetItem_DateTime, NSString, Url;

@interface EventRichSnippetItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Url *URL; // @dynamic URL;
@property(retain, nonatomic) EventRichSnippetItem_DateTime *endDateTime; // @dynamic endDateTime;
@property(nonatomic) _Bool hasEndDateTime; // @dynamic hasEndDateTime;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasStartDateTime; // @dynamic hasStartDateTime;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(retain, nonatomic) EventRichSnippetItem_DateTime *startDateTime; // @dynamic startDateTime;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
