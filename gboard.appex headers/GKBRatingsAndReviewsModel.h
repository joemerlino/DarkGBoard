//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GKBRatingsAndReviewsModel : NSObject
{
    double _starRating;
    NSString *_rating;
    long long _reviewCount;
    NSString *_priceRange;
}

@property(copy, nonatomic) NSString *priceRange; // @synthesize priceRange=_priceRange;
@property(nonatomic) long long reviewCount; // @synthesize reviewCount=_reviewCount;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void).cxx_destruct;

@end
