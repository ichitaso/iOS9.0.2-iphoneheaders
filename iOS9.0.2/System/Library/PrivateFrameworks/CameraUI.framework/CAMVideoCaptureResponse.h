/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSURL, NSDate, UIImage, NSDictionary;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	NSString* _persistenceUUID;
	NSURL* _localPersistenceURL;
	NSDate* _captureDate;
	int _reason;
	float _videoZoomFactor;
	UIImage* _imageWellImage;
	UIImage* _previewImage;
	NSString* _stillPersistenceUUID;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localPersistenceURL;                                     //@synthesize localPersistenceURL=_localPersistenceURL - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) int reason;                                                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) float videoZoomFactor;                                                //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                                 //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned numberOfRepresentedAssets; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) char expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA2 irisStillDisplayTime; 
-(unsigned)mediaType;
-(NSString *)burstIdentifier;
-(unsigned)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(NSString *)description;
-(SCD_Struct_CA2)duration;
-(NSString *)uuid;
-(UIImage *)placeholderImage;
-(int)reason;
-(NSDictionary *)stillImageMetadata;
-(char)isExpectingPairedVideo;
-(SCD_Struct_CA2)irisStillDisplayTime;
-(NSString *)persistenceUUID;
-(SCD_Struct_CA2)stillDisplayTime;
-(UIImage *)imageWellImage;
-(float)videoZoomFactor;
-(NSURL *)localPersistenceURL;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(SCD_Struct_CA2)arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(SCD_Struct_CA2)arg7 reason:(int)arg8 videoZoomFactor:(float)arg9 imageWellImage:(id)arg10 previewImage:(id)arg11 ;
-(NSString *)stillPersistenceUUID;
-(UIImage *)previewImage;
-(NSDate *)captureDate;
@end
