/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRImage;

@interface MRAssetPlayerOptions : NSObject {

	MRImage* _initialImage;
	char _wantsMonochromatic;
	char _wantsMipmap;
	char _wantsPowerOfTwo;
	char _isForExport;
	char _thumbnailIsOK;
	id _playerHint;
	double _stillTime;
	CGSize _resolutionIfEmbeddedAsset;
	double _introDuration;
	double _mainDuration;
	double _outroDuration;

}

@property (readonly) char isEmbeddedAsset; 
@property (readonly) char isStill; 
@property (assign,nonatomic) char wantsMonochromatic;                       //@synthesize wantsMonochromatic=_wantsMonochromatic - In the implementation block
@property (assign,nonatomic) char wantsMipmap;                              //@synthesize wantsMipmap=_wantsMipmap - In the implementation block
@property (assign,nonatomic) char wantsPowerOfTwo;                          //@synthesize wantsPowerOfTwo=_wantsPowerOfTwo - In the implementation block
@property (assign,nonatomic) char isForExport;                              //@synthesize isForExport=_isForExport - In the implementation block
@property (assign,nonatomic) char thumbnailIsOK;                            //@synthesize thumbnailIsOK=_thumbnailIsOK - In the implementation block
@property (assign,nonatomic) double stillTime;                              //@synthesize stillTime=_stillTime - In the implementation block
@property (assign,nonatomic) CGSize resolutionIfEmbeddedAsset;              //@synthesize resolutionIfEmbeddedAsset=_resolutionIfEmbeddedAsset - In the implementation block
@property (retain) MRImage * initialImage; 
@property (assign,nonatomic) id playerHint;                                 //@synthesize playerHint=_playerHint - In the implementation block
@property (assign,nonatomic) double introDuration;                          //@synthesize introDuration=_introDuration - In the implementation block
@property (assign,nonatomic) double mainDuration;                           //@synthesize mainDuration=_mainDuration - In the implementation block
@property (assign,nonatomic) double outroDuration;                          //@synthesize outroDuration=_outroDuration - In the implementation block
-(double)stillTime;
-(MRImage *)initialImage;
-(char)isStill;
-(char)wantsPowerOfTwo;
-(char)isForExport;
-(id)playerHint;
-(char)thumbnailIsOK;
-(void)setPlayerHint:(id)arg1 ;
-(double)introDuration;
-(double)outroDuration;
-(void)setIsForExport:(char)arg1 ;
-(void)setWantsMipmap:(char)arg1 ;
-(void)setStillTime:(double)arg1 ;
-(char)wantsMipmap;
-(char)isEmbeddedAsset;
-(double)mainDuration;
-(CGSize)resolutionIfEmbeddedAsset;
-(void)setMainDuration:(double)arg1 ;
-(void)setWantsMonochromatic:(char)arg1 ;
-(void)setWantsPowerOfTwo:(char)arg1 ;
-(void)setThumbnailIsOK:(char)arg1 ;
-(void)setIntroDuration:(double)arg1 ;
-(void)setOutroDuration:(double)arg1 ;
-(char)wantsMonochromatic;
-(void)setInitialImage:(MRImage *)arg1 ;
-(void)setResolutionIfEmbeddedAsset:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
@end
