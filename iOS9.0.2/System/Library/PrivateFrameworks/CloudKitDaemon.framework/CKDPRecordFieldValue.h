/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAsset, NSData, CKDPDate, NSMutableArray, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference, NSString;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _signedValue;
	CKDPAsset* _assetValue;
	NSData* _bytesValue;
	CKDPDate* _dateValue;
	NSMutableArray* _listValues;
	CKDPLocationCoordinate* _locationValue;
	CKDPPackage* _packageValue;
	CKDPRecordReference* _referenceValue;
	NSString* _stringValue;
	int _type;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                                 //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) char hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                               //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                  //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) char hasDateValue; 
@property (nonatomic,retain) CKDPDate * dateValue;                                //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) char hasLocationValue; 
@property (nonatomic,retain) CKDPLocationCoordinate * locationValue;              //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,readonly) char hasReferenceValue; 
@property (nonatomic,retain) CKDPRecordReference * referenceValue;                //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,readonly) char hasAssetValue; 
@property (nonatomic,retain) CKDPAsset * assetValue;                              //@synthesize assetValue=_assetValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;                         //@synthesize listValues=_listValues - In the implementation block
@property (nonatomic,readonly) char hasPackageValue; 
@property (nonatomic,retain) CKDPPackage * packageValue;                          //@synthesize packageValue=_packageValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addListValue:(id)arg1 ;
-(void)setLocationValue:(CKDPLocationCoordinate *)arg1 ;
-(void)setReferenceValue:(CKDPRecordReference *)arg1 ;
-(void)setAssetValue:(CKDPAsset *)arg1 ;
-(unsigned)listValuesCount;
-(void)clearListValues;
-(id)listValueAtIndex:(unsigned)arg1 ;
-(void)setPackageValue:(CKDPPackage *)arg1 ;
-(void)setSignedValue:(long long)arg1 ;
-(void)setHasSignedValue:(char)arg1 ;
-(char)hasSignedValue;
-(char)hasLocationValue;
-(char)hasReferenceValue;
-(char)hasAssetValue;
-(char)hasPackageValue;
-(long long)signedValue;
-(CKDPLocationCoordinate *)locationValue;
-(CKDPRecordReference *)referenceValue;
-(CKDPAsset *)assetValue;
-(NSMutableArray *)listValues;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(CKDPPackage *)packageValue;
-(id)_prettyDictionaryRepresentation;
-(id)_prettyRepresentationFromObject:(id)arg1 ;
-(id)_descriptionForType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasStringValue;
-(void)setDateValue:(CKDPDate *)arg1 ;
-(char)hasDateValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(char)hasBytesValue;
-(NSData *)bytesValue;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
-(CKDPDate *)dateValue;
@end

