//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBEmojiObject, NSData, NSString;

@protocol GKBCombinedSearchHeaderViewControllerDelegate <NSObject>
- (void)dismissExtension;
- (void)startSearch;
- (void)dismissSearch;
- (void)searchReactivated;

@optional
- (void)stickerSelectedWithData:(NSData *)arg1 URLString:(NSString *)arg2 pasteboardType:(NSString *)arg3;
- (void)didSelectSearchSuggestionEmoji:(GKBEmojiObject *)arg1;
- (void)startSearchInContacts:(_Bool)arg1;
@end

