/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStorePageViewController.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>
#import <libobjc.A.dylib/SUStorePageViewControllerResponder.h>
#import <iBooks/AEStorePageViewController.h>

@class NSString;

@interface BKStorePageViewController : SUStorePageViewController <ISURLOperationDelegate, SUStorePageViewControllerResponder, AEStorePageViewController> {

	char _upsellPage;

}

@property (assign,getter=isUpsellPage,nonatomic) char upsellPage;              //@synthesize upsellPage=_upsellPage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isUpsellPage;
-(void)setUpsellPage:(char)arg1 ;
-(void)_installUpsellOnBKWebViews;
-(void)viewWillDisappear:(char)arg1 ;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(char)arg2 ;
-(id)newPlaceholderViewController;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(void)storePageProtocolDidChange;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(char)_shouldFetchAutomatically;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

