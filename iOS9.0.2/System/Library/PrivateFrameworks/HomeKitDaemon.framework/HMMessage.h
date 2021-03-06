/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID, NSDictionary;

@interface HMMessage : NSObject {

	char _remoteSource;
	char _internalMessage;
	char _entitledMessage;
	char _locationAuthorizedMessage;
	NSString* _name;
	NSUUID* _identifier;
	NSDictionary* _messagePayload;
	/*^block*/id _responseHandler;
	id _transport;

}

@property (getter=isAuthorizedForHomeDataAccess,nonatomic,readonly) char authorizedForHomeDataAccess; 
@property (getter=isEntitledForAPIAccess,nonatomic,readonly) char entitledForAPIAccess; 
@property (getter=isEntitledForSPIAccess,nonatomic,readonly) char entitledForSPIAccess; 
@property (getter=isAuthorizedForLocationAccess,nonatomic,readonly) char authorizedForLocationAccess; 
@property (getter=isEntitledForBackgroundMode,nonatomic,readonly) char entitledForBackgroundMode; 
@property (nonatomic,readonly) int sourcePid; 
@property (nonatomic,copy,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * companionAppBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * teamIdentifier; 
@property (nonatomic,copy,readonly) NSString * effectiveLocationBundleIdentifier; 
@property (nonatomic,readonly) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * messagePayload;                                                      //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,readonly) id responseHandler;                                                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,readonly) id transport;                                                                       //@synthesize transport=_transport - In the implementation block
@property (getter=isRemoteSource,nonatomic,readonly) char remoteSource;                                            //@synthesize remoteSource=_remoteSource - In the implementation block
@property (getter=isInternalMessage,nonatomic,readonly) char internalMessage;                                      //@synthesize internalMessage=_internalMessage - In the implementation block
@property (getter=isEntitledMessage,nonatomic,readonly) char entitledMessage;                                      //@synthesize entitledMessage=_entitledMessage - In the implementation block
@property (getter=isLocationAuthorizedMessage,nonatomic,readonly) char locationAuthorizedMessage;                  //@synthesize locationAuthorizedMessage=_locationAuthorizedMessage - In the implementation block
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(char)arg4 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(char)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(NSString *)name;
-(NSUUID *)identifier;
-(char)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)responseHandler;
-(id)dateForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(NSDictionary *)messagePayload;
-(char)isRemoteSource;
-(char)boolForKey:(id)arg1 keyPresent:(char*)arg2 ;
-(id)uuidFromRemoteMessageForKey:(id)arg1 ;
-(char)isAuthorizedForLocationAccess;
-(id)predicateForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(char)isEntitledForSPIAccess;
-(id)transport;
-(char)isInternalMessage;
-(char)isEntitledMessage;
-(char)isLocationAuthorizedMessage;
-(id)nullForKey:(id)arg1 ;
-(NSString *)effectiveLocationBundleIdentifier;
-(NSString *)applicationBundleIdentifier;
-(NSString *)companionAppBundleIdentifier;
-(NSString *)teamIdentifier;
-(char)isAuthorizedForHomeDataAccess;
-(char)isEntitledForAPIAccess;
-(char)isEntitledForBackgroundMode;
-(id)proxyConnection;
-(int)sourcePid;
-(char)_supportsFeature:(unsigned)arg1 forCapabilitiesKey:(id)arg2 ;
-(char)supportsRequiredFeature:(unsigned)arg1 ;
-(char)supportsRequestedFeature:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 remoteSource:(char)arg6 internalMessage:(char)arg7 entitledMessage:(char)arg8 locationAuthorizedMessage:(char)arg9 ;
-(id)errorForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)locationForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
@end

