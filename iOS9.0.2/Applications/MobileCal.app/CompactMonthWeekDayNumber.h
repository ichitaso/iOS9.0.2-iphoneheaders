/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileCal/MobileCal-Structs.h>
@class CALayer, EKCalendarDate, NSCalendar, CompactMonthWeekTodayCircle;

@interface CompactMonthWeekDayNumber : NSObject {

	CALayer* _layer;
	float _offsetX;
	EKCalendarDate* _calendarDate;
	NSCalendar* _calendar;
	CompactMonthWeekTodayCircle* _attachedTodayCircle;
	CGRect _lastKnownTappableZone;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                                  //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) char representsActualDate; 
@property (nonatomic,retain) NSCalendar * calendar;                                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) float offsetX; 
@property (nonatomic,retain) CompactMonthWeekTodayCircle * attachedTodayCircle;              //@synthesize attachedTodayCircle=_attachedTodayCircle - In the implementation block
@property (assign,nonatomic) CGRect lastKnownTappableZone;                                   //@synthesize lastKnownTappableZone=_lastKnownTappableZone - In the implementation block
+(float)baselineOffsetFromTopOfLayer;
+(id)_standardLabel;
+(id)_dayNumberFont;
-(CompactMonthWeekTodayCircle *)attachedTodayCircle;
-(void)setLastKnownTappableZone:(CGRect)arg1 ;
-(CGRect)lastKnownTappableZone;
-(char)representsActualDate;
-(void)setAttachedTodayCircle:(CompactMonthWeekTodayCircle *)arg1 ;
-(char)_calendarDateIsOnWeekend;
-(id)_weekendImageForDayNumberString:(id)arg1 ;
-(id)_weekdayImageForDayNumberString:(id)arg1 ;
-(id)_generateImageWithString:(id)arg1 color:(id)arg2 ;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)calendarDate;
-(CALayer *)layer;
-(id)init;
-(id)description;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(float)offsetX;
@end

