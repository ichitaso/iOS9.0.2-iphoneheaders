/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GAXVerificationEventObject : NSObject {

	unsigned _event;
	double _delay;

}

@property (assign,nonatomic) unsigned event;                      //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double delay;                        //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(unsigned)event;
-(void)setEvent:(unsigned)arg1 ;
-(NSString *)eventName;
@end

