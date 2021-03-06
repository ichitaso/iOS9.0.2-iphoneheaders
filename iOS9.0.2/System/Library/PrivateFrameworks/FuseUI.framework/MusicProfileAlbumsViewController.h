/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration, MPAVController;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {

	char _collapseSections;
	MusicLibraryAlbumsViewConfiguration* _libraryAlbumsViewConfiguration;
	MPAVController* _player;

}

@property (nonatomic,readonly) MusicLibraryAlbumsViewConfiguration * libraryAlbumsViewConfiguration; 
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)_updateCollapseSections;
-(MusicLibraryAlbumsViewConfiguration *)libraryAlbumsViewConfiguration;
-(void)_setCollapseSections:(char)arg1 ;
-(int)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1 ;
-(void)tableViewDataDidReload;
@end

