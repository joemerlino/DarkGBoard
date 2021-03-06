//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class IssuedSearchQuery, LanguageTipNotification, MSPPagination, MSPRelatedQueries, NSMutableArray, SearchResponseContext;

@interface SearchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIssuedQuery; // @dynamic hasIssuedQuery;
@property(nonatomic) _Bool hasLanguageTipNotification; // @dynamic hasLanguageTipNotification;
@property(nonatomic) _Bool hasPagination; // @dynamic hasPagination;
@property(nonatomic) _Bool hasRelatedQueries; // @dynamic hasRelatedQueries;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) IssuedSearchQuery *issuedQuery; // @dynamic issuedQuery;
@property(retain, nonatomic) LanguageTipNotification *languageTipNotification; // @dynamic languageTipNotification;
@property(retain, nonatomic) MSPPagination *pagination; // @dynamic pagination;
@property(retain, nonatomic) MSPRelatedQueries *relatedQueries; // @dynamic relatedQueries;
@property(retain, nonatomic) SearchResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;

@end

