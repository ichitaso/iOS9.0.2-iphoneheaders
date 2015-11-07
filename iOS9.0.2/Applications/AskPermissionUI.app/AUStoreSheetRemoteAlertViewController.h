/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AskPermissionUI.app/AskPermissionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <AskPermissionUI/SKStoreProductViewControllerDelegatePrivate.h>
#import <AskPermissionUI/AUStorePreviewWebViewDelegate.h>

@class UINavigationController, PRRequest, NSString;

@interface AUStoreSheetRemoteAlertViewController : SBUIRemoteAlertServiceViewController <SKStoreProductViewControllerDelegatePrivate, AUStorePreviewWebViewDelegate> {

	UINavigationController* _navController;
	PRRequest* _request;
	NSString* _requestString;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDidApproveRequest:(id)arg1 ;
-(void)userDidDeclineRequest:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(void)_dismissViewController;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end
