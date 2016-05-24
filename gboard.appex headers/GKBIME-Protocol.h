//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GKBCandidate, GKBEvent, GKBInputBundleDef, UILexicon;

@protocol GKBIME
- (void)clearUserHistory;
- (void)cursorHasMoved;
- (void)keyboardStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)keyboardWithTypeDidActivated:(int)arg1;
- (void)requestCandidates:(int)arg1;
- (void)selectReadingTextCandidate:(GKBCandidate *)arg1 forCommit:(_Bool)arg2;
- (void)selectTextCandidate:(GKBCandidate *)arg1 forCommit:(_Bool)arg2;
- (void)handleEvent:(GKBEvent *)arg1;
- (void)abortComposing;
- (void)finishComposing;
- (void)deactivate;
- (void)activateWithTraits:(id <UITextInputTraits>)arg1;
- (void)close;
- (void)configureWithLexicon:(UILexicon *)arg1;
- (void)configureWithInputBundleDef:(GKBInputBundleDef *)arg1 delegate:(id <GKBIMEDelegate>)arg2;
@end

