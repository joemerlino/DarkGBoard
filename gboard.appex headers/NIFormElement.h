//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NICellObject.h"

@class NSString;

@interface NIFormElement : NSObject <NICellObject>
{
    long long _elementID;
}

+ (id)elementWithID:(long long)arg1;
@property(nonatomic) long long elementID; // @synthesize elementID=_elementID;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

