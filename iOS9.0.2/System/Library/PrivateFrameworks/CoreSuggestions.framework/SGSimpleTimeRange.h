/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {

	double _start;
	double _end;
	char _floating;
	int _startUTCOffsetSeconds;
	int _endUTCOffsetSeconds;

}

@property (nonatomic,readonly) double start;                                 //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double end;                                   //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) int startUTCOffsetSeconds;                    //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (nonatomic,readonly) int endUTCOffsetSeconds;                      //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (getter=isFloating,nonatomic,readonly) char floating;              //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone; 
@property (nonatomic,readonly) NSTimeZone * endTimeZone; 
+(char)supportsSecureCoding;
+(id)dateFromGregorianComponents:(id)arg1 ;
+(id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3 ;
+(id)utcRangeWithStart:(double)arg1 end:(double)arg2 ;
+(char)hasYearMonthDayComponents:(id)arg1 ;
+(double)fromFloatingTime:(double)arg1 ;
+(id)floatingRangeWithLocalStart:(double)arg1 end:(double)arg2 ;
+(id)utcRangeWithStart:(double)arg1 duration:(double)arg2 ;
+(char)isAllDayComponents:(id)arg1 ;
+(id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3 ;
+(double)toFloatingTime:(double)arg1 ;
+(id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 ;
+(id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2 ;
+(id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)floatingRangeWithUTCStart:(double)arg1 end:(double)arg2 ;
+(id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4 ;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)end;
-(id)stableStringRepresentation;
-(id)initWithStart:(double)arg1 startUTCOffsetSeconds:(int)arg2 end:(double)arg3 endUTCOffsetSeconds:(int)arg4 ;
-(id)initUTCFloatingWithStart:(double)arg1 end:(double)arg2 ;
-(char)isEqualToSimpleTimeRange:(id)arg1 ;
-(int)startUTCOffsetSeconds;
-(int)endUTCOffsetSeconds;
-(char)isValidAllDayRange;
-(id)absoluteRange;
-(char)isFloating;
@end
