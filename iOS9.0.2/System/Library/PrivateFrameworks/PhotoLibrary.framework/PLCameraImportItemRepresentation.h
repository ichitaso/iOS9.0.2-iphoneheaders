/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject {

	ICCameraFile* _cameraFile;
	NSDictionary* _metadata;
	char _canRequestMetadata;
	char _canRequestThumbnail;
	NSString* _path;
	char _inDatabase;

}

@property (nonatomic,retain) ICCameraFile * cameraFile;              //@synthesize cameraFile=_cameraFile - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) char canRequestMetadata;                //@synthesize canRequestMetadata=_canRequestMetadata - In the implementation block
@property (assign,nonatomic) char canRequestThumbnail;               //@synthesize canRequestThumbnail=_canRequestThumbnail - In the implementation block
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) char inDatabase;                        //@synthesize inDatabase=_inDatabase - In the implementation block
-(char)isJPEG;
-(char)isAudio;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setCanRequestMetadata:(char)arg1 ;
-(char)canRequestThumbnail;
-(void)setCanRequestThumbnail:(char)arg1 ;
-(ICCameraFile *)cameraFile;
-(char)isMovie;
-(char)isInDatabaseForce:(char)arg1 ;
-(id)initWithCameraFile:(id)arg1 ;
-(char)canRequestMetadata;
-(void)setInDatabase:(char)arg1 ;
-(char)isRaw;
-(void)setCameraFile:(ICCameraFile *)arg1 ;
-(char)inDatabase;
-(id)fileExtension;
@end
