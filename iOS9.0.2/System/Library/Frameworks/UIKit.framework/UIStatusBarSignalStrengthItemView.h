/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

	int _signalStrengthRaw;
	int _signalStrengthBars;
	char _enableRSSI;
	char _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)extraRightPadding;
-(id)contentsImage;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)_stringForRSSI;
@end

