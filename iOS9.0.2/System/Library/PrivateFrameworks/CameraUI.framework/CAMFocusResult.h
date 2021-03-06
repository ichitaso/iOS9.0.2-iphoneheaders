/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFocusResult : NSObject {

	char _performingContrastDetection;
	char _contrastBasedFocusDidStart;
	char _contrastBasedFocusDidEnd;
	char _deviceSupportsFocus;
	int _focusMode;
	CGPoint _pointOfInterest;

}

@property (getter=isPerformingContrastDetection,nonatomic,readonly) char performingContrastDetection;              //@synthesize performingContrastDetection=_performingContrastDetection - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                                            //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) int focusMode;                                                                      //@synthesize focusMode=_focusMode - In the implementation block
@property (nonatomic,readonly) char contrastBasedFocusDidStart;                                                    //@synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart - In the implementation block
@property (nonatomic,readonly) char contrastBasedFocusDidEnd;                                                      //@synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd - In the implementation block
@property (nonatomic,readonly) char deviceSupportsFocus;                                                           //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(id)description;
-(CGPoint)pointOfInterest;
-(char)deviceSupportsFocus;
-(int)focusMode;
-(char)isPerformingContrastDetection;
-(char)contrastBasedFocusDidStart;
-(char)contrastBasedFocusDidEnd;
-(id)initWithMode:(int)arg1 pointOfInterest:(CGPoint)arg2 performingContrastDetection:(char)arg3 contrastBasedFocusDidStart:(char)arg4 contrastBasedFocusDidEnd:(char)arg5 deviceSupportsFocus:(char)arg6 ;
@end

