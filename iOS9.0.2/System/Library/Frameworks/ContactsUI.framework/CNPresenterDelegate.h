/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIViewController;


@protocol CNPresenterDelegate <NSObject>
@property (readonly) UIViewController * currentPresentedViewController; 
@property (readonly) char isPresentingModalViewController; 
@required
-(void)sender:(id)arg1 presentViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2;
-(UIViewController *)currentPresentedViewController;
-(char)isPresentingModalViewController;

@end

