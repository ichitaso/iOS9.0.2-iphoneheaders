/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Gif.qldisplay/Gif
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Gif/Gif-Structs.h>
@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {

	QLImageData* _imageData;
	unsigned _durationsCount;
	QLFrameDurationInformation* _durations;
	float _duration;
	UIImage* _lastImage;
	unsigned _lastImageIndex;

}
-(id)frameAtTime:(float)arg1 ;
-(void)generateDurations;
-(char)time:(float)arg1 belongsToIndex:(unsigned)arg2 ;
-(int)indexForTime:(float)arg1 ;
-(void)dealloc;
-(float)duration;
-(unsigned)frameCount;
-(id)initWithContentsOfURL:(id)arg1 ;
@end
