//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardModel.h"

@class GKBRatingsAndReviewsModel, NSString, NSURL;

@interface GKBWebCardModel : GKBCardModel
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_snippet;
    NSURL *_URL;
    GKBRatingsAndReviewsModel *_ratingsAndReviews;
}

@property(readonly, nonatomic) GKBRatingsAndReviewsModel *ratingsAndReviews; // @synthesize ratingsAndReviews=_ratingsAndReviews;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)shareText;
- (id)openURL;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 snippet:(id)arg3 URL:(id)arg4 ratingsAndReviews:(id)arg5;

@end

