/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {

	void* memlist_key;
	MTLIOAccelResource* fResourceListHead;
	int _memoryInfoLock;

}
+(id)initialize;
-(void)addResourceToList:(id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void)dealloc;
-(id)init;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
-(void)shutdown;
@end

