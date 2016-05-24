//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextDocumentProxy.h"
#import "UITextInputTraits.h"

@class GKBFakeTextField, NSString;

@interface GKBSearchFieldTextDocumentProxy : NSObject <UITextDocumentProxy, UITextInputTraits>
{
    GKBFakeTextField *_textField;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardAppearance;
    long long _keyboardType;
    long long _returnKeyType;
}

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void).cxx_destruct;
- (_Bool)hasText;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@property(readonly, nonatomic) NSString *documentContextBeforeInput;
@property(readonly, nonatomic) NSString *documentContextAfterInput;
- (id)initWithSearchField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

