//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class DataFetchDataRequest, Url;

@interface DataFetchNextRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) DataFetchDataRequest *dataRequest; // @dynamic dataRequest;
@property(nonatomic) _Bool hasDataRequest; // @dynamic hasDataRequest;
@property(nonatomic) _Bool hasWebLink; // @dynamic hasWebLink;
@property(retain, nonatomic) Url *webLink; // @dynamic webLink;

@end
