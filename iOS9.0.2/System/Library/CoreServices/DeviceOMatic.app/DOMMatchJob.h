/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/DeviceOMatic.app/DeviceOMatic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DeviceOMatic/DeviceOMatic-Structs.h>
@class NSString;

@interface DOMMatchJob : NSObject {

	int _msgID;
	int _jobType;
	CFMessagePortRef _kickMe;
	NSString* _name;

}

@property (assign) int msgID;                              //@synthesize msgID=_msgID - In the implementation block
@property (assign) int jobType;                            //@synthesize jobType=_jobType - In the implementation block
@property (assign) CFMessagePortRef kickMe;                //@synthesize kickMe=_kickMe - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(CFMessagePortRef)kickMe;
-(int)msgID;
-(void)setMsgID:(int)arg1 ;
-(void)setKickMe:(CFMessagePortRef)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)kick;
-(int)jobType;
-(void)setJobType:(int)arg1 ;
@end
