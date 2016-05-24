//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSCErrorHandler : NSObject
{
    int _errorCount;
    CDUnknownBlockType _errorHandlerBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType errorHandlerBlock; // @synthesize errorHandlerBlock=_errorHandlerBlock;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (void)reportError:(id)arg1 functionName:(id)arg2 lineNumber:(int)arg3 formatString:(id)arg4 arguments:(char *)arg5;
- (void)registerErrorHandlerBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultErrorHandlerBlock;

@end

