/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIViewController.h>

@class UIControl, UIView, PHLocalVideoDisabledOverlayView;

@interface PHLocalVideoViewController : UIViewController {

	char _localVideoAlwaysMatchesScreen;
	char _supportsAutoRotation;
	char _showsLocalPreviewStatusBarGradient;
	char _waitingForLocalVideoFirstFrame;
	UIControl* _videoGroupView;
	UIView* _localVideoView;
	UIView* _localVideoStatusBarGradientView;
	PHLocalVideoDisabledOverlayView* _disabledOverlayView;
	int _lastKnownOrientation;

}

@property (nonatomic,retain) UIControl * videoGroupView;                                         //@synthesize videoGroupView=_videoGroupView - In the implementation block
@property (nonatomic,retain) UIView * localVideoView;                                            //@synthesize localVideoView=_localVideoView - In the implementation block
@property (nonatomic,retain) UIView * localVideoStatusBarGradientView;                           //@synthesize localVideoStatusBarGradientView=_localVideoStatusBarGradientView - In the implementation block
@property (nonatomic,retain) PHLocalVideoDisabledOverlayView * disabledOverlayView;              //@synthesize disabledOverlayView=_disabledOverlayView - In the implementation block
@property (assign,nonatomic) char localVideoAlwaysMatchesScreen;                                 //@synthesize localVideoAlwaysMatchesScreen=_localVideoAlwaysMatchesScreen - In the implementation block
@property (assign,nonatomic) char supportsAutoRotation;                                          //@synthesize supportsAutoRotation=_supportsAutoRotation - In the implementation block
@property (assign,nonatomic) char showsLocalPreviewStatusBarGradient;                            //@synthesize showsLocalPreviewStatusBarGradient=_showsLocalPreviewStatusBarGradient - In the implementation block
@property (assign,nonatomic) char waitingForLocalVideoFirstFrame;                                //@synthesize waitingForLocalVideoFirstFrame=_waitingForLocalVideoFirstFrame - In the implementation block
@property (assign,nonatomic) int lastKnownOrientation;                                           //@synthesize lastKnownOrientation=_lastKnownOrientation - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(void)fadeOutAnimated:(char)arg1 ;
-(char)shouldDisableEdgeClip;
-(void)updateViewControllerForOrientation:(int)arg1 ;
-(void)_avFirstPreviewFrameArrived:(id)arg1 ;
-(void)_handleLocalCameraErrorNotification:(id)arg1 ;
-(void)_handleLocalCameraAvailableNotification:(id)arg1 ;
-(void)_handleOrientationDidChangeNotification:(id)arg1 ;
-(void)_handleVideoPreviewDidStartNotification:(id)arg1 ;
-(char)_isValidFaceTimeOrientation:(int)arg1 ;
-(char)supportsAutoRotation;
-(void)_dissociateVideoLayers;
-(void)_ensureVideoLayersExist;
-(void)setWaitingForLocalVideoFirstFrame:(char)arg1 ;
-(char)localVideoAlwaysMatchesScreen;
-(void)updateLocalVideoToMatchScreen;
-(UIControl *)videoGroupView;
-(void)associateLocalVideoLayers;
-(void)_updateLocalVideoOrientationAnimated:(char)arg1 ;
-(void)_setupVideoLayers;
-(void)_updateLocalPreviewStatusBarGradient;
-(void)setVideoGroupView:(UIControl *)arg1 ;
-(void)setLocalVideoView:(UIView *)arg1 ;
-(void)_ensureLocalVideoWillBecomeVisible;
-(UIView *)localVideoView;
-(unsigned)_imAVCameraOrientationForDeviceOrientation:(int)arg1 ;
-(void)_adjustForOrientationAnimated:(char)arg1 ;
-(void)_applyAutoRotationCorrectionForOrientation:(int)arg1 withTransitionCoordinator:(id)arg2 ;
-(PHLocalVideoDisabledOverlayView *)disabledOverlayView;
-(void)setDisabledOverlayView:(PHLocalVideoDisabledOverlayView *)arg1 ;
-(void)_fadeInLocalVideo;
-(void)_autoFadeInLocalVideo;
-(char)waitingForLocalVideoFirstFrame;
-(char)showsLocalPreviewStatusBarGradient;
-(void)fadeInAnimated:(char)arg1 ;
-(UIView *)localVideoStatusBarGradientView;
-(void)setLocalVideoStatusBarGradientView:(UIView *)arg1 ;
-(void)setLocalVideoAlwaysMatchesScreen:(char)arg1 ;
-(void)setShowsLocalPreviewStatusBarGradient:(char)arg1 ;
-(int)lastKnownOrientation;
-(void)setLastKnownOrientation:(int)arg1 ;
-(void)_applicationResumed:(id)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)stopPreview;
-(void)setSupportsAutoRotation:(char)arg1 ;
-(void)startPreview;
@end

