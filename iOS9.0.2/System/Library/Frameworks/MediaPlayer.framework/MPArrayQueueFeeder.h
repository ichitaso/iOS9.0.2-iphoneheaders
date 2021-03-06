/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {

	NSArray* _queueItems;

}

@property (nonatomic,readonly) NSArray * items; 
-(int)playbackMode;
-(unsigned)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned)itemCount;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)identifierAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(id)pathAtIndex:(unsigned)arg1 ;
@end

