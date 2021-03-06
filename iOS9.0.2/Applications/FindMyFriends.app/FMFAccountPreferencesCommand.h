/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFAccountPreferencesCommand : FMFBaseCmd {

	char _allowFriendRequests;
	char _shouldReceiveEmails;
	NSString* _meDeviceId;
	NSString* _primaryEmail;
	NSString* _fenceAlertPref;

}

@property (assign,nonatomic) char allowFriendRequests;               //@synthesize allowFriendRequests=_allowFriendRequests - In the implementation block
@property (assign,nonatomic) char shouldReceiveEmails;               //@synthesize shouldReceiveEmails=_shouldReceiveEmails - In the implementation block
@property (nonatomic,retain) NSString * meDeviceId;                  //@synthesize meDeviceId=_meDeviceId - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * fenceAlertPref;              //@synthesize fenceAlertPref=_fenceAlertPref - In the implementation block
-(NSString *)meDeviceId;
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(void)setAllowFriendRequests:(char)arg1 ;
-(void)setShouldReceiveEmails:(char)arg1 ;
-(void)setMeDeviceId:(NSString *)arg1 ;
-(void)setFenceAlertPref:(NSString *)arg1 ;
-(char)allowFriendRequests;
-(char)shouldReceiveEmails;
-(NSString *)fenceAlertPref;
-(id)initWithPrimaryEmail:(id)arg1 allowFriendRequests:(char)arg2 shouldReceiveEmails:(char)arg3 meDeviceId:(id)arg4 fenceAlertPref:(id)arg5 ;
-(NSString *)primaryEmail;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(id)jsonBodyDictionary;
@end

