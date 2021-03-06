/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSString, NSLock;

@interface MPLayerInternal : NSObject {

	double numberOfLoops;
	float opacity;
	CGPoint position;
	float zPosition;
	CGSize size;
	float rotationAngle;
	float xRotationAngle;
	float yRotationAngle;
	float scale;
	double timeIn;
	double duration;
	double phaseInDuration;
	double phaseOutDuration;
	NSString* title;
	char isTriggered;
	char startsPaused;
	char isAudioLayer;
	int audioPriority;
	double durationPadding;
	NSString* layerID;
	int zIndex;
	NSString* uuid;
	NSLock* containerLock;
	char cleaningUp;

}

@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) float zPosition; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) float rotationAngle; 
@property (assign,nonatomic) float xRotationAngle; 
@property (assign,nonatomic) float yRotationAngle; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) char isTriggered; 
@property (assign,nonatomic) char startsPaused; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) char isAudioLayer; 
@property (assign,nonatomic) int audioPriority; 
@property (assign,nonatomic) double durationPadding; 
@property (assign,nonatomic) int zIndex; 
@property (nonatomic,retain) NSString * layerID; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSLock * containerLock; 
@property (assign,nonatomic) char cleaningUp; 
-(float)yRotationAngle;
-(float)xRotationAngle;
-(char)isAudioLayer;
-(void)setCleaningUp:(char)arg1 ;
-(void)setLayerID:(NSString *)arg1 ;
-(char)cleaningUp;
-(NSLock *)containerLock;
-(NSString *)layerID;
-(char)isTriggered;
-(double)timeIn;
-(double)durationPadding;
-(char)startsPaused;
-(void)setTimeIn:(double)arg1 ;
-(int)audioPriority;
-(double)phaseInDuration;
-(void)setIsTriggered:(char)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(void)setStartsPaused:(char)arg1 ;
-(void)setXRotationAngle:(float)arg1 ;
-(void)setYRotationAngle:(float)arg1 ;
-(void)setAudioPriority:(int)arg1 ;
-(void)setIsAudioLayer:(char)arg1 ;
-(void)setContainerLock:(NSLock *)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(float)zPosition;
-(CGSize)size;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(float)arg1 ;
-(NSString *)title;
-(float)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setZPosition:(float)arg1 ;
-(NSString *)uuid;
-(int)zIndex;
-(void)setZIndex:(int)arg1 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
@end

