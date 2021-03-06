/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSObject, NSUUID;

@interface NWNetworkAgentRegistration : NSObject {

	Class _networkAgentClass;
	NSObject*<NWNetworkAgent> _networkAgent;
	NSUUID* _registeredUUID;
	int _registrationSocket;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_semaphore> _readSemaphore;
	unsigned _waitingMessageID;
	unsigned _responseMessageID;
	unsigned _responseError;

}

@property (getter=isRegistered,readonly) char registered; 
@property (retain) Class networkAgentClass;                                     //@synthesize networkAgentClass=_networkAgentClass - In the implementation block
@property (retain) NSObject*<NWNetworkAgent> networkAgent;                      //@synthesize networkAgent=_networkAgent - In the implementation block
@property (retain) NSUUID * registeredUUID;                                     //@synthesize registeredUUID=_registeredUUID - In the implementation block
@property (assign) int registrationSocket;                                      //@synthesize registrationSocket=_registrationSocket - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> readSource;                    //@synthesize readSource=_readSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> readSemaphore;              //@synthesize readSemaphore=_readSemaphore - In the implementation block
@property (assign) unsigned waitingMessageID;                                   //@synthesize waitingMessageID=_waitingMessageID - In the implementation block
@property (assign) unsigned responseMessageID;                                  //@synthesize responseMessageID=_responseMessageID - In the implementation block
@property (assign) unsigned responseError;                                      //@synthesize responseError=_responseError - In the implementation block
+(char)addActiveAssertionToNetworkAgent:(id)arg1 ;
+(char)removeActiveAssertionFromNetworkAgent:(id)arg1 ;
+(id)sharedAssertionRegistration;
-(char)isRegistered;
-(unsigned)responseError;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setResponseError:(unsigned)arg1 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)updateNetworkAgent:(id)arg1 ;
-(int)registrationSocket;
-(void)setRegisteredUUID:(NSUUID *)arg1 ;
-(unsigned)waitingMessageID;
-(char)registerNetworkAgent:(id)arg1 ;
-(id)initWithNetworkAgentClass:(Class)arg1 ;
-(NSObject*<NWNetworkAgent>)networkAgent;
-(Class)networkAgentClass;
-(NSObject*<OS_dispatch_source>)readSource;
-(char)unregisterNetworkAgent;
-(NSObject*<OS_dispatch_semaphore>)readSemaphore;
-(void)setNetworkAgentClass:(Class)arg1 ;
-(void)setReadSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned)responseMessageID;
-(void)setRegistrationSocket:(int)arg1 ;
-(char)waitForMessageResponse;
-(void)setNetworkAgent:(NSObject*<NWNetworkAgent>)arg1 ;
-(char)addNetworkAgentToInterfaceNamed:(id)arg1 ;
-(void)setResponseMessageID:(unsigned)arg1 ;
-(NSUUID *)registeredUUID;
-(char)removeNetworkAgentFromInterfaceNamed:(id)arg1 ;
-(void)setWaitingMessageID:(unsigned)arg1 ;
@end

