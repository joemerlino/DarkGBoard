//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LevelDb : NSObject
{
    struct leveldbImpl *impl;
}

- (void)clearAllObjects;
- (void)saveObjects:(id)arg1 withKeys:(id)arg2;
- (id)loadObject:(id)arg1;
- (void)saveObject:(id)arg1 withKey:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

