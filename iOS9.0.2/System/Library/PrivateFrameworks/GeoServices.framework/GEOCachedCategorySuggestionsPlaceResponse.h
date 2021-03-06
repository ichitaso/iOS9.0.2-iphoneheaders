/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPDPlaceResponse;

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _countryCode;
	NSString* _language;
	GEOPDPlaceResponse* _response;
	NSString* _sourceURL;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                       //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                        //@synthesize language=_language - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDPlaceResponse *)response;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(char)hasCountryCode;
-(void)setSourceURL:(NSString *)arg1 ;
-(char)hasSourceURL;
-(NSString *)sourceURL;
-(char)hasResponse;
-(void)setResponse:(GEOPDPlaceResponse *)arg1 ;
-(char)hasLanguage;
-(char)readFrom:(id)arg1 ;
@end

