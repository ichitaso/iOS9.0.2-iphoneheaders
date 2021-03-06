/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) int filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) char bypass; 
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(char)bypass;
-(void)setBypass:(char)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(float)bandwidth;
-(void)dealloc;
-(id)init;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(int)filterType;
-(void)setFilterType:(int)arg1 ;
-(float)gain;
-(void)setGain:(float)arg1 ;
@end

