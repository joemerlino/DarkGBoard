//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface PancettaClientInfo : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasMccMnc; // @dynamic hasMccMnc;
@property(nonatomic) _Bool hasOs; // @dynamic hasOs;
@property(retain, nonatomic) NSString *mccMnc; // @dynamic mccMnc;
@property(nonatomic) int os; // @dynamic os;

@end

