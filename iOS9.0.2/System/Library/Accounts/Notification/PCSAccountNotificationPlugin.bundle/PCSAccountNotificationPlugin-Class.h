/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Accounts/Notification/PCSAccountNotificationPlugin.bundle/PCSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface PCSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)escrowURL:(id)arg1 ;
-(char)setupAccount:(id)arg1 type:(id)arg2 ;
-(id)iCloudEnvironmentForAccount:(id)arg1 ;
-(char)careAboutAccount:(id)arg1 ;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

