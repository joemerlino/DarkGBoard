//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GSAPFeatureId, GSAPPlaceName;

@interface GSAPPlaceReference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GSAPFeatureId *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasPlaceName; // @dynamic hasPlaceName;
@property(retain, nonatomic) GSAPPlaceName *placeName; // @dynamic placeName;

@end

