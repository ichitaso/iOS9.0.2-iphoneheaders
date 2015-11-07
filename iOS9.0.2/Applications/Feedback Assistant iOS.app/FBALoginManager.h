/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBALoginManagerDelegate;
@class FBASeedPortalAPI, NSMutableArray, NSLock;

@interface FBALoginManager : NSObject {

	char _loginPending;
	unsigned _loginState;
	FBASeedPortalAPI* _api;
	id<FBALoginManagerDelegate> _delegate;
	NSMutableArray* _postLoginTaskQueue;
	NSLock* _loginStateLock;
	NSLock* _taskQueueLock;

}

@property (assign) char loginPending;                                 //@synthesize loginPending=_loginPending - In the implementation block
@property (assign) unsigned loginState;                               //@synthesize loginState=_loginState - In the implementation block
@property (retain) FBASeedPortalAPI * api;                            //@synthesize api=_api - In the implementation block
@property (__weak) id<FBALoginManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * postLoginTaskQueue;               //@synthesize postLoginTaskQueue=_postLoginTaskQueue - In the implementation block
@property (retain) NSLock * loginStateLock;                           //@synthesize loginStateLock=_loginStateLock - In the implementation block
@property (retain) NSLock * taskQueueLock;                            //@synthesize taskQueueLock=_taskQueueLock - In the implementation block
-(FBASeedPortalAPI *)api;
-(unsigned)loginState;
-(void)runAfterLogin:(/*^block*/id)arg1 ;
-(void)setApi:(FBASeedPortalAPI *)arg1 ;
-(void)loginWithUsername:(id)arg1 DSToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)backgroundStartupWithCompletion:(/*^block*/id)arg1 ;
-(char)loginPending;
-(void)interactiveStartupWithCompletion:(/*^block*/id)arg1 ;
-(void)logOut;
-(void)sessionDidBecomeInvalid:(id)arg1 ;
-(NSLock *)loginStateLock;
-(NSLock *)taskQueueLock;
-(NSMutableArray *)postLoginTaskQueue;
-(void)setLoginState:(unsigned)arg1 ;
-(void)setLoginPending:(char)arg1 ;
-(void)_drainLoginTaskQueue;
-(void)autoLoginWithCompletion:(/*^block*/id)arg1 ;
-(char)_errorIncludesOutdatedVersion:(id)arg1 ;
-(char)_errorIncludesNotAParticipant:(id)arg1 ;
-(void)setPostLoginTaskQueue:(NSMutableArray *)arg1 ;
-(void)setLoginStateLock:(NSLock *)arg1 ;
-(void)setTaskQueueLock:(NSLock *)arg1 ;
-(void)setDelegate:(id<FBALoginManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBALoginManagerDelegate>)delegate;
-(id)initWithAPI:(id)arg1 ;
@end
