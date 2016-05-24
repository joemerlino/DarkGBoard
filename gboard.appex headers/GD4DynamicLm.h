//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface GD4DynamicLm : NSObject
{
    struct unique_ptr<keyboard::decoder::runtime::DynamicLmWrapper, std::__1::default_delete<keyboard::decoder::runtime::DynamicLmWrapper>> dynamicLmWrapper_;
    _Bool _hasNativeDynamicLm;
    NSLock *_lock;
}

@property(nonatomic) _Bool hasNativeDynamicLm; // @synthesize hasNativeDynamicLm=_hasNativeDynamicLm;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)iterateOverDynamicLm:(id)arg1 request:(id)arg2;
- (void)pruneDynamicLmIfNeeded:(id)arg1;
- (void)setNgramInDynamicLm:(id)arg1 request:(id)arg2;
- (id)ngramFromDynamicLm:(id)arg1 request:(id)arg2;
- (void)clearDynamicLm:(id)arg1;
- (void)flushDynamicLm:(id)arg1;
- (void)closeDynamicLm:(id)arg1;
- (_Bool)openDynamicLm:(id)arg1;
- (void)dealloc;
- (id)init;

@end
