/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPhotoEditDataImporter.h>
#import <libobjc.A.dylib/PLPhotoEditDataExporter.h>

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatIdentifier;
+(id)formatVersion;
+(char)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5 ;
+(id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 exifOrientation:(int)arg4 ;
+(char)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
+(id)_knownFormatVersions;
+(char)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4 ;
+(int)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3 ;
+(id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1 ;
+(char)validateAdjustmentsEnvelope:(id)arg1 ;
+(id)_supportedAdjustments;
+(id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1 ;
@end

