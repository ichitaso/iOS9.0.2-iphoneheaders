/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VideosDetailsTableRow : NSObject {

	NSString* _title;
	id _content;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
+(id)rowWithTitle:(id)arg1 content:(id)arg2 ;
+(id)twoColumnRowWithRows:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)content;
-(void)setContent:(id)arg1 ;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
@end
