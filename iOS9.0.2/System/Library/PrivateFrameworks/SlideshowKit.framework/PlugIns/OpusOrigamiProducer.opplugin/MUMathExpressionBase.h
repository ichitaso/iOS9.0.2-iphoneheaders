/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableDictionary, NSError;

@interface MUMathExpressionBase : NSObject {

	NSMutableDictionary* _indicesForVariables;
	NSError* _lastError;

}
+(id)parserErrorToString:(SCD_Struct_MU4*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)setLastError:(SCD_Struct_MU4*)arg1 ;
-(id)lastError;
@end

