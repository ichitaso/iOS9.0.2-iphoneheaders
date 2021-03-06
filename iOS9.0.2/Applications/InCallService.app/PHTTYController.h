/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <InCallService/InCallService-Structs.h>
@interface PHTTYController : NSObject {

	char _useTTY;
	char _ctConfiguredForTTY;

}

@property (assign,nonatomic) char useTTY;                          //@synthesize useTTY=_useTTY - In the implementation block
@property (assign,nonatomic) char ctConfiguredForTTY;              //@synthesize ctConfiguredForTTY=_ctConfiguredForTTY - In the implementation block
+(id)sharedTTYController;
+(CTServerConnectionRef)_serverConnection;
-(char)ttyIsAvailable;
-(void)setUseTTY:(char)arg1 ;
-(char)useTTY;
-(void)headphoneStateChangedNotification:(id)arg1 ;
-(void)configureTTYForCall:(id)arg1 ;
-(void)setCtConfiguredForTTY:(char)arg1 ;
-(void)setCtConfiguredForTTY:(char)arg1 forceConfiguration:(char)arg2 ;
-(char)ctConfiguredForTTY;
-(void)dealloc;
-(id)init;
-(void)callStateChangedNotification:(id)arg1 ;
@end

