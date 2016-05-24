//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBArtUserDefaults, NSArray;

@interface GKBStickerDataManager : NSObject
{
    GKBArtUserDefaults *_userDefaults;
    long long _currentCategoryIndex;
    NSArray *_currentStickers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *currentStickers; // @synthesize currentStickers=_currentStickers;
@property(readonly, nonatomic) long long currentCategoryIndex; // @synthesize currentCategoryIndex=_currentCategoryIndex;
- (void).cxx_destruct;
- (id)userDefaults;
- (void)databaseContainsSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initiateSearchForTermsWithInfo:(id)arg1;
- (void)initiateSearchWithInfo:(id)arg1;
- (_Bool)hasRecentlyUsedStickers;
- (void)clearCachedStickers;
- (void)initiateSearchForTerms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initiateSearch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stickersForCategoryAtIndex:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)categoryStickersWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

