//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ArtResultInteraction;

@interface ArtEvent : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ArtResultInteraction *artResultInteraction; // @dynamic artResultInteraction;
@property(nonatomic) int artTab; // @dynamic artTab;
@property(nonatomic) int artUserAction; // @dynamic artUserAction;
@property(nonatomic) _Bool hasArtResultInteraction; // @dynamic hasArtResultInteraction;
@property(nonatomic) _Bool hasArtTab; // @dynamic hasArtTab;
@property(nonatomic) _Bool hasArtUserAction; // @dynamic hasArtUserAction;

@end

