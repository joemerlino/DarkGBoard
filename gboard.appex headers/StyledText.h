//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface StyledText : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *rawText; // @dynamic rawText;
@property(retain, nonatomic) NSMutableArray *styledSpanArray; // @dynamic styledSpanArray;
@property(readonly, nonatomic) unsigned long long styledSpanArray_Count; // @dynamic styledSpanArray_Count;

@end
