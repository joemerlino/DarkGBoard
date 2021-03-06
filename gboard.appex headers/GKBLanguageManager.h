//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface GKBLanguageManager : NSObject
{
    NSMutableArray *_enabledLanguages;
    struct NSString *_currentLanguage;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(readonly, nonatomic) NSArray *enabledLanguages; // @synthesize enabledLanguages=_enabledLanguages;
- (void).cxx_destruct;
- (void)persistEnabledLanguages;
@property(readonly, nonatomic) NSDictionary *availableLanguages;
- (id)displayNameForKeyboardVariant:(struct NSString *)arg1;
- (id)displayNameInSystemLocalForLanguage:(struct NSString *)arg1;
- (id)displayNameForLanguage:(struct NSString *)arg1;
- (void)setEnabledKeyboardVariant:(struct NSString *)arg1 forLanguage:(struct NSString *)arg2;
- (struct NSString *)enabledKeyboardVariantForLanguage:(struct NSString *)arg1;
- (void)moveEnabledLanguageAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)refreshData;
- (void)disableLanguage:(struct NSString *)arg1;
- (void)enableLanguage:(struct NSString *)arg1;
- (id)init;

@end

