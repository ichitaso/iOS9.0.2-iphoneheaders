/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) char booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) char invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(void)dealloc;
-(NSString *)stringValue;
-(char)booleanValue;
-(void)finalize;
-(double)numberValue;
-(unsigned short)resultType;
-(DOMNode *)singleNodeValue;
-(char)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
@end
