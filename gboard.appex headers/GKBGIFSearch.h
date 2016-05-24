//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTMSessionFetcherService, NSArray, NSString, NSTimer, Reachability;

@interface GKBGIFSearch : NSObject
{
    GTMSessionFetcherService *_fetcherService;
    Reachability *_reachability;
    NSArray *_riffsyResults;
    NSArray *_googleResults;
    NSTimer *_waitForRiffsyTimer;
    NSString *_riffsyNextKey;
    _Bool _includeRiffsyResults;
    NSString *_currentQuery;
    id <GKBGIFSearchDelegate> _delegate;
}

@property(nonatomic) __weak id <GKBGIFSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldDiscardResultDueToFileSize:(id)arg1;
- (id)processRiffsyJSONResponse:(id)arg1 maxResults:(unsigned long long)arg2;
- (void)handleRiffsyTrendingJSONResponse:(id)arg1 error:(id)arg2;
- (void)handleRiffsyJSONResponse:(id)arg1 forQuery:(id)arg2 error:(id)arg3;
- (void)onlyGoogleResultsFound:(id)arg1;
- (void)handleGoogleJSONResponse:(id)arg1 forQuery:(id)arg2 error:(id)arg3;
- (id)defaultFetcher:(id)arg1;
- (void)fetchTrendingRiffsyGIFs;
- (void)searchRiffsyGIFs:(id)arg1 startIndex:(unsigned long long)arg2;
- (void)searchGoogleGIFs:(id)arg1 startIndex:(unsigned long long)arg2;
- (void)cancelSearch;
- (void)searchGIFs:(id)arg1 startIndex:(unsigned long long)arg2 isCategory:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end
