/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/NCBannerAccessoryHostInterface.h>

@protocol NCBannerAccessoryHostViewControllerDelegate;
@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface> {

	id<NCBannerAccessoryHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<NCBannerAccessoryHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<NCBannerAccessoryHostViewControllerDelegate>)arg1 ;
-(id<NCBannerAccessoryHostViewControllerDelegate>)delegate;
-(void)_dismiss;
-(void)_becomeSticky;
-(void)_setSticky:(char)arg1 ;
@end
