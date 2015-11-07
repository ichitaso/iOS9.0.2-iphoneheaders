/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonIrisProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, CAMPersistenceController, CAMNebulaKeepAliveController, NSMutableDictionary, NSMutableArray, AVAssetExportSession, BKSApplicationStateMonitor, NSString;

@interface CAMNebulaIrisBackendController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonIrisProtocol> {

	char __IOWorkSuspended;
	char __shouldCheckMarkerFileForIOWorkSuspension;
	char __crashRecoveryNeeded;
	NSObject*<OS_dispatch_queue> __coordinationQueue;
	NSObject*<OS_dispatch_queue> __linkWorkQueue;
	CAMPersistenceController* __persistenceController;
	CAMNebulaKeepAliveController* __keepAliveController;
	int __notifyRegisterTokenSuspendIO;
	int __notifyRegisterTokenResumeIO;
	NSMutableDictionary* __pendingOrInFlightJobsByVideoURL;
	NSMutableArray* __pendingExportVideoJobs;
	NSMutableDictionary* __masterVideoInfoByURL;
	AVAssetExportSession* __activeExportSession;
	BKSApplicationStateMonitor* __applicationStateMonitor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coordinationQueue;                                                                                                                                                     //@synthesize _coordinationQueue=__coordinationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _linkWorkQueue;                                                                                                                                                         //@synthesize _linkWorkQueue=__linkWorkQueue - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                                                                                                                                                   //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMNebulaKeepAliveController * _keepAliveController;                                                                                                                                                 //@synthesize _keepAliveController=__keepAliveController - In the implementation block
@property (assign,setter=_coordinationQueue_setIOWorkSuspended:,getter=_coordinationQueue_isIOWorkSuspended,nonatomic) char _IOWorkSuspended; 
@property (nonatomic,readonly) int _notifyRegisterTokenSuspendIO;                                                                                                                                                                   //@synthesize _notifyRegisterTokenSuspendIO=__notifyRegisterTokenSuspendIO - In the implementation block
@property (nonatomic,readonly) int _notifyRegisterTokenResumeIO;                                                                                                                                                                    //@synthesize _notifyRegisterTokenResumeIO=__notifyRegisterTokenResumeIO - In the implementation block
@property (assign,setter=_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:,getter=_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension,nonatomic) char _shouldCheckMarkerFileForIOWorkSuspension;              //@synthesize _shouldCheckMarkerFileForIOWorkSuspension=__shouldCheckMarkerFileForIOWorkSuspension - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingOrInFlightJobsByVideoURL;                                                                                                                                              //@synthesize _pendingOrInFlightJobsByVideoURL=__pendingOrInFlightJobsByVideoURL - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingExportVideoJobs;                                                                                                                                                            //@synthesize _pendingExportVideoJobs=__pendingExportVideoJobs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _masterVideoInfoByURL;                                                                                                                                                         //@synthesize _masterVideoInfoByURL=__masterVideoInfoByURL - In the implementation block
@property (setter=_setActiveExportSession:,nonatomic,retain) AVAssetExportSession * _activeExportSession;                                                                                                                           //@synthesize _activeExportSession=__activeExportSession - In the implementation block
@property (assign,setter=_coordinationQueue_setCrashRecoveryNeeded:,getter=_coordinationQueue_isCrashRecoveryNeeded,nonatomic) char _crashRecoveryNeeded;                                                                           //@synthesize _crashRecoveryNeeded=__crashRecoveryNeeded - In the implementation block
@property (nonatomic,readonly) BKSApplicationStateMonitor * _applicationStateMonitor;                                                                                                                                               //@synthesize _applicationStateMonitor=__applicationStateMonitor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(CAMNebulaKeepAliveController *)_keepAliveController;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)enqueueIrisVideoJobs:(id)arg1 ;
-(void)performIrisCrashRecovery;
-(NSObject*<OS_dispatch_queue>)_coordinationQueue;
-(void)_coordinationQueue_setIOWorkSuspended:(char)arg1 ;
-(void)_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:(char)arg1 ;
-(void)_coordinationQueue_setCrashRecoveryNeeded:(char)arg1 ;
-(id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2 ;
-(void)_coordinationQueue_destroyApplicationStateMonitor;
-(void)_dispatchToQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_dispatchToQueue:(id)arg1 afterDelay:(double)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_linkWorkQueue;
-(void)_coordinationQueue_createJobsForCrashRecoveryIfNeeded;
-(void)_dispatchToCoordinationQueueWithBlock:(/*^block*/id)arg1 ;
-(void)performIrisCrashRecoveryForceFileSystemCheck:(char)arg1 ;
-(char)_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension;
-(AVAssetExportSession *)_activeExportSession;
-(void)_coordinationQueue_setupCameraProcessingMonitoringIfNecessary;
-(void)_coordinationQueue_enqueuePendingExportJobIfPossible;
-(char)_removeItemAtURL:(id)arg1 maxAttempts:(int)arg2 ;
-(void)_coordinationQueue_enqueueJobs:(id)arg1 ;
-(void)_coordinationQueue_enqueueAndTrackNewJob:(id)arg1 ;
-(NSMutableDictionary *)_pendingOrInFlightJobsByVideoURL;
-(NSMutableDictionary *)_masterVideoInfoByURL;
-(NSMutableArray *)_pendingExportVideoJobs;
-(void)_linkWorkQueue_linkAndPersistSelfContainedVideo:(id)arg1 ;
-(void)_dispatchToLinkWorkQueueWithBlock:(/*^block*/id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(void)_coordinationQueue_didPermanentlyFinishJob:(id)arg1 ;
-(unsigned)_coordinationQueue_failureCountForVideoURL:(id)arg1 ;
-(void)_coordinationQueue_setFailureCount:(unsigned)arg1 forVideoURL:(id)arg2 ;
-(void)_dispatchToLinkWorkQueueAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)_coordinationQueue_isIOWorkSuspended;
-(void)_setActiveExportSession:(id)arg1 ;
-(void)_coordinationQueue_didCompleteExportJob:(id)arg1 ;
-(char)_coordinationQueue_consolidateMasterVideoIfNecessary:(id)arg1 ;
-(void)_coordinationQueue_permanentlyFailAllJobsForMasterVideoURL:(id)arg1 ;
-(void)_dispatchToCoordinationQueueAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)_coordinationQueue_isCrashRecoveryNeeded;
-(id)_videoJobFromURL:(id)arg1 shouldCheckForMasterVideoURL:(char)arg2 ;
-(char)_extractIrisPropertiesFromAVAsset:(id)arg1 shouldCheckForMasterVideoURL:(char)arg2 masterVideoURL:(id*)arg3 stillImageDisplayTime:(SCD_Struct_CA2*)arg4 irisIdentifier:(id*)arg5 ;
-(char)_removeItemAtURL:(id)arg1 ;
-(void)_dispatchToMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)handleClientConnection:(id)arg1 ;
-(void)handleClientDisconnection;
-(int)_notifyRegisterTokenSuspendIO;
-(int)_notifyRegisterTokenResumeIO;
-(BKSApplicationStateMonitor *)_applicationStateMonitor;
@end
