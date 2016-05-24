//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GD4Decoder : NSObject
{
    struct unique_ptr<keyboard::decoder::runtime::AndroidDecoderWrapper, std::__1::default_delete<keyboard::decoder::runtime::AndroidDecoderWrapper>> _decoderWrapper;
    _Bool _hasKeyboardLayout;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)parseInputTextWithTextBeforeSelection:(id)arg1 isStartTruncated:(_Bool)arg2 previousInputContext:(id)arg3;
- (id)languageModelsContainingTerms:(id)arg1;
- (void)editUserHistory:(id)arg1;
- (id)onSuggestionPress:(id)arg1;
- (id)onKeyPress:(id)arg1;
- (id)decode:(id)arg1;
- (_Bool)flushUserHistory;
- (void)unloadLanguageModel:(id)arg1;
- (_Bool)loadLanguageModel:(id)arg1;
- (_Bool)loadShortcutMap:(id)arg1;
- (int)loudsLmContentVersion:(id)arg1;
- (_Bool)isReadyForDecoding;
- (void)setRuntimeParams:(id)arg1;
- (void)setKeyboardLayout:(id)arg1;
- (void)dealloc;
- (id)initWithDecoderParams:(id)arg1;
- (id)init;

@end

