/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSNotificationCenter : NSObject {

	void* _impl;
	void* _callback;
	void** _pad[11];

}
+(id)defaultCenter;
-(id)mf_addImmediateObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)mf_removeObservers:(id)arg1 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 ;
-(void)__mainThreadPostNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)isEmpty;
-(void)removeObserver:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)finalize;
@end

