//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIPCacheProvider.h"

@class GIPLRUCache, NSString;

@interface GKBImageCacheProvider : NSObject <GIPCacheProvider>
{
    GIPLRUCache *_cache;
}

+ (id)sharedImageCacheProvider;
- (void).cxx_destruct;
- (void)emptyCache;
- (void)setCache:(id)arg1;
- (id)cache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

