/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSArray;

@interface VOTUISwipeOrderView : UIView {

	UILabel* _numberLabel;
	NSArray* _swipeFrames;

}

@property (nonatomic,retain) NSArray * swipeFrames;              //@synthesize swipeFrames=_swipeFrames - In the implementation block
-(void)setSwipeFrames:(NSArray *)arg1 ;
-(NSArray *)swipeFrames;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

