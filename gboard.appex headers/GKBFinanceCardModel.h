//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBCardModel.h"

@class NSString, NSURL;

@interface GKBFinanceCardModel : GKBCardModel
{
    NSString *_company;
    NSString *_symbol;
    NSString *_exchange;
    NSString *_price;
    NSString *_priceChange;
    NSString *_priceChangePercent;
    long long _timestamp;
    NSString *_timeZone;
    NSURL *_URL;
    NSURL *_disclaimerURL;
}

@property(readonly, nonatomic) NSURL *disclaimerURL; // @synthesize disclaimerURL=_disclaimerURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *priceChangePercent; // @synthesize priceChangePercent=_priceChangePercent;
@property(readonly, nonatomic) NSString *priceChange; // @synthesize priceChange=_priceChange;
@property(readonly, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *exchange; // @synthesize exchange=_exchange;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) NSString *company; // @synthesize company=_company;
- (void).cxx_destruct;
- (id)timestampString;
- (id)customOpenURL;
- (id)openURL;
- (id)shareText;
- (id)footerActionModels;
- (id)initWithCompany:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 priceChange:(id)arg5 priceChangePercent:(id)arg6 timestamp:(long long)arg7 timeZone:(id)arg8 URL:(id)arg9 disclaimerURL:(id)arg10;

@end

