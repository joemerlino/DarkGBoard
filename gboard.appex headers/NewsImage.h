//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Image2, NSString, Url;

@interface NewsImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Url *URL; // @dynamic URL;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasIsYoutubeThumbnail; // @dynamic hasIsYoutubeThumbnail;
@property(nonatomic) _Bool hasShow; // @dynamic hasShow;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) Image2 *image; // @dynamic image;
@property(nonatomic) _Bool isYoutubeThumbnail; // @dynamic isYoutubeThumbnail;
@property(nonatomic) _Bool show; // @dynamic show;
@property(copy, nonatomic) NSString *source; // @dynamic source;

@end

