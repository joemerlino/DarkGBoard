//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBMutableArray;

@interface GKBKeyMappingEntry : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasKeymappingItemsArray; // @dynamic hasKeymappingItemsArray;
@property(nonatomic) _Bool hasStateToKeyMapArray; // @dynamic hasStateToKeyMapArray;
@property(nonatomic) _Bool hasViewId; // @dynamic hasViewId;
@property(retain, nonatomic) PBMutableArray *keymappingItemsArray; // @dynamic keymappingItemsArray;
@property(retain, nonatomic) PBMutableArray *stateToKeyMapArray; // @dynamic stateToKeyMapArray;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end
