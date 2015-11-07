/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration> {

	MCPayload* _payload;
	MCPayloadInfo* _payloadInfo;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) MCPayload * payload;                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) MCPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;               //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCPayloadInfo *)payloadInfo;
-(void)setPayloadInfo:(MCPayloadInfo *)arg1 ;
-(char)canBeShownFromSuspendedState;
-(void)_setup;
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(MCPayload *)payload;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(MCPayload *)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithPayloadInfo:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setTitle:(id)arg1 keyValueSections:(id)arg2 ;
@end
