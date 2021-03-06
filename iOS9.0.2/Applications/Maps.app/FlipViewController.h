/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/SUScalingFlipViewDelegate.h>

@protocol FlipViewControllerDelegate;
@class UIView, UIViewController, SUScalingFlipView, NSString;

@interface FlipViewController : UIViewController <SUScalingFlipViewDelegate> {

	CGRect _originalRect;
	char _flippingBack;
	id<FlipViewControllerDelegate> _flipDelegate;
	UIView* _viewToFlip;
	UIViewController* _viewControllerToPresent;
	SUScalingFlipView* _scalingFlipView;

}

@property (assign,nonatomic,__weak) id<FlipViewControllerDelegate> flipDelegate;              //@synthesize flipDelegate=_flipDelegate - In the implementation block
@property (nonatomic,retain) UIView * viewToFlip;                                             //@synthesize viewToFlip=_viewToFlip - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerToPresent;                      //@synthesize viewControllerToPresent=_viewControllerToPresent - In the implementation block
@property (nonatomic,retain) SUScalingFlipView * scalingFlipView;                             //@synthesize scalingFlipView=_scalingFlipView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlipDelegate:(id<FlipViewControllerDelegate>)arg1 ;
-(void)setScalingFlipView:(SUScalingFlipView *)arg1 ;
-(SUScalingFlipView *)scalingFlipView;
-(void)setViewControllerToPresent:(UIViewController *)arg1 ;
-(id<FlipViewControllerDelegate>)flipDelegate;
-(UIView *)viewToFlip;
-(CGRect)_modalPresentationRect;
-(void)flipToViewController;
-(void)setViewToFlip:(UIView *)arg1 ;
-(void)_unflipViewController;
-(id)initWithFlipView:(id)arg1 controllerToPresent:(id)arg2 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLoad;
-(UIViewController *)viewControllerToPresent;
-(void)scalingFlipViewDidFinish:(id)arg1 ;
@end

