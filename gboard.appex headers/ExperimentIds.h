//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString, PBMutableArray;

@interface ExperimentIds : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSData *clearBlob; // @dynamic clearBlob;
@property(retain, nonatomic) NSString *clearBlobJs; // @dynamic clearBlobJs;
@property(retain, nonatomic) PBMutableArray *encryptedBlobArray; // @dynamic encryptedBlobArray;
@property(nonatomic) _Bool hasClearBlob; // @dynamic hasClearBlob;
@property(nonatomic) _Bool hasClearBlobJs; // @dynamic hasClearBlobJs;
@property(nonatomic) _Bool hasEncryptedBlobArray; // @dynamic hasEncryptedBlobArray;
@property(nonatomic) _Bool hasUsersMatch; // @dynamic hasUsersMatch;
@property(nonatomic) _Bool usersMatch; // @dynamic usersMatch;

@end
