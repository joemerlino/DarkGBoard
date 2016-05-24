//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class FinanceResult_Exchange, FinanceResult_Stock, NSString, Url;

@interface FinanceResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *company; // @dynamic company;
@property(copy, nonatomic) NSString *currency; // @dynamic currency;
@property(retain, nonatomic) Url *disclaimerURL; // @dynamic disclaimerURL;
@property(retain, nonatomic) FinanceResult_Exchange *exchange; // @dynamic exchange;
@property(nonatomic) _Bool hasCompany; // @dynamic hasCompany;
@property(nonatomic) _Bool hasCurrency; // @dynamic hasCurrency;
@property(nonatomic) _Bool hasDisclaimerURL; // @dynamic hasDisclaimerURL;
@property(nonatomic) _Bool hasExchange; // @dynamic hasExchange;
@property(nonatomic) _Bool hasStockPriceToday; // @dynamic hasStockPriceToday;
@property(nonatomic) _Bool hasSymbol; // @dynamic hasSymbol;
@property(nonatomic) _Bool hasSymbolURL; // @dynamic hasSymbolURL;
@property(retain, nonatomic) FinanceResult_Stock *stockPriceToday; // @dynamic stockPriceToday;
@property(copy, nonatomic) NSString *symbol; // @dynamic symbol;
@property(retain, nonatomic) Url *symbolURL; // @dynamic symbolURL;

@end
