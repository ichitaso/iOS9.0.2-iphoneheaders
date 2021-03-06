/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	SCD_Struct_GE80* _geoIds;
	int _geoType;
	NSString* _matchedToken;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSString * matchedToken;                   //@synthesize matchedToken=_matchedToken - In the implementation block
@property (assign,nonatomic) char hasGeoType; 
@property (assign,nonatomic) int geoType;                               //@synthesize geoType=_geoType - In the implementation block
@property (nonatomic,readonly) unsigned geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearGeoIds;
-(void)addGeoId:(unsigned long long)arg1 ;
-(unsigned long long*)geoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned)arg2 ;
-(unsigned long long)geoIdAtIndex:(unsigned)arg1 ;
-(unsigned)geoIdsCount;
-(char)hasGeoType;
-(void)setHasGeoType:(char)arg1 ;
-(NSString *)matchedToken;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(int)geoType;
-(char)readFrom:(id)arg1 ;
@end

