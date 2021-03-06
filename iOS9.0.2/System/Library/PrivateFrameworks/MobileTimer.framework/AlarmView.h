/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MTDateLabelObserver.h>

@class UIView, DigitalClockLabel, NSString, UILabel, UIFont, UISwitch, NSArray, NSDictionary;

@interface AlarmView : UIView <MTDateLabelObserver> {

	UIView* _singleStyleDetailContainer;
	id _contentSizeFontAdjustObserver;
	int _style;
	DigitalClockLabel* _timeLabel;
	NSString* _name;
	NSString* _repeatText;
	UILabel* _detailLabel;
	UILabel* _nameLabel;
	UILabel* _repeatLabel;
	UIFont* _nameFont;
	UIFont* _repeatFont;
	UILabel* _secondaryDesignatorLabel;
	UISwitch* _enabledSwitch;
	NSArray* _currentConstraints;

}

@property (assign,nonatomic) int style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) DigitalClockLabel * timeLabel;                   //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * repeatText;                               //@synthesize repeatText=_repeatText - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * repeatLabel;                           //@synthesize repeatLabel=_repeatLabel - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                                 //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,retain) UIFont * repeatFont;                               //@synthesize repeatFont=_repeatFont - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryDesignatorLabel;              //@synthesize secondaryDesignatorLabel=_secondaryDesignatorLabel - In the implementation block
@property (nonatomic,readonly) UISwitch * enabledSwitch;                        //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,readonly) NSDictionary * viewsByIdentifier; 
@property (nonatomic,retain) NSArray * currentConstraints;                      //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(UILabel *)nameLabel;
-(UILabel *)detailLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)updateConstraints;
-(DigitalClockLabel *)timeLabel;
-(NSDictionary *)viewsByIdentifier;
-(void)_loadFontsWithTextStyles;
-(void)updateSubviewVisibility;
-(void)tearDownContentSizeChangeObserver;
-(void)setRepeatText:(NSString *)arg1 ;
-(void)dateLabel:(id)arg1 timeDesignatorDidChange:(id)arg2 ;
-(void)setNameFont:(UIFont *)arg1 ;
-(void)setRepeatFont:(UIFont *)arg1 ;
-(void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
-(void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3 ;
-(NSString *)repeatText;
-(UILabel *)repeatLabel;
-(UIFont *)nameFont;
-(UIFont *)repeatFont;
-(UILabel *)secondaryDesignatorLabel;
-(UISwitch *)enabledSwitch;
@end

