/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _network;
	unsigned _type;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * network;                       //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
+(char)supportsSecureCoding;
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(char)arg2 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)network;
-(void)setNetwork:(NSString *)arg1 ;
@end
