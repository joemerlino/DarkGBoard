//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKBFileGarbageCollector : NSObject
{
    _Bool _isActive;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (_Bool)deleteFromChildDirectory:(id)arg1;
- (void)garbageCollect;

@end

