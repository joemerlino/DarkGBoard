//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOOModalWindowViewController, UIWindow;

@interface GOOModalWindowController : NSObject
{
    UIWindow *_displacedKeyWindow;
    UIWindow *_window;
    GOOModalWindowViewController *_modalViewController;
}

+ (id)sharedController;
@property(retain, nonatomic) GOOModalWindowViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *displacedKeyWindow; // @synthesize displacedKeyWindow=_displacedKeyWindow;
- (void).cxx_destruct;
- (void)windowDidResignKeyWindow:(id)arg1;
- (void)windowDidBecomeKeyWindow:(id)arg1;
- (void)setModalViewStackHidden:(_Bool)arg1;
- (id)modalViewStack;
- (void)dismissModal:(id)arg1 withAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModal:(id)arg1;
- (void)dealloc;
- (id)init;

@end

