//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMLogWriter.h"

@class NSString;

@interface GTMLogASLWriter : NSObject <GTMLogWriter>
{
    Class aslClientClass_;
    NSString *facility_;
}

+ (id)aslWriterWithFacility:(id)arg1;
+ (id)aslWriter;
- (void)logMessage:(id)arg1 level:(int)arg2;
- (void)dealloc;
- (id)initWithClientClass:(Class)arg1 facility:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
