/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSDictionary : NSDictionary <WKObject> {

	ObjectStorage<API::Dictionary> _dictionary;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)keyEnumerator;
-(Object*)_apiObject;
@end
