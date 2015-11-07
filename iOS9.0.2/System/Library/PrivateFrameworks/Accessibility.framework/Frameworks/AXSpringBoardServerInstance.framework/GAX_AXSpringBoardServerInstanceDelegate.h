/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 9:09:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAX_AXSpringBoardServerInstanceDelegate <AXSpringBoardServerInstanceDelegate>
@required
-(void)endRequiringWallpaperWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 appIconForBundleID:(id)arg2 format:(int)arg3;
-(id)serverInstance:(id)arg1 appNameForDisplayID:(id)arg2;
-(id)serverInstance:(id)arg1 mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg2;
-(id)serverInstance:(id)arg1 hostViewForApplicationContextHostManager:(id)arg2 enableAndOrderFront:(char)arg3;
-(void)serverInstance:(id)arg1 disableHostingForApplicationContextHostManager:(id)arg2 withHostView:(id)arg3;
-(id)snapshotInCallServiceRemoteViewWithServerInstance:(id)arg1;
-(id)mainSceneWindowWithServerInstance:(id)arg1;
-(id)mainScreenAlertWindowWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 activateApp:(id)arg2;
-(void)quitTopApplicationWithServerInstance:(id)arg1;
-(void)updateLockAndIdleTimersWithServerInstance:(id)arg1;
-(void)beginRequiringWallpaperWithServerInstance:(id)arg1;
-(void)animateWallpaperStyleToNormalWithServerInstance:(id)arg1;
-(void)animateWallpaperStyleToOriginalWithServerInstance:(id)arg1;

@end
