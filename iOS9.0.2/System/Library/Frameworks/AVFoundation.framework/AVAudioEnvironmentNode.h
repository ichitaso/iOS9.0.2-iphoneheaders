/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioNode.h>
#import <libobjc.A.dylib/AVAudioMixing.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned nextAvailableInputBus; 
@property (assign,nonatomic) AVAudio3DPoint listenerPosition; 
@property (assign,nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation; 
@property (assign,nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation; 
@property (nonatomic,readonly) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters; 
@property (nonatomic,readonly) AVAudioEnvironmentReverbParameters * reverbParameters; 
@property (nonatomic,readonly) NSArray * applicableRenderingAlgorithms; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(void)setOutputVolume:(float)arg1 ;
-(float)outputVolume;
-(unsigned)nextAvailableInputBus;
-(NSArray *)applicableRenderingAlgorithms;
-(AVAudio3DVectorOrientation)listenerVectorOrientation;
-(void)setListenerAngularOrientation:(AVAudio3DAngularOrientation)arg1 ;
-(AVAudio3DAngularOrientation)listenerAngularOrientation;
-(AVAudioEnvironmentReverbParameters *)reverbParameters;
-(void)setListenerPosition:(AVAudio3DPoint)arg1 ;
-(void)setListenerVectorOrientation:(AVAudio3DVectorOrientation)arg1 ;
-(AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
-(AVAudio3DPoint)listenerPosition;
-(id)init;
@end

