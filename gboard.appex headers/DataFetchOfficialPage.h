//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class StyledText, Url;

@interface DataFetchOfficialPage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Url *URL; // @dynamic URL;
@property(nonatomic) _Bool hasLocalizedDisplayText; // @dynamic hasLocalizedDisplayText;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) StyledText *localizedDisplayText; // @dynamic localizedDisplayText;

@end

