/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol AlarmActiveDelegate;
@class Alarm, NSCalendar, NSDate, MTDateLabel, UIView, NSArray, UILabel, UISwitch, _UIContentUnavailableView;

@interface AlarmDetailView : UIView {

	Alarm* _alarm;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	MTDateLabel* _timeLabel;
	UIView* _infoContainerView;
	NSArray* _infoContainerViewConstraints;
	UILabel* _titleLabel;
	UILabel* _repeatLabel;
	UISwitch* _enabledSwitch;
	UIView* _keylineView;
	_UIContentUnavailableView* _noAlarmsView;
	id<AlarmActiveDelegate> _delegate;
	NSDate* _time;

}

@property (nonatomic,retain) Alarm * alarm;                                              //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic,__weak) id<AlarmActiveDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isShowingNoAlarms,nonatomic) char showingNoAlarms; 
@property (nonatomic,retain) NSDate * time;                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSArray * infoContainerViewConstraints;                     //@synthesize infoContainerViewConstraints=_infoContainerViewConstraints - In the implementation block
+(id)colorForBackground;
-(void)handleSignificantTimeChange:(id)arg1 ;
-(void)refreshUIAnimated:(char)arg1 ;
-(void)setShowingNoAlarms:(char)arg1 ;
-(void)handleEnabledChanged:(id)arg1 ;
-(void)configureAutolayout;
-(char)isShowingNoAlarms;
-(NSArray *)infoContainerViewConstraints;
-(void)setInfoContainerViewConstraints:(NSArray *)arg1 ;
-(void)updateConstraintsForInfoContainerView;
-(void)refreshTimeView;
-(float)defaultHeightForInterfaceOrientation:(int)arg1 ;
-(void)setAlarm:(Alarm *)arg1 ;
-(Alarm *)alarm;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AlarmActiveDelegate>)arg1 ;
-(id<AlarmActiveDelegate>)delegate;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
@end
