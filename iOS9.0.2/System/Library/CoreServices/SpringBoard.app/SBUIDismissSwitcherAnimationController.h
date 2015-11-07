/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBAppViewHostRequester.h>

@class SBDisplayItem, SBAppView, SBOrientationTransformWrapperView, SBAppSwitcherPageView, NSString;

@interface SBUIDismissSwitcherAnimationController : SBUIMainScreenAnimationController <SBAppViewHostRequester> {

	SBDisplayItem* _activatingDisplayItem;
	SBAppView* _appView;
	SBOrientationTransformWrapperView* _appViewLayoutWrapper;
	SBAppSwitcherPageView* _animatingPageView;
	char _isInteractive;
	char _finishedSwitcherAnimation;
	char _finishedCrossfadingToHostView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(int)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(void)endTransitionWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(id)initWithTransitionContextProvider:(id)arg1 activatingDisplayItem:(id)arg2 interactive:(char)arg3 ;
-(void)_noteSwitcherAnimationFinished;
-(void)_evaluateDependenciesForCrossfadeStart;
-(void)_crossfadeApp;
-(void)_noteCrossfadeDidFinish;
-(void)_reportAnimationFinishedIfNecessary;
-(char)_isActivatingFromContinuityApp;
-(void)_startAnimation;
-(void)dealloc;
@end
