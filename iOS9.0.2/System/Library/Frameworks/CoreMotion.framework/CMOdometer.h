/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CMOdometerDelegate>)delegate;
@end
