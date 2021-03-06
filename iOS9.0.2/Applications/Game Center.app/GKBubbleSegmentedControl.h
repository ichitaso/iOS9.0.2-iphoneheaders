/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray;

@interface GKBubbleSegmentedControl : UIControl {

	char _layoutDueToSegmentChange;
	NSArray* _bubbleControls;
	float _overlap;
	int _selectedSegmentIndex;

}

@property (nonatomic,retain) NSArray * bubbleControls;                   //@synthesize bubbleControls=_bubbleControls - In the implementation block
@property (assign,nonatomic) float overlap;                              //@synthesize overlap=_overlap - In the implementation block
@property (assign,nonatomic) int selectedSegmentIndex;                   //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (assign,nonatomic) char layoutDueToSegmentChange;              //@synthesize layoutDueToSegmentChange=_layoutDueToSegmentChange - In the implementation block
-(void)didSelectBubble:(id)arg1 ;
-(void)setBubbleControls:(id)arg1 animated:(char)arg2 ;
-(void)setBubbleControls:(NSArray *)arg1 ;
-(char)layoutDueToSegmentChange;
-(void)setLayoutDueToSegmentChange:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(int)selectedSegmentIndex;
-(NSArray *)bubbleControls;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end

