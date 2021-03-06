/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ZOTFullscreenZoomHandlerDelegate <NSObject>
@required
-(void)fullscreenEventHandler:(id)arg1 didThreeFingerOrbAtLocation:(CGPoint)arg2;
-(float)zoomLevelWithFullscreenEventHandler:(id)arg1;
-(char)isZoomMovingWithVelocityWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 didStartOrbAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didEndOrbAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 updateOrbMovementAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerDownAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerUpAtLocation:(CGPoint)arg2;
-(void)stopZoomMovementWithVelocityWithFullscreenEventHandler:(id)arg1;
-(void)endZoomMovementWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 updateZoomMovementWithPoint:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 continueZoomMovementWithVelocity:(float)arg2 angle:(float)arg3;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerSingleTapAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerDoubleTapAtLocation:(CGPoint)arg2;
-(void)blockNotificationCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1;
-(void)blockControlCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerTripleTapAtLocation:(CGPoint)arg2;
-(void)updateStoredZoomedLevelWithFullscreenEventHandler:(id)arg1;
-(float)storedZoomLevelWithFullscreenEventHandler:(id)arg1;
-(CGPoint*)zoomLocationWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 storeZoomLevel:(float)arg2 location:(CGPoint)arg3 zoomed:(char)arg4 forKey:(id)arg5;
-(void)fullscreenEventHandler:(id)arg1 setUsingRelativePushPanning:(char)arg2;
-(char)fullscreenEventHandler:(id)arg1 autopanShouldStartWithEvent:(id)arg2 speedFactor:(double*)arg3 initialSingleFingerLocation:(CGPoint)arg4;
-(int)interfaceOrientationWithFullscreenEventHandler:(id)arg1;
-(char)fullscreenEventHandler:(id)arg1 autopanWithLocation:(CGPoint)arg2 initialSingleFingerLocation:(CGPoint)arg3 distance:(float)arg4 animationDuration:(double)arg5;
-(char)usingRelativePushPanningWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 setZoomLevel:(float)arg2 duration:(double)arg3;

@end

