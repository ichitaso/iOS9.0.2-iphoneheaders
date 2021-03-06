/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitStop, GEOTransitTransfer, GEOTransitSchedule, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {

	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	unsigned _expectedTime;
	char _isArrivalUncertain;
	GEOTransitTransfer* _transitTransfer;
	GEOTransitSchedule* _transitSchedule;
	GEOTransitEnterExitInfo* _enterExitInfo;
	GEOPBTransitAccessPoint* _accessPoint;

}

@property (nonatomic,readonly) GEOPBTransitAccessPoint * accessPoint;              //@synthesize accessPoint=_accessPoint - In the implementation block
@property (nonatomic,readonly) unsigned expectedTime;                              //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) GEOTransitTransfer * transitTransfer;               //@synthesize transitTransfer=_transitTransfer - In the implementation block
@property (nonatomic,readonly) GEOTransitSchedule * transitSchedule;               //@synthesize transitSchedule=_transitSchedule - In the implementation block
@property (nonatomic,readonly) char isArrivalUncertain;                            //@synthesize isArrivalUncertain=_isArrivalUncertain - In the implementation block
@property (nonatomic,readonly) NSString * exitSign; 
@property (nonatomic,readonly) char displayStop; 
@property (nonatomic,readonly) char hasDisplayStop; 
-(void)dealloc;
-(unsigned)expectedTime;
-(id)originStop;
-(SCD_Struct_GE16)startGeoCoordinate;
-(SCD_Struct_GE16)endGeoCoordinate;
-(id)destinationStop;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(NSString *)exitSign;
-(GEOPBTransitAccessPoint *)accessPoint;
-(char)displayStop;
-(GEOTransitSchedule *)transitSchedule;
-(char)hasDisplayStop;
-(GEOTransitTransfer *)transitTransfer;
-(char)isArrivalUncertain;
@end

