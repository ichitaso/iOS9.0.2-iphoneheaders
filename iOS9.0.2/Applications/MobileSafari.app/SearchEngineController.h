/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface SearchEngineController : NSObject {

	NSMutableArray* _searchEngines;
	unsigned _defaultSearchEngineIndex;
	NSString* _countryCode;
	NSDictionary* _templateParameterValues;
	NSDictionary* _carrierTemplateParameterValues;

}

@property (nonatomic,readonly) NSArray * engines; 
@property (nonatomic,readonly) NSString * countryCode;                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * templateParameterValues;                     //@synthesize templateParameterValues=_templateParameterValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * carrierTemplateParameterValues;              //@synthesize carrierTemplateParameterValues=_carrierTemplateParameterValues - In the implementation block
+(void)_initializeSharedInstance;
+(id)sharedInstanceIfAvailable;
+(id)sharedInstance;
-(void)reloadSearchEngines;
-(NSArray *)engines;
-(id)defaultSearchEngine;
-(void)_populateSearchEngines;
-(void)_loadSystemProperties;
-(void)_addWebSearchProviders;
-(void)_addSpecialSearchEngines;
-(void)_overridePresetDefaultSearchEngine;
-(void)_readDefaultSearchEngine;
-(id)_existingEngineInfoFor:(id)arg1 ;
-(void)_setDefaultSearchEngine:(id)arg1 ;
-(id)engineInfoFor:(id)arg1 ;
-(id)engineInfoForScriptName:(id)arg1 ;
-(void)setSearchEngineInfoAsDefault:(id)arg1 ;
-(id)safeSearchRequestForSearchRequest:(id)arg1 ;
-(NSDictionary *)templateParameterValues;
-(NSDictionary *)carrierTemplateParameterValues;
-(id)init;
-(id)description;
-(NSString *)countryCode;
@end
