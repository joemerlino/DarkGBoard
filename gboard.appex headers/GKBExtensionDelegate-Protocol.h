//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL, UIView, UIViewController;

@protocol GKBExtensionDelegate
@property(readonly, nonatomic) NSString *textAfterCursorInApp;
@property(readonly, nonatomic) NSString *textBeforeCursorInApp;
- (struct CGSize)intrinsicSizeForExtension:(id <GKBExtension>)arg1 inPosition:(long long)arg2;
- (void)extension:(id <GKBExtension>)arg1 requestTextSuggestionsWithMaxCount:(unsigned long long)arg2;
- (void)extensionDeactivated:(id <GKBExtension>)arg1;
- (void)extension:(id <GKBExtension>)arg1 openURL:(NSURL *)arg2;
- (void)extensionBackspaceUp:(id <GKBExtension>)arg1;
- (void)extensionBackspaceDown:(id <GKBExtension>)arg1;
- (void)extension:(id <GKBExtension>)arg1 insertText:(NSString *)arg2;
- (void)extension:(id <GKBExtension>)arg1 setTextDocumentProxy:(id <UITextDocumentProxy><UITextInputTraits>)arg2;
- (void)extension:(id <GKBExtension>)arg1 removeHeaderViewController:(UIViewController *)arg2;
- (void)extension:(id <GKBExtension>)arg1 attachHeaderViewController:(UIViewController *)arg2;
- (void)extension:(id <GKBExtension>)arg1 hideView:(UIView *)arg2;
- (void)extension:(id <GKBExtension>)arg1 showView:(UIView *)arg2 inPosition:(long long)arg3;
@end

