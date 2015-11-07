/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned _status;
	unsigned _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(char)supportsDisplay;
-(id)titleStringWithOptions:(unsigned)arg1 ;
-(id)messageStringForDescriptionWithOptions:(unsigned)arg1 ;
-(id)messageStringsForDescriptionWithOptions:(unsigned)arg1 ;
-(void)setAllowedEntityTypes:(unsigned)arg1 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
-(unsigned)allowedEntityTypes;
-(id)initWithType:(int)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
@end
