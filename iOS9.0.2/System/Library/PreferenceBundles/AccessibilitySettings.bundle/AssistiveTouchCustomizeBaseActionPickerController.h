/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray, NSString, NSArray;

@interface AssistiveTouchCustomizeBaseActionPickerController : AccessibilityBaseListController {

	NSMutableArray* _shownIcons;
	NSString* _selectedPopoverIcon;
	NSString* _selectedPopoverLocation;
	/*^block*/id _iconFilter;

}

@property (nonatomic,readonly) NSArray * shownIcons;                          //@synthesize shownIcons=_shownIcons - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverIcon;                  //@synthesize selectedPopoverIcon=_selectedPopoverIcon - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverLocation;              //@synthesize selectedPopoverLocation=_selectedPopoverLocation - In the implementation block
@property (nonatomic,copy) id iconFilter;                                     //@synthesize iconFilter=_iconFilter - In the implementation block
-(void)setSelectedPopoverLocation:(NSString *)arg1 ;
-(NSString *)selectedPopoverLocation;
-(void)setSelectedPopoverIcon:(NSString *)arg1 ;
-(void)astTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)selectedPopoverIcon;
-(void)astTableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)astNumberOfRowsInSection:(int)arg1 ;
-(id)astPickerCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)iconFilter;
-(NSArray *)shownIcons;
-(id)availableIcons;
-(void)setIconFilter:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
@end

