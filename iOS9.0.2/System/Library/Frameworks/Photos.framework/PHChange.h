/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSMutableDictionary, NSArray, NSObject, NSMapTable;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSMutableDictionary* _updatedObjectsChangedAttributesByEntityName;
	NSMutableDictionary* _updatedObjectsChangedRelationshipsByEntityName;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	char _unknownMergeEvent;

}
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)handlerQueue;
-(id)insertedObjectIDs;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_prepareCachedValuesForEntity:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(char)arg2 ;
-(id)changedAttributesByOID;
-(id)changedRelationshipsByOID;
-(char)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(char)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)changeDetailsForObject:(id)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(char)contentOrThumbnailChangedForPHAssetOID:(id)arg1 ;
-(id)init;
-(id)description;
@end

