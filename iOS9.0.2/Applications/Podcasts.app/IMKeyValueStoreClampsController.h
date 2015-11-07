/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSData;

@interface IMKeyValueStoreClampsController : NSObject <NSCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _transactionClamps;
	NSData* _pendingUserDefaultArchivedData;
	double _dsidCheckTimestamp;
	double _authenticationNeededTimestamp;
	double _userAcceptedSyncTimestamp;
	double _networkingBlockedUntil;
	double _backOffUntil;
	double _userCancelledSignInBackOffUntil;
	double _nextUserCancelBackOffInterval;

}

@property (nonatomic,retain) NSDictionary * transactionClamps;              //@synthesize transactionClamps=_transactionClamps - In the implementation block
@property (assign) double dsidCheckTimestamp;                               //@synthesize dsidCheckTimestamp=_dsidCheckTimestamp - In the implementation block
@property (assign) double authenticationNeededTimestamp;                    //@synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp - In the implementation block
@property (assign) double userAcceptedSyncTimestamp;                        //@synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp - In the implementation block
@property (assign) double networkingBlockedUntil;                           //@synthesize networkingBlockedUntil=_networkingBlockedUntil - In the implementation block
@property (assign) double backOffUntil;                                     //@synthesize backOffUntil=_backOffUntil - In the implementation block
@property (assign) double userCancelledSignInBackOffUntil;                  //@synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil - In the implementation block
@property (assign) double nextUserCancelBackOffInterval;                    //@synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval - In the implementation block
@property (retain) NSData * pendingUserDefaultArchivedData;                 //@synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData - In the implementation block
+(id)sharedClampsController;
-(char)_canScheduleTransactionBasedOnDSIDCheck:(id)arg1 error:(id*)arg2 ;
-(void)clearDSIDCheckTimestamp;
-(void)setDsidCheckTimestamp:(double)arg1 ;
-(double)dsidCheckTimestamp;
-(void)setDSIDCheckTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(void)accessTransactionClampsWithBlock:(/*^block*/id)arg1 ;
-(NSData *)pendingUserDefaultArchivedData;
-(void)setPendingUserDefaultArchivedData:(NSData *)arg1 ;
-(NSDictionary *)transactionClamps;
-(char)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id*)arg2 ;
-(char)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id*)arg2 ;
-(char)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id*)arg2 ;
-(char)_canScheduleTransactionBasedOnType:(id)arg1 error:(id*)arg2 ;
-(void)clearAuthenticationRequest;
-(void)clearBackOff;
-(void)clearNetworkingBlocked;
-(void)clearUserAcceptedSyncTimestamp;
-(void)clearUserCancelledSignIn;
-(void)saveToUserDefaults;
-(id)_keyForTransaction:(id)arg1 ;
-(double)_rightNow;
-(void)setAuthenticationNeededTimestamp:(double)arg1 ;
-(double)authenticationNeededTimestamp;
-(void)setUserAcceptedSyncTimestamp:(double)arg1 ;
-(double)userAcceptedSyncTimestamp;
-(void)setUserCancelledSignInBackOffUntil:(double)arg1 ;
-(void)setBackOffUntil:(double)arg1 ;
-(void)setNetworkingBlockedUntil:(double)arg1 ;
-(double)networkingBlockedUntil;
-(void)clearTimestampForTransaction:(id)arg1 ;
-(char)isNetworkingBlocked;
-(double)backOffUntil;
-(double)userCancelledSignInBackOffUntil;
-(char)canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setTimestampForTransaction:(id)arg1 ;
-(void)setAuthenticationRequest;
-(char)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setUserAcceptedSyncTimestamp;
-(char)hasUserRecentlyAcceptedSync;
-(void)setUserCancelledSignIn;
-(void)backOffForTimeInterval:(double)arg1 ;
-(void)setNetworkingBlocked;
-(void)setTransactionClamps:(NSDictionary *)arg1 ;
-(double)nextUserCancelBackOffInterval;
-(void)setNextUserCancelBackOffInterval:(double)arg1 ;
@end
