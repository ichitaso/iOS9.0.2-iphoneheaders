/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>

@protocol SBSwitchAppSwipeTransactionDelegate;
@class SBUISwitchAppSwipeAnimationController, SBSceneLayoutWorkspaceTransaction, NSTimer, SBWorkspaceApplicationTransitionContext, NSString;

@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate> {

	id<SBSwitchAppSwipeTransactionDelegate> _delegate;
	SBUISwitchAppSwipeAnimationController* _animationController;
	SBSceneLayoutWorkspaceTransaction* _sceneLayoutTransaction;
	/*^block*/id _layoutCompletion;
	/*^block*/id _layoutContinuation;
	NSTimer* _delayedAppLaunchTimer;
	char _trackingGesture;
	char _endLayoutTransition;
	char _completingAnimation;
	float _basePercentage;
	SBWorkspaceApplicationTransitionContext* _startingTransitionContext;
	SBWorkspaceApplicationTransitionContext* _nextTransitionContext;
	SBWorkspaceApplicationTransitionContext* _previousTransitionContext;
	SBWorkspaceApplicationTransitionContext* _endingTransitionContext;

}

@property (assign,nonatomic) id<SBSwitchAppSwipeTransactionDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTrackingGesture,nonatomic,readonly) char trackingGesture;                                         //@synthesize trackingGesture=_trackingGesture - In the implementation block
@property (getter=isFinishedAnimating,nonatomic,readonly) char finishedAnimating; 
@property (nonatomic,retain) SBWorkspaceApplicationTransitionContext * nextTransitionContext;                         //@synthesize nextTransitionContext=_nextTransitionContext - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplicationTransitionContext * previousTransitionContext;                     //@synthesize previousTransitionContext=_previousTransitionContext - In the implementation block
@property (nonatomic,retain,readonly) SBWorkspaceApplicationTransitionContext * endingTransitionContext;              //@synthesize endingTransitionContext=_endingTransitionContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)endingTransitionContext;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(char)isTrackingGesture;
-(void)_continueLayoutTransitionToCompletion:(char)arg1 updateScenes:(char)arg2 ;
-(void)_cancelPendingAppLaunch;
-(void)_gestureChanged:(float)arg1 ;
-(void)_gestureEndedWithCompletionType:(int)arg1 ;
-(void)_gestureCancelled;
-(void)_continueLayoutTransitionWithContext:(id)arg1 toCompletion:(char)arg2 updateScenes:(char)arg3 ;
-(void)_pendingAppLaunchTimerFired;
-(void)_schedulePendingAppLaunch;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(void)startTrackingGesture:(id)arg1 ;
-(void)_finishWithCompletionType:(int)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)nextTransitionContext;
-(void)setNextTransitionContext:(SBWorkspaceApplicationTransitionContext *)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)previousTransitionContext;
-(void)setPreviousTransitionContext:(SBWorkspaceApplicationTransitionContext *)arg1 ;
-(void)setDelegate:(id<SBSwitchAppSwipeTransactionDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSwitchAppSwipeTransactionDelegate>)delegate;
-(char)isFinishedAnimating;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_begin;
@end

