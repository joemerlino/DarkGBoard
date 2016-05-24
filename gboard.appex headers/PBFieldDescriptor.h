//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBEnumDescriptor, PBFieldOptions;

@interface PBFieldDescriptor : NSObject
{
    struct PBMessageFieldDescription *description_;
    SEL getSel_;
    SEL setSel_;
    SEL hasSel_;
    SEL setHasSel_;
    CDUnion_4a31c45d defaultValue_;
    PBFieldOptions *fieldOptions_;
    Class msgClass_;
    union {
        PBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;
}

@property(readonly, nonatomic) Class msgClass; // @synthesize msgClass=msgClass_;
@property(readonly, nonatomic) SEL setSel; // @synthesize setSel=setSel_;
@property(readonly, nonatomic) SEL setHasSel; // @synthesize setHasSel=setHasSel_;
@property(readonly, nonatomic) SEL hasSel; // @synthesize hasSel=hasSel_;
@property(readonly, nonatomic) PBFieldOptions *fieldOptions; // @synthesize fieldOptions=fieldOptions_;
@property(readonly, nonatomic) SEL getSel; // @synthesize getSel=getSel_;
- (id)textFormatName;
@property(readonly, nonatomic) CDUnion_4a31c45d defaultValue;
@property(readonly, retain, nonatomic) PBEnumDescriptor *enumDescriptor;
- (_Bool)isValidEnumValue:(int)arg1;
@property(readonly, nonatomic, getter=isMessage) _Bool message;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic, getter=isOptional) _Bool optional;
@property(readonly, nonatomic, getter=isRequired) _Bool required;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int tag;
@property(readonly, nonatomic) unsigned long long offset;
@property(readonly, nonatomic) unsigned int number;
@property(readonly, nonatomic) _Bool hasDefaultValue;
@property(readonly, nonatomic) unsigned int hasIndex;
@property(readonly, nonatomic) int type;
- (void)dealloc;
- (id)initWithFieldDescription:(struct PBMessageFieldDescription *)arg1 rootClass:(Class)arg2;
- (id)init;

@end

