/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableViewController.h>

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController {

	SUDocumentInteractionSession* _documentInteractionSession;

}
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)itemOfferButtonAction:(id)arg1 ;
-(void)_purchasedItemSetChangedNotification:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_showPurchaseConfirmationForButton:(id)arg1 ;
-(void)_hidePurchaseConfirmationForButton:(id)arg1 ;
-(char)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)purchaseItemAtIndexPath:(id)arg1 ;
-(id)_preferredApplicationFromCandidates:(id)arg1 ;
-(void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_tableCellForButton:(id)arg1 ;
@end
