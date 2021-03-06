/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIColor, NSString, NSAttributedString, UIView, UILabel;

@interface WorkoutCell : UITableViewCell {

	UIColor* _color;
	NSString* _title;
	NSAttributedString* _value;
	UIView* _topBorder;
	UILabel* _valueLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setTitle:(id)arg1 color:(id)arg2 ;
-(void)setValueText:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
@end

