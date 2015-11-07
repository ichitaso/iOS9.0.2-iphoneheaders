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

@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {

	long long _size;
	NSData* _signature;
	char _lastSection;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char hasLastSection; 
@property (assign,nonatomic) char lastSection;                 //@synthesize lastSection=_lastSection - In the implementation block
-(long long)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSignature:(NSData *)arg1 ;
-(char)hasSignature;
-(void)setLastSection:(char)arg1 ;
-(void)setHasLastSection:(char)arg1 ;
-(char)hasLastSection;
-(NSData *)signature;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSize:(char)arg1 ;
-(char)hasSize;
-(char)readFrom:(id)arg1 ;
-(char)lastSection;
@end
