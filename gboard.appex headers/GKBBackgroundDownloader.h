//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface GKBBackgroundDownloader : NSObject
{
    NSMutableDictionary *_requests;
    NSMutableDictionary *_downloadedSizes;
    NSMutableDictionary *_resumeData;
    id <GKBBackgroundDownloaderDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <GKBBackgroundDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupAndStartFetcher:(id)arg1 withItemID:(id)arg2;
- (void)setResumeData:(id)arg1 ofItem:(id)arg2;
- (void)cancelAllItemsWithResumeData;
- (void)resumeAllDownloads;
- (void)cancelDownloadItem:(id)arg1;
- (unsigned long long)downloadedLengthOfItem:(id)arg1;
@property(readonly) NSArray *allItems;
- (void)downloadItem:(id)arg1 withURL:(id)arg2 toFile:(id)arg3;
- (id)init;

@end
