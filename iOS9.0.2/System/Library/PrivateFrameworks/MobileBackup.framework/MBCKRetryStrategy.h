/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBRetryStrategy.h>

@class MBDebugContext;

@interface MBCKRetryStrategy : MBRetryStrategy {

	unsigned _consecutiveRetryCount;
	MBDebugContext* _debugContext;

}

@property (nonatomic,retain) MBDebugContext * debugContext;              //@synthesize debugContext=_debugContext - In the implementation block
+(char)isCKError:(id)arg1 withCode:(int)arg2 ;
+(char)isCKError:(id)arg1 ;
+(char)isCKError:(id)arg1 withCodes:(int)arg2 ;
-(id)initWithDebugContext:(id)arg1 ;
-(void)setDebugContext:(MBDebugContext *)arg1 ;
-(char)shouldRetryAfterError:(id)arg1 ;
-(char)canRetryAfterError:(id)arg1 ;
-(id)initWithDebugContext:(id)arg1 engine:(id)arg2 ;
-(void)setConsecutiveRetryCount:(unsigned)arg1 ;
-(unsigned)consecutiveRetryCount;
-(double)sleepIntervalAfterError:(id)arg1 ;
-(char)_shouldResetConsecutiveRetryCounter;
-(void)_incrementKey:(id)arg1 ;
-(char)_shouldForceRetry;
-(char)shouldRetryAfterError:(id)arg1 hard:(char)arg2 ;
-(char)canContinueAfterError:(id)arg1 ;
-(char)wouldRetry;
-(char)shouldContinueAfterError:(id)arg1 skippingDomain:(id)arg2 ;
-(void)reset;
-(id)initWithEngine:(id)arg1 ;
-(MBDebugContext *)debugContext;
@end
