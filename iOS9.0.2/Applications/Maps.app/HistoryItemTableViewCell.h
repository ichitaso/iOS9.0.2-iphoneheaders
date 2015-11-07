/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/SearchCompletionTableViewCell.h>

@protocol HistoryItem;
@class UIImageView, NSString;

@interface HistoryItemTableViewCell : SearchCompletionTableViewCell {

	UIImageView* _glyphImageView;
	id<HistoryItem> _historyItem;
	NSString* _searchText;

}

@property (nonatomic,retain) id<HistoryItem> historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,copy) NSString * searchText;                      //@synthesize searchText=_searchText - In the implementation block
+(id)_searchRequestFromString:(id)arg1 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 idiom:(int)arg3 searchText:(id)arg4 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 searchText:(id)arg3 ;
-(void)setHistoryItem:(id<HistoryItem>)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(NSString *)searchText;
-(id<HistoryItem>)historyItem;
@end
