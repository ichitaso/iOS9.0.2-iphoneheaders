/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKNowPlayingMonitor : _DKMonitor
+(id)_metadataFromInfo:(id)arg1 isPlaying:(char)arg2 ;
+(id)_eventWithBundleIdentifier:(id)arg1 info:(id)arg2 isPlaying:(char)arg3 ;
+(id)eventStream;
+(id)entitlements;
-(void)_registerForNowPlayingNotifications;
-(void)_nowPlayingInfoDidChange:(MROriginRef)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
@end

