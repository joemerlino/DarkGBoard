//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GKBFakeTextFieldDelegate.h"

@class GKBFakeTextField, GKBSearchFieldTextDocumentProxy, NSArray, NSString;

@interface GKBSearchField : UIView <GKBFakeTextFieldDelegate>
{
    GKBFakeTextField *_textField;
    NSArray *_layoutConstraints;
    _Bool _hasFocus;
    GKBSearchFieldTextDocumentProxy *_textDocumentProxy;
    id <GKBSearchFieldDelegate> _delegate;
}

@property(nonatomic) _Bool hasFocus; // @synthesize hasFocus=_hasFocus;
@property(nonatomic) __weak id <GKBSearchFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GKBSearchFieldTextDocumentProxy *textDocumentProxy; // @synthesize textDocumentProxy=_textDocumentProxy;
- (void).cxx_destruct;
- (void)cancelSearch:(id)arg1;
- (id)createConstraints;
- (void)textFieldWillCancel:(id)arg1;
- (void)textFieldChanged;
- (void)textFieldWillGainFocus:(id)arg1;
- (void)setTextInputDelegate:(id)arg1;
@property(retain, nonatomic) NSString *placeholder;
@property(retain, nonatomic) NSString *query;
- (id)initWithFrame:(struct CGRect)arg1;

@end

