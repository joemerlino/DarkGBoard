//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GKBArtExtensionPickerViewDelegate.h"
#import "GKBGIFSearchResultsViewDelegate.h"
#import "GKBNoConnectionViewDelegate.h"

@class GKBArtExtensionPickerView, GKBArtUserDefaults, GKBErrorMessageLabel, GKBGIFSearchResultsView, GKBNoConnectionView, GKBNoFullAccessView, NSArray, NSString, QTMActivityIndicator;

@interface GKBGIFView : UIView <GKBGIFSearchResultsViewDelegate, GKBArtExtensionPickerViewDelegate, GKBNoConnectionViewDelegate>
{
    NSArray *_GIFCategories;
    long long _currentCategoryIndex;
    GKBArtUserDefaults *_userDefaults;
    GKBArtExtensionPickerView *_pickerView;
    NSArray *_layoutConstraints;
    _Bool _isSearching;
    GKBErrorMessageLabel *_noResultsLabel;
    _Bool _isPortrait;
    _Bool _isFullAccessEnabled;
    QTMActivityIndicator *_activityIndicator;
    id <GKBGIFViewDelegate> _delegate;
    GKBGIFSearchResultsView *_searchResultsView;
    GKBNoConnectionView *_noConnectionView;
    GKBNoFullAccessView *_noFullAccessView;
}

@property(retain, nonatomic) GKBNoFullAccessView *noFullAccessView; // @synthesize noFullAccessView=_noFullAccessView;
@property(retain, nonatomic) GKBNoConnectionView *noConnectionView; // @synthesize noConnectionView=_noConnectionView;
@property(retain, nonatomic) GKBGIFSearchResultsView *searchResultsView; // @synthesize searchResultsView=_searchResultsView;
@property(nonatomic) __weak id <GKBGIFViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeNoConnectionView;
- (void)addNoConnectionView;
- (_Bool)fetchMoreGIFResultsIfNotBrowsingRecentlyUsed:(unsigned long long *)arg1;
- (void)handleGKBUIInputViewControllerDidReceiveRotationNotification:(id)arg1;
- (void)connectionResumed;
- (void)pickerView:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)GIFSelectedWithData:(id)arg1 GIFResult:(id)arg2;
- (void)fetchMoreGIFResults:(unsigned long long *)arg1;
@property(readonly, nonatomic) unsigned long long currentCategoryIndex;
- (void)clearToPrepareForSearch;
- (void)dismissSearchResults;
- (void)displayResults:(id)arg1 forQuery:(id)arg2 appendToPreviousResults:(_Bool)arg3;
- (void)showInitialCategory;
- (void)categorySelectedWithIndex:(long long)arg1 forceRefresh:(_Bool)arg2;
- (id)createConstraints;
- (void)generateCategoryButtons:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

