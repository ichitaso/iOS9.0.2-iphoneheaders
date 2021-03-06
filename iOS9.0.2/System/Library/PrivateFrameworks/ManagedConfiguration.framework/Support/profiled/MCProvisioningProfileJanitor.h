/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MCProvisioningProfileJanitor : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedJanitor;
-(void)updateMISTrust;
-(void)revalidateManagedApps;
-(void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateManagedApps:(char)arg2 ;
-(void)_enumerateManagedAppUPPs:(/*^block*/id)arg1 ;
-(id)earliestRequiredManagedAppValidationDate;
-(id)init;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

