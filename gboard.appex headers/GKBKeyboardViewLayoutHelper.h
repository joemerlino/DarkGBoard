//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface GKBKeyboardViewLayoutHelper : NSObject
{
    UIView *_headerViewHolder;
    UIView *_bodyViewHolder;
    UIView *_superView;
    UIView *_headerView;
    UIView *_bodyView;
}

@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
- (void).cxx_destruct;
- (void)updateLayoutConstraintForView:(id)arg1 inViewHolder:(id)arg2;

@end

