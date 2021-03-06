/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, EKCalendar, RemindersListAddShareesController, EKSharee, NSArray, NSString;

@interface RemindersListSharingController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	EKCalendar* _calendar;
	char _allowsEditing;
	RemindersListAddShareesController* _addShareesController;
	void* _addressBook;
	EKSharee* _selectedSharee;
	NSArray* _addedSharees;

}

@property (readonly) NSArray * addedSharees;                        //@synthesize addedSharees=_addedSharees - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringForShareeStatus:(unsigned)arg1 ;
-(void*)copyPersonRecordForEmail:(id)arg1 ;
-(id)imageViewForPersonRecord:(void*)arg1 withFirstName:(id)arg2 lastName:(id)arg3 ;
-(void)stopSharing;
-(NSArray *)addedSharees;
-(void)add;
-(void)cancel;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)initWithCalendar:(id)arg1 ;
@end

