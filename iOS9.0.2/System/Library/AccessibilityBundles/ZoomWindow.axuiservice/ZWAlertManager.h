/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ZWAlertManager : NSObject {

	NSString* _currentAlertID;

}

@property (nonatomic,retain) NSString * currentAlertID;              //@synthesize currentAlertID=_currentAlertID - In the implementation block
-(NSString *)currentAlertID;
-(char)_shouldShowZoomAlert;
-(void)setCurrentAlertID:(NSString *)arg1 ;
-(void)showZoomEnabledAlertIfAppropriate;
-(void)showZoomDisabledAlertIfAppropriate;
-(void)showOrbZoomToggleOn;
-(void)showOrbZoomToggleOff;
@end

