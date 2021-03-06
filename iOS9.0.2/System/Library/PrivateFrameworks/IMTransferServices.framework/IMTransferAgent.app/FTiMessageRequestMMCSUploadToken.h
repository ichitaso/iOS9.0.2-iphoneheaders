/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferAgent.app/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSData;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {

	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;

}

@property (copy) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
@property (copy) NSNumber * length;                           //@synthesize length=_length - In the implementation block
@property (copy) NSString * responseAuthToken;                //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestURL;               //@synthesize responseRequestURL=_responseRequestURL - In the implementation block
@property (copy) NSString * responseRequestorID;              //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
-(NSString *)responseAuthToken;
-(NSString *)responseRequestURL;
-(NSString *)responseRequestorID;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(void)setResponseRequestURL:(NSString *)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(NSNumber *)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(int)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
@end

