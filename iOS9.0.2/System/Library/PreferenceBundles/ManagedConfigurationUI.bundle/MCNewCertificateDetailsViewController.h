/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class NSArray, NSString;

@interface MCNewCertificateDetailsViewController : UITableViewController <PSStateRestoration> {

	id _certificateTrust;
	NSArray* _keyValueSections;
	NSArray* _keyValueSectionTitles;

}

@property (nonatomic,retain) id certificateTrust;                          //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;                   //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSectionTitles;              //@synthesize keyValueSectionTitles=_keyValueSectionTitles - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(char)canBeShownFromSuspendedState;
-(void)_setup;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(NSArray *)keyValueSectionTitles;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(void)setKeyValueSectionTitles:(NSArray *)arg1 ;
@end

