//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardView.h"

@class NSURL, UIButton, UILabel;

@interface GKBErrorCardView : GKBCardView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_infoLabel;
    UIButton *_actionButton;
    NSURL *_actionURL;
}

- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (void)unload;
- (void)loadWithModel:(id)arg1 toShare:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
