/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBReachabilitySettings : _UISettings {

	char _allowOnAllDevices;
	unsigned _numberOfTapsForTapTrigger;
	float _debounceFingerOff;
	float _debounceHomeButtonPress;
	float _yOffsetFactor;
	float _mass;
	float _stiffness;
	float _damping;
	float _epsilon;
	double _fingerOnMesaRequiredDuration;
	double _tapToTapMaxInterval;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _reducedMotionSlideDuration;

}

@property (assign,nonatomic) double fingerOnMesaRequiredDuration;                  //@synthesize fingerOnMesaRequiredDuration=_fingerOnMesaRequiredDuration - In the implementation block
@property (assign,nonatomic) char allowOnAllDevices;                               //@synthesize allowOnAllDevices=_allowOnAllDevices - In the implementation block
@property (assign,nonatomic) unsigned numberOfTapsForTapTrigger;                   //@synthesize numberOfTapsForTapTrigger=_numberOfTapsForTapTrigger - In the implementation block
@property (assign,nonatomic) double tapToTapMaxInterval;                           //@synthesize tapToTapMaxInterval=_tapToTapMaxInterval - In the implementation block
@property (assign,nonatomic) float debounceFingerOff;                              //@synthesize debounceFingerOff=_debounceFingerOff - In the implementation block
@property (assign,nonatomic) float debounceHomeButtonPress;                        //@synthesize debounceHomeButtonPress=_debounceHomeButtonPress - In the implementation block
@property (assign,nonatomic) double reachabilityDefaultKeepAlive;                  //@synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive - In the implementation block
@property (assign,nonatomic) double reachabilityInteractiveKeepAlive;              //@synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive - In the implementation block
@property (assign,nonatomic) float yOffsetFactor;                                  //@synthesize yOffsetFactor=_yOffsetFactor - In the implementation block
@property (assign,nonatomic) float mass;                                           //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float stiffness;                                      //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) float damping;                                        //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float epsilon;                                        //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double reducedMotionSlideDuration;                    //@synthesize reducedMotionSlideDuration=_reducedMotionSlideDuration - In the implementation block
+(id)settingsControllerModule;
-(char)allowOnAllDevices;
-(double)reachabilityDefaultKeepAlive;
-(double)reachabilityInteractiveKeepAlive;
-(unsigned)numberOfTapsForTapTrigger;
-(float)debounceHomeButtonPress;
-(double)tapToTapMaxInterval;
-(float)debounceFingerOff;
-(void)setNumberOfTapsForTapTrigger:(unsigned)arg1 ;
-(void)setTapToTapMaxInterval:(double)arg1 ;
-(void)setDebounceFingerOff:(float)arg1 ;
-(void)setFingerOnMesaRequiredDuration:(double)arg1 ;
-(void)setAllowOnAllDevices:(char)arg1 ;
-(void)setReachabilityDefaultKeepAlive:(double)arg1 ;
-(void)setReachabilityInteractiveKeepAlive:(double)arg1 ;
-(void)setDebounceHomeButtonPress:(float)arg1 ;
-(void)setYOffsetFactor:(float)arg1 ;
-(void)setReducedMotionSlideDuration:(double)arg1 ;
-(double)reducedMotionSlideDuration;
-(double)fingerOnMesaRequiredDuration;
-(float)yOffsetFactor;
-(float)stiffness;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(void)setDefaultValues;
-(float)damping;
-(float)mass;
-(id)animationFactory;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
@end
