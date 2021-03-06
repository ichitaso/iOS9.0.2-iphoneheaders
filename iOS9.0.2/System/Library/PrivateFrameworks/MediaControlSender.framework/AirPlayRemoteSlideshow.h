/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;
@class NSObject, MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _userQueue;
	char _started;
	double _startTime;

}

@property (assign,nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPassword:(id)arg1 ;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureEventHandler;
@end

