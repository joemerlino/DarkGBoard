//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, StyledText;

@interface TitleLine : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int formatOneOfCase; // @dynamic formatOneOfCase;
@property(retain, nonatomic) StyledText *localizedFormattedText; // @dynamic localizedFormattedText;
@property(copy, nonatomic) NSString *localizedText; // @dynamic localizedText;

@end

