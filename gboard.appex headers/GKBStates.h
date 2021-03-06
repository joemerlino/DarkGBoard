//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKBStates : NSObject
{
    unsigned long long _value;
}

+ (unsigned long long)nextCombination:(unsigned long long)arg1;
+ (_Bool)isValidState:(unsigned long long)arg1;
+ (id)statesListFromString:(id)arg1;
+ (unsigned long long)statesFromString:(id)arg1;
+ (unsigned long long)returnKeyTypeContinue;
+ (unsigned long long)returnKeyTypeEmergencyCall;
+ (unsigned long long)returnKeyTypeDone;
+ (unsigned long long)returnKeyTypeYahoo;
+ (unsigned long long)returnKeyTypeSend;
+ (unsigned long long)returnKeyTypeSearch;
+ (unsigned long long)returnKeyTypeRoute;
+ (unsigned long long)returnKeyTypeNext;
+ (unsigned long long)returnKeyTypeJoin;
+ (unsigned long long)returnKeyTypeGoogle;
+ (unsigned long long)returnKeyTypeGo;
+ (unsigned long long)returnKeyTypeDefault;
+ (unsigned long long)returnKeyTypeStateAtIndex:(int)arg1;
+ (unsigned long long)returnKeyTypeMask;
+ (int)returnKeyTypeBitCount;
+ (int)returnKeyTypeOffSet;
+ (unsigned long long)keyboardTypeWebSearch;
+ (unsigned long long)keyboardTypeTwitter;
+ (unsigned long long)keyboardTypeDecimalPad;
+ (unsigned long long)keyboardTypeEmailAddress;
+ (unsigned long long)keyboardTypeNamePhonePad;
+ (unsigned long long)keyboardTypePhonePad;
+ (unsigned long long)keyboardTypeNumberPad;
+ (unsigned long long)keyboardTypeURL;
+ (unsigned long long)keyboardTypeNumbersAndPunctuation;
+ (unsigned long long)keyboardTypeASCIICapable;
+ (unsigned long long)keyboardTypeDefault;
+ (unsigned long long)keyboardTypeStateAtIndex:(int)arg1;
+ (unsigned long long)keyboardTypeMask;
+ (int)keyboardTypeBitCount;
+ (int)keyboardTypeOffSet;
+ (unsigned long long)showLowerCase;
+ (unsigned long long)showUpdatePrompt;
+ (unsigned long long)showFullAccessPrompt;
+ (unsigned long long)disableExtensions;
+ (unsigned long long)hasSideKeys;
+ (unsigned long long)returnKeyDisabled;
+ (unsigned long long)secondPage;
+ (unsigned long long)moreCandidateShown;
+ (unsigned long long)composing;
+ (unsigned long long)shiftLock;
+ (unsigned long long)shift;
+ (unsigned long long)normal;
+ (unsigned long long)customMax;
+ (unsigned long long)customMin;
+ (unsigned long long)all;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)initWithValue:(unsigned long long)arg1;

@end

