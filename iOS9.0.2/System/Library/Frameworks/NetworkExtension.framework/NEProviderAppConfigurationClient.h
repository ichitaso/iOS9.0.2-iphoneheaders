/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NEUtilConfigurationClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol NEConfigurationCommandHandling;
@class NSXPCListener, NEVPNManager, NSMutableArray, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {

	char _isServerMode;
	NSXPCListener* _listener;
	NEVPNManager* _currentManager;
	NSMutableArray* _createdManagers;
	NSMutableArray* _currentManagers;
	NSString* _targetAppBundleID;
	NSXPCConnection* _connection;
	id<NEConfigurationCommandHandling> _remoteObject;

}

@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (readonly) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (retain) NEVPNManager * currentManager;                                //@synthesize currentManager=_currentManager - In the implementation block
@property (retain) NSMutableArray * createdManagers;                             //@synthesize createdManagers=_createdManagers - In the implementation block
@property (retain) NSMutableArray * currentManagers;                             //@synthesize currentManagers=_currentManagers - In the implementation block
@property (retain) NSString * targetAppBundleID;                                 //@synthesize targetAppBundleID=_targetAppBundleID - In the implementation block
@property (assign) char isServerMode;                                            //@synthesize isServerMode=_isServerMode - In the implementation block
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (retain) id<NEConfigurationCommandHandling> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)onDemandRules;
-(void)setOnDemandEnabled:(char)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initForServerMode;
-(void)setOnDemandRules:(id)arg1 ;
-(void)handleConfigChanged:(id)arg1 ;
-(void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCurrentManager:(NEVPNManager *)arg1 ;
-(void)setCurrentManagers:(NSMutableArray *)arg1 ;
-(void)setCreatedManagers:(NSMutableArray *)arg1 ;
-(NEVPNManager *)currentManager;
-(NSMutableArray *)createdManagers;
-(id)protocolForParameters:(id)arg1 ;
-(long)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id*)arg3 ;
-(long)deleteKeychainItemWithPersistentReference:(id)arg1 ;
-(NSMutableArray *)currentManagers;
-(void)loadAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isServerMode;
-(void)setRemoteObject:(id<NEConfigurationCommandHandling>)arg1 ;
-(id<NEConfigurationCommandHandling>)remoteObject;
-(NSString *)targetAppBundleID;
-(char)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(void)loadConfigurationWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientName:(id)arg1 ;
-(char)onDemandEnabled;
-(char)isAlwaysOn;
-(char)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(char)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(void)setTargetAppBundleID:(NSString *)arg1 ;
-(void)setIsServerMode:(char)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
@end
