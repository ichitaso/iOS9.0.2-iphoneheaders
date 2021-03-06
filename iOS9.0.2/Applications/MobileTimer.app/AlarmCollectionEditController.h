/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>

@protocol EditAlarmViewControllerDelegate;
@class EditAlarmViewController, NSString;

@interface AlarmCollectionEditController : UITableViewController <EditAlarmViewControllerDelegate> {

	EditAlarmViewController* _editController;
	id<EditAlarmViewControllerDelegate> _collectionDelegate;

}

@property (nonatomic,readonly) EditAlarmViewController * editController;                                 //@synthesize editController=_editController - In the implementation block
@property (assign,nonatomic,__weak) id<EditAlarmViewControllerDelegate> collectionDelegate;              //@synthesize collectionDelegate=_collectionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissAddViewController:(id)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(void)setCollectionDelegate:(id<EditAlarmViewControllerDelegate>)arg1 ;
-(EditAlarmViewController *)editController;
-(id<EditAlarmViewControllerDelegate>)collectionDelegate;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
@end

