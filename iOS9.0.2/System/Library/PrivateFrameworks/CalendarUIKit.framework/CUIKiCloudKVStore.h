/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSCopyingNSCoding;
@class NSDate;

@interface CUIKiCloudKVStore : NSObject {

	char _hasConnectedToCarBluetooth;
	NSDate* _lastCarConnectionDate;
	id<NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;

}

@property (assign,nonatomic) char hasConnectedToCarBluetooth;                            //@synthesize hasConnectedToCarBluetooth=_hasConnectedToCarBluetooth - In the implementation block
@property (nonatomic,retain) NSDate * lastCarConnectionDate;                             //@synthesize lastCarConnectionDate=_lastCarConnectionDate - In the implementation block
@property (retain) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken;              //@synthesize ubiquityIdentityToken=_ubiquityIdentityToken - In the implementation block
+(char)_haveiCloudKVStoreEntitlement;
+(id)sharediCloudKVStore;
-(void)dealloc;
-(id)init;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(void)_storeDidChange:(id)arg1 ;
-(void)_identityChanged:(id)arg1 ;
-(void)setUbiquityIdentityToken:(id<NSObject><NSCopying><NSCoding>)arg1 ;
-(char)_canAccessiCloudKVStore;
-(void)setHasConnectedToCarBluetooth:(char)arg1 ;
-(void)setLastCarConnectionDate:(NSDate *)arg1 ;
-(char)hasConnectedToCarBluetooth;
-(NSDate *)lastCarConnectionDate;
@end

