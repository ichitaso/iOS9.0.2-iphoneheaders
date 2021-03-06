/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, NSObject, NSSet;

@interface WiFiScanner : NSObject {

	char _started;
	NSMutableSet* _devices;
	char _autoPoweredOn;
	NSObject*<OS_dispatch_source> _scanTimer;
	long _stopErr;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	CFArrayRef _scanChannels;
	char _scanActive;
	NSObject*<OS_dispatch_queue> _queue;
	LogCategory* _ucat;
	unsigned _scanFlags;
	/*^block*/id _handler;

}

@property (copy,readonly) NSSet * devices; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
@property (assign,nonatomic) LogCategory* logCategory;                                //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_start;
-(void)start;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_scanTimer;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stop:(long)arg1 ;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(LogCategory*)logCategory;
-(char)_isUnconfiguredIE:(id)arg1 ;
-(void)_scanProcessResults:(id)arg1 ;
-(void)_stop2;
-(void)setScanFlags:(unsigned)arg1 ;
-(unsigned)scanFlags;
-(NSSet *)devices;
@end

