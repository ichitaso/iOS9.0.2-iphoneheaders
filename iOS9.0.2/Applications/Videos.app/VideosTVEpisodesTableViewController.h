/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>
#import <Videos/MPUCompletionQueryDataSourceDelegate.h>
#import <Videos/MPUCompletionFooterViewDelegate.h>

@class NSIndexPath, VideosTVSeasonEpisodesDataSource, NSString;

@interface VideosTVEpisodesTableViewController : MPUTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate> {

	char _alignCellSeparatorInsetsWithLabels;
	NSIndexPath* _expandedIndexPath;

}

@property (nonatomic,readonly) VideosTVSeasonEpisodesDataSource * queryDataSource; 
@property (assign,nonatomic) char alignCellSeparatorInsetsWithLabels;                           //@synthesize alignCellSeparatorInsetsWithLabels=_alignCellSeparatorInsetsWithLabels - In the implementation block
@property (nonatomic,retain) NSIndexPath * expandedIndexPath;                                   //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)usesCellConfigurations;
-(void)setAlignCellSeparatorInsetsWithLabels:(char)arg1 ;
-(char)alignCellSeparatorInsetsWithLabels;
-(NSIndexPath *)expandedIndexPath;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(void)_configureFooterView:(id)arg1 forOffer:(id)arg2 ;
-(void)_moreEpisodesAction:(id)arg1 ;
-(int)_footerStyle;
-(void)setDataSource:(id)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)_createTableView;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2 ;
-(void)completionFooterView:(id)arg1 didChangePreferredVariant:(int)arg2 ;
-(void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2 ;
-(void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(int)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
@end
