/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SuggestedContactsControllerDelegate, AirdropOfferViewControllerDelegate;
@class SuggestedContactsController, FMFAirDropOfferViewController, NSLayoutConstraint;

@interface SuggestedContactsAirdropContainerViewController : UIViewController {

	id<SuggestedContactsControllerDelegate> _suggestedControllerDelegate;
	id<AirdropOfferViewControllerDelegate> _airdropOfferControllerDelegate;
	SuggestedContactsController* _suggestedContactsController;
	FMFAirDropOfferViewController* _airdropViewController;
	NSLayoutConstraint* _airdropContainerHeightConstraint;

}

@property (assign,nonatomic,__weak) id<SuggestedContactsControllerDelegate> suggestedControllerDelegate;                //@synthesize suggestedControllerDelegate=_suggestedControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AirdropOfferViewControllerDelegate> airdropOfferControllerDelegate;              //@synthesize airdropOfferControllerDelegate=_airdropOfferControllerDelegate - In the implementation block
@property (nonatomic,retain) SuggestedContactsController * suggestedContactsController;                                 //@synthesize suggestedContactsController=_suggestedContactsController - In the implementation block
@property (nonatomic,retain) FMFAirDropOfferViewController * airdropViewController;                                     //@synthesize airdropViewController=_airdropViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * airdropContainerHeightConstraint;                                     //@synthesize airdropContainerHeightConstraint=_airdropContainerHeightConstraint - In the implementation block
-(FMFAirDropOfferViewController *)airdropViewController;
-(NSLayoutConstraint *)airdropContainerHeightConstraint;
-(void)setSuggestedContactsController:(SuggestedContactsController *)arg1 ;
-(SuggestedContactsController *)suggestedContactsController;
-(id<SuggestedContactsControllerDelegate>)suggestedControllerDelegate;
-(void)setAirdropViewController:(FMFAirDropOfferViewController *)arg1 ;
-(id<AirdropOfferViewControllerDelegate>)airdropOfferControllerDelegate;
-(void)setSuggestedControllerDelegate:(id<SuggestedContactsControllerDelegate>)arg1 ;
-(void)refreshSuggestedContacts;
-(void)setAirdropOfferControllerDelegate:(id<AirdropOfferViewControllerDelegate>)arg1 ;
-(void)setAirdropContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(char)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
@end
