//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Image, NSString;

@interface AppDisplayInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Image *appIcon; // @dynamic appIcon;
@property(copy, nonatomic) NSString *appTitle; // @dynamic appTitle;
@property(nonatomic) _Bool hasAppIcon; // @dynamic hasAppIcon;
@property(nonatomic) _Bool hasEscapeHatch; // @dynamic hasEscapeHatch;
@property(copy, nonatomic) NSString *titleTextForEscapeHatch; // @dynamic titleTextForEscapeHatch;

@end

