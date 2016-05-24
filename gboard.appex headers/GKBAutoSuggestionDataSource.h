//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTMSessionFetcherService, NSCache;

@interface GKBAutoSuggestionDataSource : NSObject
{
    GTMSessionFetcherService *_fetcherService;
    NSCache *_cache;
    long long _dataSet;
    id <GKBAutoSuggestionDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <GKBAutoSuggestionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long dataSet; // @synthesize dataSet=_dataSet;
- (void).cxx_destruct;
- (id)dataSetQueryParameter;
- (id)errorWithDescription:(id)arg1 underlyingError:(id)arg2 code:(long long)arg3;
- (id)parseResults:(id)arg1 forSnippet:(id)arg2 error:(id *)arg3;
- (void)handleSuggestionsResponse:(id)arg1 forSnippet:(id)arg2;
- (void)querySuggestionsForSnippet:(id)arg1;
- (void)fetchSuggestionsForSnippet:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fetcherService:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDataSet:(long long)arg1 delegate:(id)arg2;
- (id)initWithDataSet:(long long)arg1 delegate:(id)arg2 fetcherService:(id)arg3;

@end
