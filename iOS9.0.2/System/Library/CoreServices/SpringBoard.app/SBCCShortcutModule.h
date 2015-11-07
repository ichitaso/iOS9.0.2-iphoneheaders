/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCCButtonModule.h>

@class NSString, NSURL;

@interface SBCCShortcutModule : SBCCButtonModule {

	NSString* _displayID;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * displayID;                    //@synthesize displayID=_displayID - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)identifier;
-(void)activateAppWithDisplayID:(id)arg1 url:(id)arg2 ;
-(void)activateApp;
-(id)aggdKey;
-(char)_toggleState;
-(void)dealloc;
-(id)identifier;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(id)displayName;
-(NSString *)displayID;
-(char)isRestricted;
-(void)setDisplayID:(NSString *)arg1 ;
@end
