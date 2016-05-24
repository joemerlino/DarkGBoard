//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKBIME.h"

@class GD4Decoder, GKBCandidate, GKBInputContext, GKBLanguageModelDatabase, NSData, NSDate, NSString;

@interface GKBIMELatin : NSObject <GKBIME>
{
    id <GKBIMEDelegate> _delegate;
    GKBLanguageModelDatabase *_languageModelDatabase;
    GKBInputContext *_context;
    GD4Decoder *_decoder;
    NSData *_serializedKeyboardLayoutCache;
    _Bool _maybeHaveSelection;
    _Bool _isWaitingForDelUp;
    _Bool _cursorHasMovedWhenWaitingDelUp;
    _Bool _inEmojiOrStickerSearch;
    NSString *_language;
    int _capsMode;
    NSDate *_suppressConv2QueryExpirationDate;
    _Bool _isExtensionActive;
    GKBCandidate *_conv2queryCandidate;
    GKBCandidate *_lastConv2queryCandidate;
    NSString *_userInputBeforeClear;
    _Bool _conv2queryBlockPosted;
    _Bool _queryPredictionControllerInitialized;
    _Bool _shouldShowSuggestion;
}

@property(nonatomic) _Bool shouldShowSuggestion; // @synthesize shouldShowSuggestion=_shouldShowSuggestion;
- (void).cxx_destruct;
- (void)setInputContextForTesting:(id)arg1;
- (id)initWithDecoderForTesting:(id)arg1;
- (void)handleGKBSuggestedQuerySelected:(id)arg1;
- (void)handleGKBExtensionManagerDidDeactivate:(id)arg1;
- (void)handleGKBExtensionManagerWillActivate:(id)arg1;
- (id)conv2QueryCandidateFromCurrentUserInput;
- (void)fetchConv2QueryCandidateAsync;
- (_Bool)shouldClearUserHistory;
- (_Bool)shouldEnableLearning;
- (id)runtimeParams;
- (void)cursorHasMoved;
- (_Bool)handleDel:(id)arg1;
- (_Bool)handleGestureEvent:(id)arg1;
- (_Bool)handleKeyboardLayoutChange:(id)arg1;
- (void)handleDecodableEvent:(id)arg1;
- (_Bool)handleTouchTypingEvent:(id)arg1;
- (void)decodeInternal:(id)arg1;
- (void)keyboardStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)keyboardWithTypeDidActivated:(int)arg1;
- (void)requestCandidates:(int)arg1;
- (void)selectReadingTextCandidate:(id)arg1 forCommit:(_Bool)arg2;
- (void)selectTextCandidate:(id)arg1 forCommit:(_Bool)arg2;
- (void)handleEvent:(id)arg1;
- (void)abortComposing;
- (void)finishComposing;
- (void)deactivate;
- (void)activateWithTraits:(id)arg1;
- (void)close;
- (void)configureWithLanguage:(id)arg1;
- (void)configureWithLexicon:(id)arg1;
- (void)configureWithInputBundleDef:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

@end

