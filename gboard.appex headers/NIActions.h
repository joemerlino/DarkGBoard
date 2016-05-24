//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface NIActions : NSObject
{
    id _target;
    NSMutableDictionary *_objectToAction;
    NSMutableDictionary *_classToAction;
    NSMutableSet *_objectSet;
}

+ (id)objectFromKeyClass:(Class)arg1 map:(id)arg2;
@property(retain, nonatomic) NSMutableSet *objectSet; // @synthesize objectSet=_objectSet;
@property(retain, nonatomic) NSMutableDictionary *classToAction; // @synthesize classToAction=_classToAction;
@property(retain, nonatomic) NSMutableDictionary *objectToAction; // @synthesize objectToAction=_objectToAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (unsigned long long)attachedActionTypesForObject:(id)arg1;
- (_Bool)isObjectActionable:(id)arg1;
- (void)attachToClass:(Class)arg1 navigationSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 detailSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 tapSelector:(SEL)arg2;
- (void)attachToClass:(Class)arg1 navigationBlock:(CDUnknownBlockType)arg2;
- (void)attachToClass:(Class)arg1 detailBlock:(CDUnknownBlockType)arg2;
- (void)attachToClass:(Class)arg1 tapBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 navigationSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 detailSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 tapSelector:(SEL)arg2;
- (id)attachToObject:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 detailBlock:(CDUnknownBlockType)arg2;
- (id)attachToObject:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
- (id)actionForObjectOrClassOfObject:(id)arg1;
- (id)actionForClass:(Class)arg1;
- (id)actionForObject:(id)arg1;
- (id)keyForObject:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;

@end

