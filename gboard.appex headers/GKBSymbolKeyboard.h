//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBEnKeyboard.h"

@interface GKBSymbolKeyboard : GKBEnKeyboard
{
    unsigned long long _switchKeyStatus;
    _Bool _keyPressedWhenSwitchKeyIsDown;
}

- (_Bool)shouldReturnToPrimeOnKey:(id)arg1;
- (_Bool)consumeEvent:(id)arg1;
- (void)activateWithTraits:(id)arg1;

@end

