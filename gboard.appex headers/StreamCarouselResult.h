//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Carousel, Featured;

@interface StreamCarouselResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Carousel *carousel; // @dynamic carousel;
@property(retain, nonatomic) Featured *featured; // @dynamic featured;
@property(nonatomic) _Bool hasCarousel; // @dynamic hasCarousel;
@property(nonatomic) _Bool hasFeatured; // @dynamic hasFeatured;

@end

