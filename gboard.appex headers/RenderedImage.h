//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Image, ImageRendering;

@interface RenderedImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasRendering; // @dynamic hasRendering;
@property(retain, nonatomic) Image *image; // @dynamic image;
@property(retain, nonatomic) ImageRendering *rendering; // @dynamic rendering;

@end

