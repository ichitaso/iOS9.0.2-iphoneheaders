/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPreviewAction, UILabel, UIImageView;

@interface _UIPreviewActionSheetItemView : UIView {

	char _selected;
	UIPreviewAction* _action;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,copy) UIPreviewAction * action;                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) char selected;                               //@synthesize selected=_selected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIPreviewAction *)action;
-(id)initWithFrame:(CGRect)arg1 action:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setAction:(UIPreviewAction *)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(char)selected;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateTitleFromAction;
-(void)_updateImageFromAction;
-(void)_updateConstraints;
@end

