//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMLogFilter.h"

@class NSString;

@interface GTMLogLevelFilter : NSObject <GTMLogFilter>
{
    _Bool verboseLoggingEnabled_;
}

- (void)defaultsChanged:(id)arg1;
- (_Bool)filterAllowsMessage:(id)arg1 level:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

