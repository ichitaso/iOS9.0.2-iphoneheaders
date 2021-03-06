/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSDate, CKDOperation, NSOperationQueue, NSString, CKDClientProxy, CKDClientContext;

@interface CKDPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	char _isFinished;
	char _isExecuting;
	NSDate* _startDate;
	CKDOperation* _realOperation;
	NSOperationQueue* _targetOperationQueue;

}

@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,__weak,readonly) CKDClientProxy * proxy; 
@property (nonatomic,readonly) CKDClientContext * context; 
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) CKDOperation * realOperation;                         //@synthesize realOperation=_realOperation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * targetOperationQueue;              //@synthesize targetOperationQueue=_targetOperationQueue - In the implementation block
@property (assign,nonatomic) char isExecuting;                                       //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                        //@synthesize isFinished=_isFinished - In the implementation block
-(char)isConcurrent;
-(NSDate *)startDate;
-(void)cancel;
-(id)description;
-(CKDClientContext *)context;
-(void)start;
-(void)main;
-(CKDClientProxy *)proxy;
-(char)isFinished;
-(char)isExecuting;
-(void)setIsFinished:(char)arg1 ;
-(NSString *)sectionID;
-(NSString *)operationID;
-(id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)setIsExecuting:(char)arg1 ;
-(id)ckShortDescription;
-(CKDOperation *)realOperation;
-(NSOperationQueue *)targetOperationQueue;
-(void)setStartDate:(NSDate *)arg1 ;
@end

