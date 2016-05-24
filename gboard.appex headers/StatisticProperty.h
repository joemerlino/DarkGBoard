//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, StatisticProperty_DisplayUnit, StatisticProperty_TranslationConsoleContext;

@interface StatisticProperty : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *abbreviation; // @dynamic abbreviation;
@property(retain, nonatomic) NSMutableArray *displayFormatArray; // @dynamic displayFormatArray;
@property(readonly, nonatomic) unsigned long long displayFormatArray_Count; // @dynamic displayFormatArray_Count;
@property(nonatomic) int displayOrder; // @dynamic displayOrder;
@property(nonatomic) int displayPriority; // @dynamic displayPriority;
@property(retain, nonatomic) StatisticProperty_DisplayUnit *displayUnit; // @dynamic displayUnit;
@property(nonatomic) _Bool hasAbbreviation; // @dynamic hasAbbreviation;
@property(nonatomic) _Bool hasDisplayOrder; // @dynamic hasDisplayOrder;
@property(nonatomic) _Bool hasDisplayPriority; // @dynamic hasDisplayPriority;
@property(nonatomic) _Bool hasDisplayUnit; // @dynamic hasDisplayUnit;
@property(nonatomic) _Bool hasIsHighlighted; // @dynamic hasIsHighlighted;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasShowTotalSubStat; // @dynamic hasShowTotalSubStat;
@property(nonatomic) _Bool hasSize; // @dynamic hasSize;
@property(nonatomic) _Bool hasSubStatDisplayName; // @dynamic hasSubStatDisplayName;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasTranslationConsoleContext; // @dynamic hasTranslationConsoleContext;
@property(nonatomic) _Bool hasUseDashWhenZero; // @dynamic hasUseDashWhenZero;
@property(nonatomic) _Bool hasValuesType; // @dynamic hasValuesType;
@property(nonatomic) _Bool isHighlighted; // @dynamic isHighlighted;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *roleDependentDataArray; // @dynamic roleDependentDataArray;
@property(readonly, nonatomic) unsigned long long roleDependentDataArray_Count; // @dynamic roleDependentDataArray_Count;
@property(nonatomic) _Bool showTotalSubStat; // @dynamic showTotalSubStat;
@property(nonatomic) double size; // @dynamic size;
@property(copy, nonatomic) NSString *subStatDisplayName; // @dynamic subStatDisplayName;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;
@property(retain, nonatomic) StatisticProperty_TranslationConsoleContext *translationConsoleContext; // @dynamic translationConsoleContext;
@property(nonatomic) _Bool useDashWhenZero; // @dynamic useDashWhenZero;
@property(nonatomic) int valuesType; // @dynamic valuesType;

@end
