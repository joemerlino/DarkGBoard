//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardModel.h"

@class NSString, NSURL;

@interface GKBWebAnswerCardModel : GKBCardModel
{
    NSString *_title;
    NSString *_webAnswer;
    NSString *_attributionName;
    NSURL *_attributionURL;
    NSURL *_imageURL;
}

@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(readonly, nonatomic) NSString *attributionName; // @synthesize attributionName=_attributionName;
@property(readonly, nonatomic) NSString *webAnswer; // @synthesize webAnswer=_webAnswer;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)openURL;
- (id)shareText;
- (id)initWithTitle:(id)arg1 webAnswer:(id)arg2 attributionName:(id)arg3 attributionURL:(id)arg4 imageURL:(id)arg5;

@end

