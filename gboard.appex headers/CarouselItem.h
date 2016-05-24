//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class CommonAttributionSource, GPB2Timestamp, NSString, RasterImage, Url;

@interface CarouselItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Url *URL; // @dynamic URL;
@property(retain, nonatomic) CommonAttributionSource *attribution; // @dynamic attribution;
@property(nonatomic) _Bool hasAttribution; // @dynamic hasAttribution;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) RasterImage *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) GPB2Timestamp *timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
