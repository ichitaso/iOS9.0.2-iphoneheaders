/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <MobileNotes/ICStartupControllerDelegate.h>

@class ICStartupViewController, ICStartupMovingViewController, ICStartupController, ICDeviceListRequest;

@interface ICStartupNavigationController : UINavigationController <ICStartupControllerDelegate> {

	ICStartupViewController* _startupViewController;
	ICStartupMovingViewController* _startupMovingViewController;
	ICStartupController* _startupController;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,readonly) char hasAnyViewToShow; 
@property (nonatomic,readonly) ICDeviceListRequest * deviceListRequest; 
@property (nonatomic,readonly) char shouldSwapChoices; 
@property (nonatomic,readonly) char isElCapitanAvailable; 
@property (nonatomic,retain) ICStartupViewController * startupViewController;                          //@synthesize startupViewController=_startupViewController - In the implementation block
@property (nonatomic,retain) ICStartupMovingViewController * startupMovingViewController;              //@synthesize startupMovingViewController=_startupMovingViewController - In the implementation block
@property (nonatomic,retain) ICStartupController * startupController;                                  //@synthesize startupController=_startupController - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                            //@synthesize dismissBlock=_dismissBlock - In the implementation block
+(char)checkIfExtraSmallDeviceFromView:(id)arg1 ;
+(void)setColorAndLetterpressForLabel:(id)arg1 ;
+(id)defaultLabelColor;
+(id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3 ;
+(id)allLabelsUnderView:(id)arg1 ;
+(void)setColorAndLetterpressForAllLabelsInView:(id)arg1 ;
+(id)defaultColorLetterpressedString:(id)arg1 font:(id)arg2 ;
-(void)continueAction;
-(int)getStartupMigrationTypeWithTimeout:(double)arg1 ;
-(void)upgradeAction;
-(void)noUpgradeAction;
-(void)dismissWithCompletionBlock:(/*^block*/id)arg1 ;
-(ICDeviceListRequest *)deviceListRequest;
-(char)shouldSwapChoices;
-(id)initWithMovingViewOnly:(char)arg1 dismissBlock:(/*^block*/id)arg2 ;
-(char)hasAnyViewToShow;
-(void)startupControllerShouldCloseMovingView;
-(void)startupMigrationTypeMightHaveChanged;
-(char)isElCapitanAvailable;
-(void)setDismissBlock:(id)arg1 ;
-(void)setStartupController:(ICStartupController *)arg1 ;
-(void)setStartupViewController:(ICStartupViewController *)arg1 ;
-(void)setStartupMovingViewController:(ICStartupMovingViewController *)arg1 ;
-(ICStartupController *)startupController;
-(ICStartupMovingViewController *)startupMovingViewController;
-(ICStartupViewController *)startupViewController;
-(id)dismissBlock;
-(void)noUpgradeActionAndDismiss;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)dismiss;
@end
