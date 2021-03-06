/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {

	_IDSIDQueryController* _internal;

}
+(id)sharedInstance;
-(void)__imQueryIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)__imBlockingCurrrentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(void)__imQueryKnownIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryKnownIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryKnownIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(char)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(char)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_setCurrentIDStatus:(int)arg1 forDestination:(id)arg2 service:(id)arg3 ;
-(int)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(int)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)_warmupQueryCacheForService:(id)arg1 ;
-(char)_flushQueryCacheForService:(id)arg1 ;
-(char)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)_hasCacheForService:(id)arg1 ;
-(int)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)removeDelegate:(id)arg1 ;
@end

