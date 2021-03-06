/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSMutableArray, NSArray;

@interface ASSearchStore : ASItem {

	NSNumber* _status;
	NSNumber* _total;
	NSString* _range;
	NSMutableArray* _mResults;

}

@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSNumber * total;                         //@synthesize total=_total - In the implementation block
@property (nonatomic,copy) NSString * range;                         //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
-(NSNumber *)total;
-(void)setTotal:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)range;
-(NSArray *)results;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setRange:(NSString *)arg1 ;
-(id)asParseRules;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
-(void)addResult:(id)arg1 ;
@end

