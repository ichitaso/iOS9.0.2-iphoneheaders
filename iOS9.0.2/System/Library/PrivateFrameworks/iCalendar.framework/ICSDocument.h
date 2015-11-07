/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSCalendar;

@interface ICSDocument : NSObject {

	ICSCalendar* _calendar;

}
+(int)ICSChecksumVersionSpecifiedInOptions:(unsigned)arg1 ;
+(void)suppressParserSyntaxErrorLogging;
-(id)initWithData:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)calendar;
-(id)initWithCalendar:(id)arg1 ;
-(id)initWithICSString:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)ICSDataWithOptions:(unsigned)arg1 ;
-(id)ICSStringWithOptions:(unsigned)arg1 ;
-(char)validate:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)ICSChecksumStringForVersion:(int)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(id)ICSChecksumForVersion:(int)arg1 ;
@end
