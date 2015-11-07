/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRWorkManagedObject.h>

@class NSProgress;

@interface ODRAssetPackDownloadsWork : ODRWorkManagedObject {

	NSProgress* _progress;
	char _isCancelled;

}
+(id)initiateDownloadOfAssetPack:(id)arg1 forClientAppID:(id)arg2 priority:(double)arg3 isDiscretionary:(char)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)startWithProgress:(id)arg1 initialDownloadsCompletionHandler:(/*^block*/id)arg2 prioritiziedDownloadsCompletionHandler:(/*^block*/id)arg3 ;
-(void)markAsCompleted;
-(void)cancel;
-(void)start;
-(char)isCancelled;
@end
