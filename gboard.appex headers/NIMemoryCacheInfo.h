//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface NIMemoryCacheInfo : NSObject
{
    NSString *_name;
    id _object;
    NSDate *_expirationDate;
    NSDate *_lastAccessTime;
}

@property(retain, nonatomic) NSDate *lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasExpired;

@end

