/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage {

	int _personID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) int personID;                       //@synthesize personID=_personID - In the implementation block
-(void)dealloc;
-(NSString *)personName;
-(id)initWithRecordID:(int)arg1 ;
-(void)resetIMPerson;
-(void)setPersonName:(NSString *)arg1 ;
-(void)markAsRead;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
@end

