/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SBBackdropContainerView : UIView {

	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain,readonly) UIView * contentView; 
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)_reallyInsertSubview:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)insertSubview:(id)arg1 atIndex:(int)arg2 ;
-(UIView *)contentView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
@end

