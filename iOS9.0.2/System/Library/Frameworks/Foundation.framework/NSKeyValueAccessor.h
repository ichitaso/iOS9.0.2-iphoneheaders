/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSKeyValueAccessor : NSObject {

	id _containerClassID;
	NSString* _key;
	unsigned long _hash;
	/*function pointer*/void* _implementation;
	SEL _selector;
	unsigned _extraArgumentCount;
	void* _extraArgument1;
	void* _extraArgument2;
	void* _extraArgument3;

}
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(/*function pointer*/void*)arg3 selector:(SEL)arg4 extraArguments:(void**)arg5 count:(unsigned)arg6 ;
-(id)containerClassID;
-(unsigned)extraArgumentCount;
-(void*)extraArgument1;
-(void*)extraArgument2;
-(void)dealloc;
-(id)key;
-(SEL)selector;
@end
