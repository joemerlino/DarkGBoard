//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKBCardActionDataSource.h"

@class NSString;

@interface GKBCardModel : NSObject <GKBCardActionDataSource>
{
    long long _type;
    long long _rankingValue;
}

@property(nonatomic) long long rankingValue; // @synthesize rankingValue=_rankingValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)customOpenURL;
- (id)customOpenIcon;
- (id)customOpenTitle;
- (id)phoneNumber;
- (id)videoURL;
- (id)mapsURL;
- (id)openURL;
- (id)shareText;
- (_Bool)shouldShareWithMask;
- (_Bool)shouldShareWithFooter;
- (_Bool)shouldDisplayWithFooter;
- (_Bool)isFullCardView;
- (_Bool)hasCustomBackgroundColor;
- (id)accessoryImageData;
- (id)accessoryImageURL;
- (id)footerActionModels;
- (id)bodyActionModel;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
