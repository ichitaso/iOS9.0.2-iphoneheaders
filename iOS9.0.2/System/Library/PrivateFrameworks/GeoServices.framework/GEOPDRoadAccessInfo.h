/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {

	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
+(id)roadAccessInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(void)clearRoadAccessPoints;
-(void)addRoadAccessPoint:(id)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(unsigned)roadAccessPointsCount;
-(id)roadAccessPointAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

