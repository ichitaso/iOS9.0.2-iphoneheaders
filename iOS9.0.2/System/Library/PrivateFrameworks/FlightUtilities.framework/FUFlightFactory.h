/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FlightUtilities/FlightUtilities-Structs.h>
@interface FUFlightFactory : NSObject {

	xmlDoc* doc;
	xmlXPathContext* xpathContext;
	xmlXPathObject* xpathObj;

}
+(void)loadFlightWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)loadFlightsWithNumber:(unsigned)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)bestFlightForDate:(id)arg1 dateType:(int)arg2 fromFlights:(id)arg3 ;
+(id)flightWithMoreStepsFromFlights:(id)arg1 ;
+(void)loadFlightDataWithFlightNumber:(int)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)loadFlightDataWithFlightIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)parseFlightData:(id)arg1 ;
-(void)cleanParser;
-(id)parseAirlines:(xmlNode*)arg1 ;
-(id)parseAirports:(xmlNode*)arg1 ;
-(id)parseFlights:(xmlNode*)arg1 usingAirports:(id)arg2 airlines:(id)arg3 ;
@end

