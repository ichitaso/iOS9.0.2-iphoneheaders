/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, PHAssetCreationRequest, PHAssetResource;

@interface PHAssetResourceBag : NSObject {

	NSArray* _assetResourceContexts;
	char _didValidateForInsertion;
	char _valid;
	char _hasAdjustments;
	PHAssetCreationRequest* _assetCreationRequest;
	NSArray* _assetResources;
	int _mediaType;
	unsigned _mediaSubtype;
	PHAssetResource* _primaryResource;

}

@property (nonatomic,__weak,readonly) PHAssetCreationRequest * assetCreationRequest;              //@synthesize assetCreationRequest=_assetCreationRequest - In the implementation block
@property (nonatomic,readonly) NSArray * assetResources;                                          //@synthesize assetResources=_assetResources - In the implementation block
@property (nonatomic,readonly) char didValidateForInsertion;                                      //@synthesize didValidateForInsertion=_didValidateForInsertion - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid;                                         //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) char hasAdjustments;                                               //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) int mediaType;                                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned mediaSubtype;                                             //@synthesize mediaSubtype=_mediaSubtype - In the implementation block
@property (nonatomic,readonly) PHAssetResource * primaryResource;                                 //@synthesize primaryResource=_primaryResource - In the implementation block
+(char)supportsAssetResourceTypes:(id)arg1 mediaType:(int*)arg2 ;
+(char)_supportsAssetResourceTypes:(id)arg1 mediaType:(int*)arg2 mediaSubtype:(unsigned*)arg3 ;
+(id)_primaryAssetResource:(id)arg1 ;
-(id)assetResourceWithType:(int)arg1 ;
-(id)validatedURLForAssetResource:(id)arg1 ;
-(id)validatedDataForAssetResource:(id)arg1 ;
-(unsigned)mediaSubtype;
-(PHAssetResource *)primaryResource;
-(id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2 ;
-(char)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(char)didValidateForInsertion;
-(char)_validateImageDataForAssetCreation:(id)arg1 error:(id*)arg2 ;
-(char)_extractValidatedImageURL:(id*)arg1 imageData:(id*)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5 ;
-(char)_extractValidatedVideoURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(char)_extractValidatedAudioURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(char)_extractValidatedAdjustmentsURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(char)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)_validatedContextForResource:(id)arg1 ;
-(PHAssetCreationRequest *)assetCreationRequest;
-(NSArray *)assetResources;
-(int)mediaType;
-(char)hasAdjustments;
-(char)isValid;
@end

