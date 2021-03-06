//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBArtUserDefaults, NSMutableDictionary, NSMutableSet, UIFont;

@interface GKBEmojiDataManager : NSObject
{
    UIFont *_referenceFont;
    GKBArtUserDefaults *_userDefaults;
    NSMutableDictionary *_lastUsedEmojiVariations;
    NSMutableSet *_parentEmojis;
    struct CGSize _referenceEmojiSize;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *parentEmojis; // @synthesize parentEmojis=_parentEmojis;
@property(retain, nonatomic) NSMutableDictionary *lastUsedEmojiVariations; // @synthesize lastUsedEmojiVariations=_lastUsedEmojiVariations;
@property(retain, nonatomic) GKBArtUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) UIFont *referenceFont; // @synthesize referenceFont=_referenceFont;
@property(readonly, nonatomic) struct CGSize referenceEmojiSize; // @synthesize referenceEmojiSize=_referenceEmojiSize;
- (void).cxx_destruct;
- (void)initializeParentEmojis;
- (id)supportedEmojisFromResultSet:(id)arg1;
- (id)supportedEmojisFromEmojis:(id)arg1;
- (_Bool)deviceSupportsEmoji:(id)arg1;
- (id)expandedSearchTerms:(id)arg1;
- (void)databaseContainsSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initiateSearchForTermsWithInfo:(id)arg1;
- (void)initiateSearchWithInfo:(id)arg1;
- (id)emojiObjectForEmoji:(id)arg1;
- (void)setLastUsedVariationEmoji:(id)arg1 forCanonicalEmoji:(id)arg2;
- (id)lastUsedVariationEmojiForCanonicalEmoji:(id)arg1;
- (_Bool)hasRecentlyUsedEmojis;
- (void)initiateSearchForTerms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initiateSearch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allEmojisWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)firstCategoryEmojisWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)emojisForCategory:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)emojiCategoryImageNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initPrivate;

@end

