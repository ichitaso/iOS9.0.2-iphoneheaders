/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSUIAboutController : PSListController {

	char _firstViewDidAppear;
	id _effectiveSettingsChangedNotificationObserver;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willUnlock;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)updateDeviceNameSpecifierIfNeeded;
@end
