//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GKBShadowInkTouchController, NSArray, UIImage, UIImageView, UILabel, UIView;

@interface GKBAutoSuggestionTableViewCell : UITableViewCell
{
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIView *_rightIcon;
    UIImage *_searchImage;
    UIImage *_selectImage;
    UIImage *_historyImage;
    UIImage *_assistantImage;
    UIImage *_contactImage;
    UIView *_separator;
    NSArray *_layoutConstraints;
    GKBShadowInkTouchController *_touchController;
    _Bool _rightImageTapped;
    UILabel *_suggestionLabel;
}

@property(retain, nonatomic) UILabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(nonatomic) _Bool rightImageTapped; // @synthesize rightImageTapped=_rightImageTapped;
- (void).cxx_destruct;
- (id)attributedStringForSuggestion:(id)arg1 boldOptions:(id)arg2 nonBoldOptions:(id)arg3;
- (void)rightTapped;
- (id)createConstraints;
- (void)showSeparator:(_Bool)arg1;
- (void)setSuggestion:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

