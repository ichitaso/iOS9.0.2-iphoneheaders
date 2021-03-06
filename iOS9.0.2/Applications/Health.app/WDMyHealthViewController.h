/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@class WDControllerManager, NSString, NSMutableArray, UIImage, UISearchBar, UIColor, NSDate;

@interface WDMyHealthViewController : UITableViewController <UISearchBarDelegate> {

	WDControllerManager* _controllerManager;
	NSString* _searchString;
	NSMutableArray* _searchResults;
	UIImage* _allIcon;
	UISearchBar* _searchBar;
	UIColor* _healthKeyColor;
	NSDate* _initialStartDate;

}

@property (nonatomic,retain) NSDate * initialStartDate;              //@synthesize initialStartDate=_initialStartDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithControllerManager:(id)arg1 ;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 animated:(char)arg3 ;
-(id)_sortedDataCategories;
-(void)_pushDataUnitGroupDetailViewControllerForDataUnitGroup:(id)arg1 animated:(char)arg2 ;
-(void)_pushAllDataUnitGroupCategoryDetailViewControllerAnimated:(char)arg1 ;
-(void)_pushDataCategoryDetailViewControllerForDataCategory:(id)arg1 animated:(char)arg2 ;
-(void)_pushMeViewControllerAnimated:(char)arg1 ;
-(void)_pushDataCategoryDetailViewControllerWithDataUnitGroups:(id)arg1 title:(id)arg2 showListIcon:(char)arg3 userActivityCategoryID:(id)arg4 animated:(char)arg5 ;
-(NSDate *)initialStartDate;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(char)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

