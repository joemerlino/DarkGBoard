//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Event, Metadata, SubRequestIdentifier;

@interface DetailedMatchResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Event *event; // @dynamic event;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SubRequestIdentifier *identifier; // @dynamic identifier;
@property(retain, nonatomic) Metadata *metadata; // @dynamic metadata;

@end

