/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
-(int)endOffset;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 ;
@end
