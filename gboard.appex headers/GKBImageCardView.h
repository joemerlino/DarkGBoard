//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardView.h"

#import "GKBAsyncImageViewDelegate.h"
#import "GKBCardActionImageSource.h"

@class GKBAsyncImageView, GKBImageAttributionView, NSArray, NSData, NSString, NSURL;

@interface GKBImageCardView : GKBCardView <GKBAsyncImageViewDelegate, GKBCardActionImageSource>
{
    GKBAsyncImageView *_imageView;
    GKBImageAttributionView *_attributionView;
    NSArray *_layoutConstraints;
    NSData *_data;
    _Bool _isAnimated;
    NSString *_attribution;
    NSURL *_sourceURL;
}

- (void).cxx_destruct;
- (void)showAttribution:(id)arg1 sourceURL:(id)arg2;
- (void)imageFailedToLoad:(id)arg1;
- (void)imageLoadedWithData:(id)arg1 URL:(id)arg2;
- (id)imageData;
- (void)loadWithModel:(id)arg1 toShare:(_Bool)arg2;
- (void)unload;
- (id)createConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
