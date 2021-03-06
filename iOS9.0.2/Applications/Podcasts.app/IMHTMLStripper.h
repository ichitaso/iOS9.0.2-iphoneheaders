/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMHTMLStripper : NSObject {

	char _convertListItems;
	NSMutableArray* _enclosingListTags;
	unsigned _orderedListItemCount;

}

@property (assign,nonatomic) char convertListItems;                           //@synthesize convertListItems=_convertListItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * enclosingListTags;              //@synthesize enclosingListTags=_enclosingListTags - In the implementation block
@property (assign,nonatomic) unsigned orderedListItemCount;                   //@synthesize orderedListItemCount=_orderedListItemCount - In the implementation block
+(id)extractPlainTextBody:(id)arg1 ;
-(id)replacementStringForTag:(id)arg1 isStartTag:(char)arg2 ;
-(char)convertListItems;
-(NSMutableArray *)enclosingListTags;
-(unsigned)orderedListItemCount;
-(void)setOrderedListItemCount:(unsigned)arg1 ;
-(void)setConvertListItems:(char)arg1 ;
-(id)htmlBody:(id)arg1 ;
-(id)stripHTMLString:(id)arg1 ;
-(void)setEnclosingListTags:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

