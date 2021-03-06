//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Disclaimer, RasterImage, StyledText, Url;

@interface SimpleSearchResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Url *URL; // @dynamic URL;
@property(retain, nonatomic) Disclaimer *disclaimer; // @dynamic disclaimer;
@property(nonatomic) _Bool hasDisclaimer; // @dynamic hasDisclaimer;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasSnippet; // @dynamic hasSnippet;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) RasterImage *image; // @dynamic image;
@property(retain, nonatomic) StyledText *snippet; // @dynamic snippet;
@property(retain, nonatomic) StyledText *title; // @dynamic title;

@end

