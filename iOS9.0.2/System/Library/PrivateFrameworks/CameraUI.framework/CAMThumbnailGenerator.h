/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CameraUI/CameraUI-Structs.h>
@class NSObject, NSMapTable;

@interface CAMThumbnailGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;
	OpaqueVTPixelTransferSessionRef __generationQueuePixelTransferSession;
	NSMapTable* __generationQueueRotationSessionsMapTable;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;                                     //@synthesize _generationQueue=__generationQueue - In the implementation block
@property (nonatomic,readonly) OpaqueVTPixelTransferSessionRef _generationQueuePixelTransferSession;              //@synthesize _generationQueuePixelTransferSession=__generationQueuePixelTransferSession - In the implementation block
@property (nonatomic,readonly) NSMapTable * _generationQueueRotationSessionsMapTable;                             //@synthesize _generationQueueRotationSessionsMapTable=__generationQueueRotationSessionsMapTable - In the implementation block
-(void)dealloc;
-(id)init;
-(id)newJPEGDataOfFormat:(int)arg1 inOrientation:(int)arg2 usingSurface:(void*)arg3 ;
-(id)newJPEGDataInOrientation:(int)arg1 usingSurface:(void*)arg2 ;
-(CGImageRef)newBGRAImageOfFormat:(int)arg1 inOrientation:(int)arg2 usingSurface:(void*)arg3 ;
-(OpaqueVTPixelTransferSessionRef)_generationQueuePixelTransferSession;
-(NSMapTable *)_generationQueueRotationSessionsMapTable;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(void*)_newThumbnailOfFormat:(int)arg1 inOrientation:(int)arg2 withPixelFormat:(unsigned long)arg3 usingSurface:(void*)arg4 ;
-(void*)_newRotatedSurface:(void*)arg1 withOrientation:(int)arg2 ;
@end

