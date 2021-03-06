/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementTimerControl : UIAccessibilityElement {

	UILabel* _icon;
	UILabel* _name;

}

@property (nonatomic,retain) UILabel * icon;              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(UILabel *)arg1 ;
-(UILabel *)name;
-(id)accessibilityLabel;
-(void)setIcon:(UILabel *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(UILabel *)icon;
@end

