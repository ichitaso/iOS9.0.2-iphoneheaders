/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLCAAnimationDelegate : NSObject {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                   //@synthesize start=_start - In the implementation block
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)start;
-(void)setStart:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end
