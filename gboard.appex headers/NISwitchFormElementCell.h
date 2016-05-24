//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIFormElementCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UISwitch;

@interface NISwitchFormElementCell : NIFormElementCell <UITextFieldDelegate>
{
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)switchDidChangeValue;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

