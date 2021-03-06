/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableArray;

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {

	char _lastUUIDInJournal;
	NSUUID* _lastUUID;
	NSMutableArray* _gaps;

}

@property (nonatomic,retain) NSUUID * lastUUID;                   //@synthesize lastUUID=_lastUUID - In the implementation block
@property (assign,nonatomic) char lastUUIDInJournal;              //@synthesize lastUUIDInJournal=_lastUUIDInJournal - In the implementation block
@property (nonatomic,retain) NSMutableArray * gaps;               //@synthesize gaps=_gaps - In the implementation block
+(char)supportsSecureCoding;
-(void)setGaps:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSMutableArray *)gaps;
-(NSUUID *)lastUUID;
-(void)setLastUUID:(NSUUID *)arg1 ;
-(void)setLastUUIDInJournal:(char)arg1 ;
-(char)lastUUIDInJournal;
@end

