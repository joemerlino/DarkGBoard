//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString;

@interface FMDatabase : NSObject
{
    void *_db;
    NSString *_databasePath;
    _Bool _logsErrors;
    _Bool _crashOnErrors;
    _Bool _traceExecution;
    _Bool _checkedOut;
    _Bool _shouldCacheStatements;
    _Bool _isExecutingStatement;
    _Bool _inTransaction;
    double _maxBusyRetryTimeInterval;
    double _startBusyRetryTime;
    NSMutableDictionary *_cachedStatements;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}

+ (id)storeableDateFormat:(id)arg1;
+ (_Bool)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (int)FMDBVersion;
+ (id)FMDBUserVersion;
+ (id)databaseWithPath:(id)arg1;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setShouldCacheStatements:(_Bool)arg1;
- (_Bool)shouldCacheStatements;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)inTransaction;
- (_Bool)beginTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (_Bool)executeStatements:(id)arg1;
- (_Bool)executeUpdateWithFormat:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withVAList:(char *)arg2;
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char *)arg5;
- (id)executeQuery:(id)arg1 withVAList:(char *)arg2;
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)executeQueryWithFormat:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4;
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (int)changes;
- (long long)lastInsertRowId;
- (id)lastError;
- (id)errorWithMessage:(id)arg1;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (_Bool)databaseExists;
- (void)warnInUse;
- (_Bool)goodConnection;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (_Bool)hasDateFormatter;
- (_Bool)setKeyWithData:(id)arg1;
- (_Bool)setKey:(id)arg1;
- (_Bool)rekeyWithData:(id)arg1;
- (_Bool)rekey:(id)arg1;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)clearCachedStatements;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
- (_Bool)hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;
- (int)busyRetryTimeout;
- (double)maxBusyRetryTimeInterval;
- (void)setMaxBusyRetryTimeInterval:(double)arg1;
- (_Bool)close;
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;
- (_Bool)openWithFlags:(int)arg1;
- (_Bool)open;
- (const char *)sqlitePath;
- (void *)sqliteHandle;
- (id)databasePath;
- (void)dealloc;
- (void)finalize;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

