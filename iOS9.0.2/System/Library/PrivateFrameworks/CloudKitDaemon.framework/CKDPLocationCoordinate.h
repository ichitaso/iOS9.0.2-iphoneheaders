/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK16 _has;

}

@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) char hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) char hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) char hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) char hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(double)latitude;
-(double)longitude;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(CKDPDate *)timestamp;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(char)hasTimestamp;
-(void)setHasSpeed:(char)arg1 ;
-(double)course;
-(char)hasAltitude;
-(void)setHasAltitude:(char)arg1 ;
-(char)hasCourse;
-(char)hasHorizontalAccuracy;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(void)setHasCourse:(char)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setCourse:(double)arg1 ;
-(char)hasVerticalAccuracy;
-(double)altitude;
-(void)setHasVerticalAccuracy:(char)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(char)hasLatitude;
-(void)setHasLatitude:(char)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(char)hasLongitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasSpeed;
@end

