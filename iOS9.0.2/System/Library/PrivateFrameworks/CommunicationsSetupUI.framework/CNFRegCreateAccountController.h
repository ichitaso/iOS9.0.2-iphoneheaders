/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;
@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {

	id<CNFRegCreateAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNFRegCreateAccountControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegCreateAccountControllerDelegate>)delegate;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)bagKey;
@end

