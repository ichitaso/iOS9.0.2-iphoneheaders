/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView;

@interface HourlyForecastCell : UICollectionViewCell {

	char _hasBoldTime;
	NSString* _detail;
	UIImageView* _timeImageView;
	UIImageView* _detailImageView;
	UIImageView* _percentChanceImageView;
	UIImageView* _conditionImageView;
	NSString* _time;

}

@property (readonly) NSString * detail;                                         //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain) UIImageView * timeImageView;                       //@synthesize timeImageView=_timeImageView - In the implementation block
@property (nonatomic,retain) UIImageView * detailImageView;                     //@synthesize detailImageView=_detailImageView - In the implementation block
@property (nonatomic,retain) UIImageView * percentChanceImageView;              //@synthesize percentChanceImageView=_percentChanceImageView - In the implementation block
@property (nonatomic,retain) UIImageView * conditionImageView;                  //@synthesize conditionImageView=_conditionImageView - In the implementation block
@property (nonatomic,copy) NSString * time;                                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) char hasBoldTime;                                  //@synthesize hasBoldTime=_hasBoldTime - In the implementation block
+(void)resetHourlyForecastCellSize;
+(CGSize)size;
-(void)setPrecipitation:(float)arg1 ;
-(void)setDetail:(id)arg1 bold:(char)arg2 ;
-(void)clearCellContent;
-(UIImageView *)timeImageView;
-(void)setTimeImageView:(UIImageView *)arg1 ;
-(UIImageView *)percentChanceImageView;
-(void)setPercentChanceImageView:(UIImageView *)arg1 ;
-(UIImageView *)conditionImageView;
-(void)setConditionImageView:(UIImageView *)arg1 ;
-(char)hasBoldTime;
-(void)setHasBoldTime:(char)arg1 ;
-(NSString *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(UIImageView *)detailImageView;
-(void)setDetailImageView:(UIImageView *)arg1 ;
@end

