/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition, NSString;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	char _crossFadeNavigationBar;
	char _crossFadeBottomBars;
	char _interactionAborted;
	UICollectionViewLayout* _toLayout;
	UIPercentDrivenInteractiveTransition* _interactionController;
	int _operation;

}

@property (nonatomic,retain) UICollectionViewLayout * toLayout;                                         //@synthesize toLayout=_toLayout - In the implementation block
@property (assign,nonatomic) char crossFadeNavigationBar;                                               //@synthesize crossFadeNavigationBar=_crossFadeNavigationBar - In the implementation block
@property (assign,nonatomic) char crossFadeBottomBars;                                                  //@synthesize crossFadeBottomBars=_crossFadeBottomBars - In the implementation block
@property (assign,nonatomic) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) char interactionAborted;                                                   //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) int operation;                                                             //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionAborted:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(char)interactionAborted;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(char)_shouldCrossFadeNavigationBar;
-(char)_shouldCrossFadeBottomBars;
-(void)setToLayout:(UICollectionViewLayout *)arg1 ;
-(void)setCrossFadeNavigationBar:(char)arg1 ;
-(void)setCrossFadeBottomBars:(char)arg1 ;
-(UICollectionViewLayout *)toLayout;
-(char)crossFadeNavigationBar;
-(char)crossFadeBottomBars;
@end
