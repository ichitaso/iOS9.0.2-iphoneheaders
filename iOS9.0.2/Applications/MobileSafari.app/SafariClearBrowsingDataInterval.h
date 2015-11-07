/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject {

	NSString* _descriptionOfInterval;
	/*^block*/id _dateAfterWhichDataShouldBeClearedBlock;
	NSString* _aggdIntervalKey;

}

@property (readonly) NSString * descriptionOfInterval;                             //@synthesize descriptionOfInterval=_descriptionOfInterval - In the implementation block
@property (nonatomic,copy) id dateAfterWhichDataShouldBeClearedBlock;              //@synthesize dateAfterWhichDataShouldBeClearedBlock=_dateAfterWhichDataShouldBeClearedBlock - In the implementation block
@property (nonatomic,retain) NSString * aggdIntervalKey;                           //@synthesize aggdIntervalKey=_aggdIntervalKey - In the implementation block
-(NSString *)descriptionOfInterval;
-(id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(/*^block*/id)arg2 ;
-(id)dateAfterWhichDataShouldBeClearedBlock;
-(void)setDateAfterWhichDataShouldBeClearedBlock:(id)arg1 ;
-(NSString *)aggdIntervalKey;
-(void)setAggdIntervalKey:(NSString *)arg1 ;
-(id)init;
-(id)description;
@end
