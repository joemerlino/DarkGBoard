//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ImageId, ImageSource, NSString, Url;

@interface Image : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *crawledReferrerEncryptedDocid; // @dynamic crawledReferrerEncryptedDocid;
@property(retain, nonatomic) Url *crawledReferrerURL; // @dynamic crawledReferrerURL;
@property(nonatomic) _Bool hasCrawledReferrerURL; // @dynamic hasCrawledReferrerURL;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasSourceData; // @dynamic hasSourceData;
@property(retain, nonatomic) ImageId *id_p; // @dynamic id_p;
@property(retain, nonatomic) ImageSource *sourceData; // @dynamic sourceData;

@end

