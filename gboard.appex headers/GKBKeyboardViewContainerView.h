//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableSet;

@interface GKBKeyboardViewContainerView : UIView
{
    NSMutableSet *_currentTouches;
    UIView *_keyboardView;
    id <GKBKeyboardViewContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GKBKeyboardViewContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *keyboardView; // @synthesize keyboardView=_keyboardView;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

