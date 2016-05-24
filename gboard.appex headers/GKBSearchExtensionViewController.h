//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GKBCardActionsControllerDelegate.h"
#import "GKBCombinedSearchHeaderViewControllerDelegate.h"
#import "GKBExtension.h"
#import "GKBExtensionFooterDelegate.h"
#import "GKBNoConnectionViewDelegate.h"
#import "GKBSearchDelegate.h"
#import "GKBSearchResultsViewDelegate.h"

@class GKBCombinedSearchHeaderViewController, GKBExtensionFooter, GKBNoConnectionView, GKBSearch, GKBSearchFieldTextDocumentProxy, GKBSearchResultsView, GKBSearchUserDefaults, NSArray, NSLayoutConstraint, NSString, Reachability, UIButton, UIView;

@interface GKBSearchExtensionViewController : UIViewController <GKBCombinedSearchHeaderViewControllerDelegate, GKBCardActionsControllerDelegate, GKBExtensionFooterDelegate, GKBSearchResultsViewDelegate, GKBNoConnectionViewDelegate, GKBExtension, GKBSearchDelegate>
{
    GKBSearch *_search;
    GKBSearchFieldTextDocumentProxy *_textDocumentProxy;
    GKBCombinedSearchHeaderViewController *_headerViewController;
    UIView *_contentView;
    GKBSearchResultsView *_searchResultsView;
    GKBNoConnectionView *_noConnectionView;
    long long _currentSearchMode;
    UIView *_bodyView;
    GKBExtensionFooter *_footer;
    UIButton *_webButton;
    UIButton *_imageButton;
    UIButton *_GIFButton;
    UIButton *_videoButton;
    NSArray *_layoutConstraints;
    GKBSearchUserDefaults *_userDefaults;
    _Bool _isFullAccessEnabled;
    _Bool _needsUpdate;
    NSLayoutConstraint *_bodyHeightConstraint;
    NSString *_lastConv2QueryCandidate;
    NSArray *_contentViewConstraints;
    Reachability *_reachability;
    id <GKBExtensionDelegate> _delegate;
    id <UITextInputDelegate> _textInputDelegate;
}

@property(nonatomic) __weak id <UITextInputDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;
@property(nonatomic) __weak id <GKBExtensionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleGKBUIInputViewControllerDidReceiveRotationNotification:(id)arg1;
- (void)handleActionsControllerDidPaste:(id)arg1;
- (id)nextResponder;
- (_Bool)isConv2QuerySearch;
- (void)cardActionsController:(id)arg1 insertText:(id)arg2;
- (void)backspaceUp;
- (void)backspaceDown;
- (void)didDismiss;
- (void)dismissExtension;
- (void)startSearchInContacts:(_Bool)arg1;
- (void)startSearch;
- (void)dismissSearch;
- (void)searchReactivated;
- (void)searchResultsViewDidInvalidateResult:(id)arg1;
- (void)connectionResumed;
- (void)fetchFailedWithError:(id)arg1;
- (void)results:(id)arg1 foundInCache:(_Bool)arg2;
- (id)feedbackCardToInsert;
- (void)startSearchInContactsTab:(_Bool)arg1;
- (void)resetSearch;
- (void)showHardUpdateCard;
- (void)showFullAccessNotEnabledCard;
- (void)footerButtonPressed:(id)arg1 ignoreCurrentButton:(_Bool)arg2;
- (void)footerButtonPressed:(id)arg1;
- (id)footerButtons;
- (id)searchResultsView;
- (id)noCollectionView;
- (void)updateContentView;
- (id)createConstraints;
- (void)didFindTextSuggestions:(id)arg1;
- (void)returnKeyPressed;
- (void)deactivate;
- (void)activateWithContext:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringID;
@property(readonly, copy) NSString *description;
- (void)setSearchQuery:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

