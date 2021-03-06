/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Print Center.app/Print Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Print Center/Print Center-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PrintStatusViewController, NSString;

@interface PrintStatusAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PrintStatusViewController* _viewController;

}

@property (nonatomic,retain) UIWindow * window;                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) PrintStatusViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setViewController:(PrintStatusViewController *)arg1 ;
-(PrintStatusViewController *)viewController;
@end

