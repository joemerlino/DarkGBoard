//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NewsImage, Url;

@interface NewsResults : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasMoreLinkURL; // @dynamic hasMoreLinkURL;
@property(retain, nonatomic) NewsImage *image; // @dynamic image;
@property(retain, nonatomic) Url *moreLinkURL; // @dynamic moreLinkURL;
@property(retain, nonatomic) NSMutableArray *resultArray; // @dynamic resultArray;
@property(readonly, nonatomic) unsigned long long resultArray_Count; // @dynamic resultArray_Count;

@end
