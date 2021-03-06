/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSCondition;

@interface AAPSyncMetaDataProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _metaData;
	unsigned _lastChangeOffset;
	NSMutableDictionary* _appInfoCache;
	unsigned _appInfoCacheStart;
	unsigned _appInfoCacheEnd;
	NSCondition* _appInfoCacheCheck;

}
-(void)_queue_updateCache;
-(void)_queue_processNextChange:(id)arg1 afterAnchor:(id)arg2 withInitialAnchor:(id)arg3 ;
-(void)processNextChange:(id)arg1 afterAnchor:(id)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(void)dealloc;
@end

