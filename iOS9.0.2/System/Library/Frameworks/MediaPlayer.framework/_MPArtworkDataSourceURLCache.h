/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface _MPArtworkDataSourceURLCache : NSURLCache {

	NSMapTable* _requestSizeMap;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
-(void)setRepresentationSize:(CGSize)arg1 forRequest:(id)arg2 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)init;
@end
