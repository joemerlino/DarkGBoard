//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LowMemoryWarning, NSString;

@interface Performance : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int deviceOrientation; // @dynamic deviceOrientation;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) _Bool hasDeviceOrientation; // @dynamic hasDeviceOrientation;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasKeyboardActivateExtensionsTimeMs; // @dynamic hasKeyboardActivateExtensionsTimeMs;
@property(nonatomic) _Bool hasKeyboardStartupLoadTimeMs; // @dynamic hasKeyboardStartupLoadTimeMs;
@property(nonatomic) _Bool hasLowMemoryWarning; // @dynamic hasLowMemoryWarning;
@property(nonatomic) _Bool hasLowMemoryWarningDeprecated; // @dynamic hasLowMemoryWarningDeprecated;
@property(nonatomic) _Bool hasMaxKeyboardStartupLoadTimeMs; // @dynamic hasMaxKeyboardStartupLoadTimeMs;
@property(nonatomic) _Bool hasMinKeyboardStartupLoadTimeMs; // @dynamic hasMinKeyboardStartupLoadTimeMs;
@property(nonatomic) _Bool hasNumLowMemoryWarnings; // @dynamic hasNumLowMemoryWarnings;
@property(nonatomic) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(nonatomic) _Bool hasTimeForArtQueryToExecuteMs; // @dynamic hasTimeForArtQueryToExecuteMs;
@property(nonatomic) _Bool hasTimeForSearchQueryToExecuteMs; // @dynamic hasTimeForSearchQueryToExecuteMs;
@property(nonatomic) long long keyboardActivateExtensionsTimeMs; // @dynamic keyboardActivateExtensionsTimeMs;
@property(nonatomic) long long keyboardStartupLoadTimeMs; // @dynamic keyboardStartupLoadTimeMs;
@property(retain, nonatomic) LowMemoryWarning *lowMemoryWarning; // @dynamic lowMemoryWarning;
@property(nonatomic) _Bool lowMemoryWarningDeprecated; // @dynamic lowMemoryWarningDeprecated;
@property(nonatomic) long long maxKeyboardStartupLoadTimeMs; // @dynamic maxKeyboardStartupLoadTimeMs;
@property(nonatomic) long long minKeyboardStartupLoadTimeMs; // @dynamic minKeyboardStartupLoadTimeMs;
@property(nonatomic) int numLowMemoryWarnings; // @dynamic numLowMemoryWarnings;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) long long timeForArtQueryToExecuteMs; // @dynamic timeForArtQueryToExecuteMs;
@property(nonatomic) long long timeForSearchQueryToExecuteMs; // @dynamic timeForSearchQueryToExecuteMs;

@end
