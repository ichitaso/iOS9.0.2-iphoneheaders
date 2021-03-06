/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKUserIsCurrentlyAsleepMonitor : _DKMonitor {

	int notifyToken;
	NSObject*<OS_dispatch_source> _is_asleep_timer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> is_asleep_timer;              //@synthesize is_asleep_timer=_is_asleep_timer - In the implementation block
+(id)currentSleepEventWithValue:(id)arg1 ;
+(id)currentlyAwakeEvent;
+(char)isUsualSleepStartTime:(id)arg1 ;
+(id)currentlySleepingEvent;
+(id)eventStream;
-(void)setTimerToEvaluateSleepState;
-(void)setIs_asleep_timer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)is_asleep_timer;
-(void)stop;
-(void)start;
@end

