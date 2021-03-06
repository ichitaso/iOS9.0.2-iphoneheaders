/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface AXHAUtilities : NSObject {

	NSDictionary* _pickableRoutes;

}
+(id)sharedUtilityProvider;
+(id)objectFromXDCObject:(id)arg1 ;
+(id)XDCObjectFromObject:(id)arg1 ;
+(id)dictionaryFromXPCMessage:(id)arg1 error:(id*)arg2 ;
+(id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
+(id)copyXPCMessageFromDictionary:(id)arg1 inReplyToXPCMessage:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)clearAudioRoutes;
-(id)currentPickableAudioRoutes;
-(char)hearingAidRouteAvailable;
-(char)hearingAidStreamSelected;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(char)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
@end

