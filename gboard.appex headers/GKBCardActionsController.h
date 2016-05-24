//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBURLShortener;

@interface GKBCardActionsController : NSObject
{
    GKBURLShortener *_URLShortener;
    id <GKBCardActionsControllerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <GKBCardActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sanitizedPhoneNumber:(id)arg1;
- (void)callPhoneNumber:(id)arg1;
- (void)insertText:(id)arg1 URL:(id)arg2;
- (void)copyImage:(id)arg1;
- (void)openURL:(id)arg1;
- (void)deactivate;
- (void)activate;

@end

