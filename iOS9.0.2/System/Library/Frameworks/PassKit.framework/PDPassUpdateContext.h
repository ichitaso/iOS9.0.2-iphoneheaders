/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface PDPassUpdateContext : NSObject <NSSecureCoding> {

	NSString* _passUniqueIdentifier;
	NSString* _serialNumber;
	NSString* _authenticationToken;
	NSString* _lastModifiedTag;
	NSDate* _lastModifiedDate;
	int _lastModifiedSource;
	NSData* _manifestHash;

}

@property (nonatomic,retain) NSString * passUniqueIdentifier;              //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * authenticationToken;               //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,retain) NSString * lastModifiedTag;                   //@synthesize lastModifiedTag=_lastModifiedTag - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (assign,nonatomic) int lastModifiedSource;                       //@synthesize lastModifiedSource=_lastModifiedSource - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                        //@synthesize manifestHash=_manifestHash - In the implementation block
+(char)supportsSecureCoding;
-(void)setLastModifiedTag:(NSString *)arg1 ;
-(void)setLastModifiedSource:(int)arg1 ;
-(NSString *)lastModifiedTag;
-(int)lastModifiedSource;
-(NSDate *)lastModifiedDate;
-(NSData *)manifestHash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSString *)serialNumber;
@end

