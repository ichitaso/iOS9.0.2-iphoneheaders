/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNTracePlayerSchedulerDelegate;
@class NSTimer, NSMutableArray;

@interface MNTracePlayerScheduler : NSObject {

	id<MNTracePlayerSchedulerDelegate> _delegate;
	NSTimer* _timer;
	double _lastTimerScheduleTime;
	double _speedMultiplier;
	NSMutableArray* _timelineStreams;
	double _position;

}

@property (assign,nonatomic,__weak) id<MNTracePlayerSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double speedMultiplier;                                          //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (assign,nonatomic) double position;                                                 //@synthesize position=_position - In the implementation block
-(void)_timerUpdated:(id)arg1 ;
-(void)updateForPlaybackSpeedChanged;
-(double)speedMultiplier;
-(void)addTimelineStream:(id)arg1 ;
-(void)setSpeedMultiplier:(double)arg1 ;
-(void)_restartTimer;
-(void)setDelegate:(id<MNTracePlayerSchedulerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNTracePlayerSchedulerDelegate>)delegate;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)_update;
-(void)resume;
-(void)pause;
@end

