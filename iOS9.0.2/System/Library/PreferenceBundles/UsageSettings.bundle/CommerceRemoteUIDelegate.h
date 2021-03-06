/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol CommerceRemoteUIDelegateDelegate;
@class UINavigationController, UIViewController, NSMutableArray, NSOperationQueue, UIAlertView, ISDialog, NSString;

@interface CommerceRemoteUIDelegate : NSObject <ISStoreURLOperationDelegate, RUIObjectModelDelegate> {

	UINavigationController* _navigationController;
	UINavigationController* _parentNavigationController;
	UIViewController* _topViewController;
	char _modallyPresented;
	NSMutableArray* _objectModels;
	NSOperationQueue* _queue;
	UIAlertView* _errorAlert;
	UIAlertView* _dialogAlert;
	ISDialog* _dialog;
	char _registeredDialogNotification;
	char _registeredAuthNotification;
	char _cancelled;
	id<CommerceRemoteUIDelegateDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CommerceRemoteUIDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupLoader;
-(void)handleDialog:(id)arg1 ;
-(void)pushSpinner;
-(void)unregisterAuthNotification;
-(void)errorWithTitle:(id)arg1 andExplanation:(id)arg2 ;
-(void)userCancelledFlow;
-(void)processLink:(id)arg1 forceAuth:(char)arg2 needsAuth:(char)arg3 ;
-(void)processLink:(id)arg1 forceAuth:(char)arg2 needsAuth:(char)arg3 localAuth:(char)arg4 ;
-(void)makeBuyRequest:(id)arg1 forceAuth:(char)arg2 ;
-(void)processLink:(id)arg1 forceAuth:(char)arg2 ;
-(void)setDelegate:(id<CommerceRemoteUIDelegateDelegate>)arg1 ;
-(void)dealloc;
-(id<CommerceRemoteUIDelegateDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(id)initWithNavigationController:(id)arg1 needsModalPresentation:(char)arg2 ;
-(void)loadURLforKey:(id)arg1 ;
-(void)cancelRemoteUI;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

