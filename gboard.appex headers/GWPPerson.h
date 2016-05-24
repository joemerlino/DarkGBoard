//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GWPImage, GWPLink, LocalizedEntityNames, NSMutableArray, NSString;

@interface GWPPerson : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *birthDate; // @dynamic birthDate;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) GWPImage *countryImage; // @dynamic countryImage;
@property(retain, nonatomic) LocalizedEntityNames *entity; // @dynamic entity;
@property(nonatomic) int gender; // @dynamic gender;
@property(nonatomic) _Bool hasBirthDate; // @dynamic hasBirthDate;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasCountryImage; // @dynamic hasCountryImage;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasGender; // @dynamic hasGender;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPortraitImage; // @dynamic hasPortraitImage;
@property(nonatomic) _Bool hasWeight; // @dynamic hasWeight;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) NSMutableArray *linkArray; // @dynamic linkArray;
@property(readonly, nonatomic) unsigned long long linkArray_Count; // @dynamic linkArray_Count;
@property(retain, nonatomic) GWPLink *name; // @dynamic name;
@property(retain, nonatomic) GWPImage *portraitImage; // @dynamic portraitImage;
@property(nonatomic) int weight; // @dynamic weight;

@end

