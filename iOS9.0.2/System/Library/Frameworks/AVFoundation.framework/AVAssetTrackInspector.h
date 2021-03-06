/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	long _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned long figMediaType; 
@property (getter=_figTrackReader,nonatomic,readonly) OpaqueFigTrackReaderRef figTrackReader; 
@property (getter=_figAssetTrack,nonatomic,readonly) OpaqueFigAssetTrackRef figAssetTrack; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (getter=isSelfContained,nonatomic,readonly) char selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_CM6 timeRange; 
@property (nonatomic,readonly) SCD_Struct_CM6 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_CM6 mediaDecodeTimeRange; 
@property (nonatomic,readonly) char requiresFrameReordering; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) int layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_CM5 minSampleDuration; 
@property (nonatomic,copy,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) int alternateGroupID; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) char excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) char hasProtectedContent; 
@property (nonatomic,readonly) long playabilityValidationResult; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_weakReference;
-(NSArray *)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long)arg2 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(long)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(SCD_Struct_CM6)mediaPresentationTimeRange;
-(SCD_Struct_CM6)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(NSDictionary *)loudnessInfo;
-(SCD_Struct_CM5)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(int)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(unsigned long)_figMediaType;
-(int)trackID;
-(char)hasProtectedContent;
-(NSArray *)mediaCharacteristics;
-(NSString *)extendedLanguageTag;
-(NSString *)mediaType;
-(float)nominalFrameRate;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)layer;
-(void)dealloc;
-(id)init;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(CGSize)dimensions;
-(NSString *)languageCode;
-(CGSize)naturalSize;
-(SCD_Struct_CM6)timeRange;
-(CGAffineTransform)preferredTransform;
-(NSArray *)commonMetadata;
-(NSArray *)segments;
@end

