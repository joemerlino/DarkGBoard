//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSURL;

@protocol GKBAsyncImageViewDelegate
- (void)imageFailedToLoad:(NSURL *)arg1;
- (void)imageLoadedWithData:(NSData *)arg1 URL:(NSURL *)arg2;
@end
