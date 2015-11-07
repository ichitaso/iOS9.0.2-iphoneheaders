/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {

	unsigned _estimatedChangeCount;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY6 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                          //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) char hasEstimatedChangeCount; 
@property (assign,nonatomic) unsigned estimatedChangeCount;              //@synthesize estimatedChangeCount=_estimatedChangeCount - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(void)setEstimatedChangeCount:(unsigned)arg1 ;
-(void)setHasEstimatedChangeCount:(char)arg1 ;
-(char)hasEstimatedChangeCount;
-(unsigned)estimatedChangeCount;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end
