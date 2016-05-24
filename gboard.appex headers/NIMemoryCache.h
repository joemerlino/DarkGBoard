//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableOrderedSet;

@interface NIMemoryCache : NSObject
{
    NSMutableDictionary *_cacheMap;
    NSMutableOrderedSet *_lruCacheObjects;
}

@property(retain, nonatomic) NSMutableOrderedSet *lruCacheObjects; // @synthesize lruCacheObjects=_lruCacheObjects;
@property(retain, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)reduceMemoryUsage;
- (void)removeAllObjects;
- (void)removeAllObjectsWithPrefix:(id)arg1;
- (void)removeObjectWithName:(id)arg1;
- (id)nameOfMostRecentlyUsedObject;
- (id)nameOfLeastRecentlyUsedObject;
- (id)dateOfLastAccessWithName:(id)arg1;
- (_Bool)containsObjectWithName:(id)arg1;
- (id)objectWithName:(id)arg1;
- (void)storeObject:(id)arg1 withName:(id)arg2 expiresAfter:(id)arg3;
- (void)storeObject:(id)arg1 withName:(id)arg2;
- (void)willRemoveObject:(id)arg1 withName:(id)arg2;
- (void)didSetObject:(id)arg1 withName:(id)arg2;
- (_Bool)shouldSetObject:(id)arg1 withName:(id)arg2 previousObject:(id)arg3;
- (_Bool)willSetObject:(id)arg1 withName:(id)arg2 previousObject:(id)arg3;
- (void)removeCacheInfoForName:(id)arg1;
- (void)setCacheInfo:(id)arg1 forName:(id)arg2;
- (id)cacheInfoForName:(id)arg1;
- (void)updateAccessTimeForInfo:(id)arg1;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

