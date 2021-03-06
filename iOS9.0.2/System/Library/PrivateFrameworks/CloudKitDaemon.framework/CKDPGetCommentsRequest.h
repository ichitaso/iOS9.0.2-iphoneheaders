/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPCommentedOnId, CKDPQuerySort, NSString;

@interface CKDPGetCommentsRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	CKDPCommentedOnId* _identifier;
	unsigned _limit;
	CKDPQuerySort* _orderBy;
	NSString* _path;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                 //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) char hasLimit; 
@property (assign,nonatomic) unsigned limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) char hasOrderBy; 
@property (nonatomic,retain) CKDPQuerySort * orderBy;                     //@synthesize orderBy=_orderBy - In the implementation block
@property (nonatomic,readonly) char hasPath; 
@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasLimit:(char)arg1 ;
-(char)hasLimit;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(char)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)setOrderBy:(CKDPQuerySort *)arg1 ;
-(char)hasOrderBy;
-(CKDPQuerySort *)orderBy;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasIdentifier;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(char)readFrom:(id)arg1 ;
-(char)hasPath;
@end

