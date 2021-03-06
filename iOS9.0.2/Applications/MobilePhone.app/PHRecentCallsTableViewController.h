/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray, PHCallHistoryController, NSString;

@interface PHRecentCallsTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _recentCalls;

}

@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) PHCallHistoryController * callHistoryController; 
@property (nonatomic,retain) NSMutableArray * recentCalls;                                   //@synthesize recentCalls=_recentCalls - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callHistoryControllerDatabaseDidChange:(id)arg1 ;
-(void)metadataCacheDidFinishUpdating:(id)arg1 ;
-(PHCallHistoryController *)callHistoryController;
-(void)markAllRecentCallsRead;
-(void)fetchRecentCalls;
-(id)removeRecentCallsAtIndexPaths:(id)arg1 ;
-(void)deleteRecentCalls:(id)arg1 ;
-(id)recentCallAtIndex:(int)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSMutableArray *)recentCalls;
-(void)setRecentCalls:(NSMutableArray *)arg1 ;
-(void)refresh;
@end

