//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GKBLanguageModelManager : NSObject
{
    NSMutableDictionary *_remoteLanguageModels;
    NSMutableDictionary *_localLanguageModels;
    NSMutableArray *_updatableLanguageModelIDs;
}

+ (id)sharedInstance;
@property(readonly) NSArray *updatableLanguageModelIDs; // @synthesize updatableLanguageModelIDs=_updatableLanguageModelIDs;
@property(readonly) NSDictionary *localLanguageModels; // @synthesize localLanguageModels=_localLanguageModels;
@property(readonly) NSDictionary *remoteLanguageModels; // @synthesize remoteLanguageModels=_remoteLanguageModels;
- (void).cxx_destruct;
- (id)bestAvailableEntryInDictionary:(id)arg1 forID:(id)arg2;
- (id)loadEntriesFromPreferenceKey:(id)arg1;
- (void)persistEntries:(id)arg1 toPreferenceKey:(id)arg2;
- (id)downloadedMetaDataPath;
- (void)findUpdatableLanguageModels;
- (void)scanForBundledLanguageModels;
- (void)parseMetaData;
- (void)refreshData;
- (void)clearLocalLanguageModels;
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)bestAvailableRemoteEntryWithID:(id)arg1;
- (id)bestAvailableLocalEntryWithID:(id)arg1;
- (void)addLocalEntry:(id)arg1;
- (id)init;

@end

