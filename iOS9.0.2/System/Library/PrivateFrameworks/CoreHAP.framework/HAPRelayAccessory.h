/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>
#import <libobjc.A.dylib/HAPRelayActivationClientDelegate.h>
#import <libobjc.A.dylib/HAPRelayPairingClientDelegate.h>

@class HAPRelayActivationClient, HAPRelayPairingClient, HAPCharacteristic, NSString;

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate> {

	char _relayEnabled;
	HAPRelayActivationClient* _relayActivationClient;
	HAPRelayPairingClient* _relayPairingClient;
	unsigned _relayState;
	HAPCharacteristic* _relayControlPointCharacteristic;
	HAPCharacteristic* _relayEnabledCharacteristic;
	NSString* _relayAccessoryIdentifier;

}

@property (assign,getter=isRelayEnabled,nonatomic) char relayEnabled;                          //@synthesize relayEnabled=_relayEnabled - In the implementation block
@property (nonatomic,readonly) unsigned relayState;                                            //@synthesize relayState=_relayState - In the implementation block
@property (nonatomic,readonly) HAPRelayActivationClient * relayActivationClient;               //@synthesize relayActivationClient=_relayActivationClient - In the implementation block
@property (nonatomic,readonly) HAPRelayPairingClient * relayPairingClient;                     //@synthesize relayPairingClient=_relayPairingClient - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * relayControlPointCharacteristic;              //@synthesize relayControlPointCharacteristic=_relayControlPointCharacteristic - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * relayEnabledCharacteristic;                   //@synthesize relayEnabledCharacteristic=_relayEnabledCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * relayAccessoryIdentifier;                              //@synthesize relayAccessoryIdentifier=_relayAccessoryIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredRelayServiceCharacteristics;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(char)_parseServices;
-(HAPCharacteristic *)relayControlPointCharacteristic;
-(void)_updateRelayEnabled:(char)arg1 ;
-(HAPCharacteristic *)relayEnabledCharacteristic;
-(unsigned)_relayState;
-(id)_relayActivationClient;
-(void)_stopRelayActivationWithError:(id)arg1 ;
-(void)_setRelayActivationClient:(id)arg1 ;
-(void)_stopRelayPairingWithError:(id)arg1 ;
-(void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRelayActivationChallenge:(id)arg1 ;
-(void)_handleRelayActivationCertificate:(id)arg1 ;
-(id)_relayPairingClient;
-(void)_setRelayPairingClient:(id)arg1 ;
-(void)_handleRelayPairingIdentifierRequest;
-(void)setRelayAccessoryIdentifier:(NSString *)arg1 ;
-(NSString *)relayAccessoryIdentifier;
-(void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1 ;
-(void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(char)_parseRelayService:(id)arg1 ;
-(void)setRelayControlPointCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)_setRelayState:(unsigned)arg1 ;
-(void)setRelayEnabledCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPRelayActivationClient *)relayActivationClient;
-(HAPRelayPairingClient *)relayPairingClient;
-(char)supportsRelay;
-(void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2 ;
-(void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2 ;
-(void)_setRelayEnabled:(char)arg1 ;
-(void)setRelayEnabled:(char)arg1 ;
-(void)startRelayActivationWithActivationClient:(id)arg1 ;
-(void)startRelayPairingWithPairingClient:(id)arg1 ;
-(void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(char)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned)relayState;
-(char)isRelayEnabled;
-(void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2 ;
-(void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3 ;
@end

