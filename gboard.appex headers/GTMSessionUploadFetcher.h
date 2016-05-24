//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTMSessionFetcher.h"

@class NSData, NSDictionary, NSFileHandle, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest;

@interface GTMSessionUploadFetcher : GTMSessionFetcher
{
    GTMSessionFetcher *_chunkFetcher;
    CDUnknownBlockType _delegateCompletionHandler;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    long long _initialBodyLength;
    long long _initialBodySent;
    NSURL *_uploadLocationURL;
    NSData *_uploadData;
    NSFileHandle *_uploadFileHandle;
    CDUnknownBlockType _uploadDataProvider;
    long long _uploadFileLength;
    NSString *_uploadMIMEType;
    long long _chunkSize;
    long long _uploadGranularity;
    _Bool _isPaused;
    _Bool _isRestartedUpload;
    _Bool _shouldInitiateOffsetQuery;
    _Bool _useBackgroundSessionOnChunkFetchers;
    long long _currentOffset;
    NSDictionary *_recentChunkReponseHeaders;
    long long _recentChunkStatusCode;
    GTMSessionFetcher *_fetcherInFlight;
    _Bool _isSubdataGenerating;
    _Bool _subdataGenerating;
    NSURL *_uploadFileURL;
    NSURLRequest *_lastChunkRequest;
}

+ (void)removePointer:(void *)arg1 fromPointerArray:(id)arg2;
+ (unsigned long long)uploadStatusFromResponseHeaders:(id)arg1;
+ (id)uploadFetchersForBackgroundSessions;
+ (id)uploadFetcherForSessionIdentifier:(id)arg1;
+ (id)uploadFetcherPointerArrayForBackgroundSessions;
+ (id)uploadFetcherWithRequest:(id)arg1 fetcherService:(id)arg2;
+ (id)uploadFetcherForSessionIdentifierMetadata:(id)arg1;
+ (id)uploadFetcherWithLocation:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;
+ (id)uploadFetcherWithRequest:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;
+ (void)load;
@property long long uploadGranularity; // @synthesize uploadGranularity=_uploadGranularity;
@property _Bool shouldInitiateOffsetQuery; // @synthesize shouldInitiateOffsetQuery=_shouldInitiateOffsetQuery;
@property(getter=isSubdataGenerating) _Bool subdataGenerating; // @synthesize subdataGenerating=_subdataGenerating;
@property(retain) NSURLRequest *lastChunkRequest; // @synthesize lastChunkRequest=_lastChunkRequest;
@property(readonly) CDUnknownBlockType delegateCompletionHandler; // @synthesize delegateCompletionHandler=_delegateCompletionHandler;
@property(readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
- (void).cxx_destruct;
- (_Bool)waitForCompletionWithTimeout:(double)arg1;
@property(readonly) GTMSessionFetcher *activeFetcher; // @dynamic activeFetcher;
@property(retain) NSURL *uploadLocationURL; // @synthesize uploadLocationURL=_uploadLocationURL;
- (void)setInitialBodySent:(long long)arg1;
- (long long)initialBodySent;
- (void)setInitialBodyLength:(long long)arg1;
- (long long)initialBodyLength;
@property long long statusCode; // @dynamic statusCode;
- (long long)statusCodeUnsynchronized;
@property(retain) NSDictionary *responseHeaders; // @dynamic responseHeaders;
- (_Bool)canFetchWithBackgroundSession;
- (void)setUseBackgroundSession:(_Bool)arg1;
- (_Bool)useBackgroundSession;
- (void)stopFetching;
- (void)resumeFetching;
- (void)pauseFetching;
- (_Bool)isPaused;
- (void)retrieveUploadChunkGranularityFromResponseHeaders:(id)arg1;
- (void)invokeDelegateWithDidSendBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)destroyChunkFetcher;
- (void)chunkFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (id)uploadFetcherWithProperties:(id)arg1 isQueryFetch:(_Bool)arg2;
- (id)uploadSessionIdentifierMetadata;
- (void)attachSendProgressBlockToChunkFetcher:(id)arg1;
- (void)beginChunkFetcher:(id)arg1 offset:(long long)arg2;
- (void)uploadNextChunkWithOffset:(long long)arg1 fetcherProperties:(id)arg2;
- (void)sendCancelUploadWithFetcherProperties:(id)arg1;
- (void)queryFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)sendQueryForUploadOffsetWithFetcherProperties:(id)arg1;
- (void)uploadNextChunkWithOffset:(long long)arg1;
- (void)stopFetchReleasingCallbacks:(_Bool)arg1;
- (void)releaseUploadAndBaseCallbacks;
- (void)invokeFinalCallbackWithData:(id)arg1 error:(id)arg2 shouldInvalidateLocation:(_Bool)arg3;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)beginChunkFetches;
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) GTMSessionFetcher *fetcherInFlight; // @dynamic fetcherInFlight;
@property(retain) GTMSessionFetcher *chunkFetcher; // @synthesize chunkFetcher=_chunkFetcher;
- (_Bool)isRestartedUpload;
- (void)setDelegateCallbackQueue:(id)arg1;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (id)prematureFailureErrorWithUserInfo:(id)arg1;
- (id)uploadChunkUnavailableErrorWithDescription:(id)arg1;
- (void)generateChunkSubdataFromFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(CDUnknownBlockType)arg4;
- (void)generateChunkSubdataFromFileHandle:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(CDUnknownBlockType)arg4;
- (void)generateChunkSubdataWithOffset:(long long)arg1 length:(long long)arg2 response:(CDUnknownBlockType)arg3;
- (long long)fullUploadLength;
- (void)setLocationURL:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3;
- (void)setupRequestHeaders;
@property(copy) NSString *uploadMIMEType; // @synthesize uploadMIMEType=_uploadMIMEType;
@property(readonly, copy) CDUnknownBlockType uploadDataProvider;
- (void)setUploadDataLength:(long long)arg1 provider:(CDUnknownBlockType)arg2;
- (void)setUploadFileLength:(long long)arg1;
@property(retain) NSURL *uploadFileURL; // @synthesize uploadFileURL=_uploadFileURL;
@property(retain) NSFileHandle *uploadFileHandle; // @synthesize uploadFileHandle=_uploadFileHandle;
@property(retain) NSData *uploadData; // @synthesize uploadData=_uploadData;

@end

