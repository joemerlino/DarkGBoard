//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardModel.h"

@class NSString, NSURL;

@interface GKBErrorCardModel : GKBCardModel
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_info;
    NSString *_actionTitle;
    NSURL *_actionURL;
}

@property(readonly, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)shouldDisplayWithFooter;
- (_Bool)isFullCardView;
- (id)footerActionModels;
- (id)bodyActionModel;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 info:(id)arg3 actionTitle:(id)arg4 actionURL:(id)arg5;

@end
