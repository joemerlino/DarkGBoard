//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class GD4InputContext, PBMutableArray;

@interface GD4KeyPressResponse : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInputContext; // @dynamic hasInputContext;
@property(nonatomic) _Bool hasWordsRemovedFromBlacklistArray; // @dynamic hasWordsRemovedFromBlacklistArray;
@property(retain, nonatomic) GD4InputContext *inputContext; // @dynamic inputContext;
@property(retain, nonatomic) PBMutableArray *wordsRemovedFromBlacklistArray; // @dynamic wordsRemovedFromBlacklistArray;

@end
