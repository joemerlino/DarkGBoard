//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface EventSelector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *event; // @dynamic event;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;
@property(nonatomic) _Bool hasOrganization; // @dynamic hasOrganization;
@property(nonatomic) _Bool hasTeam; // @dynamic hasTeam;
@property(copy, nonatomic) NSString *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *team; // @dynamic team;

@end
