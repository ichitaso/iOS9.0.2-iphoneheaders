/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol MCUIInfoListDelegate;
@class NSArray, NSString;

@interface MCUIInfoListController : PSListController {

	id<MCUIInfoListDelegate> _delegate;
	NSArray* _info;
	NSString* _navTitle;
	NSString* _continueButtonTitle;

}

@property (nonatomic,copy) NSArray * info;                                          //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSString * navTitle;                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MCUIInfoListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * continueButtonTitle;                        //@synthesize continueButtonTitle=_continueButtonTitle - In the implementation block
-(void)setNavTitle:(NSString *)arg1 ;
-(id)specifiers;
-(NSString *)navTitle;
-(void)setDelegate:(id<MCUIInfoListDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MCUIInfoListDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(NSArray *)info;
-(void)setInfo:(NSArray *)arg1 ;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
-(void)_cancelButtonClicked;
-(void)_tellDelegateWeWantToContinue:(char)arg1 ;
-(void)_installButtonClicked;
-(void)_setupNavBar:(char)arg1 ;
-(NSString *)continueButtonTitle;
@end
