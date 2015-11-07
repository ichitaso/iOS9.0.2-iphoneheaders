/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {

	NSArray* _responses;
	NSNumber* _easStatus;
	NSMutableArray* _mResponses;

}

@property (nonatomic,retain) NSArray * responses;                      //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSNumber * easStatus;                     //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * mResponses;              //@synthesize mResponses=_mResponses - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(NSArray *)responses;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mResponses;
-(void)setMResponses:(NSMutableArray *)arg1 ;
-(void)addResponse:(id)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
@end
