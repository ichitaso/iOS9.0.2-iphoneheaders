/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;

}
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isExportable;
-(char)isComposable;
-(id)assetInspector;
-(id)initWithAssetInspector:(id)arg1 ;
-(id)lyrics;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(SCD_Struct_CM5)duration;
-(char)isReadable;
-(char)isCompatibleWithSavedPhotosAlbum;
@end

