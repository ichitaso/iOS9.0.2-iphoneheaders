/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionComplicationSettings.bundle/CompanionComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <CompanionComplicationSettings/NCSSettingsManagerDelegate.h>

@class NCSSettingsManager, NSMutableArray, NSString;

@interface CCSComplicationController : PSEditableListController <NCSSettingsManagerDelegate> {

	NCSSettingsManager* _settingsManager;
	NSMutableArray* _groupSpecifiers;

}

@property (nonatomic,retain) NCSSettingsManager * settingsManager;              //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupSpecifiers;                  //@synthesize groupSpecifiers=_groupSpecifiers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSettingsManager:(NCSSettingsManager *)arg1 ;
-(void)setGroupSpecifiers:(NSMutableArray *)arg1 ;
-(id)_specifiersFromSettingsManager;
-(void)_showLimitReached:(id)arg1 ;
-(int)findIndexOfNthComplication:(int)arg1 withActiveState:(char)arg2 ;
-(void)setActiveState:(id)arg1 forSpecifier:(id)arg2 ;
-(NCSSettingsManager *)settingsManager;
-(void)setActiveState:(id)arg1 forSpecifier:(id)arg2 save:(char)arg3 ;
-(id)activeStateForSpecifier:(id)arg1 ;
-(int)findIndexOfComplicationWithIdentifier:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)settingsManagerReloadedComplications:(id)arg1 ;
-(void)willUnlock;
-(NSMutableArray *)groupSpecifiers;
@end

