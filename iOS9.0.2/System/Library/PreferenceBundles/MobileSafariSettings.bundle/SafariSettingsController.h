/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class WebBookmarkCollection, NSArray, NSString;

@interface SafariSettingsController : SafariSettingsListController <MCProfileConnectionObserver> {

	WebBookmarkCollection* _bookmarkCollection;
	NSArray* _contentBlockerExtensions;
	id _contentBlockerMatchingContext;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)specifiers;
-(void)_bookmarksDidReload:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(unsigned)readEngineNames:(id)arg1 ;
-(void)setSearchEngineInSpecifiers:(id)arg1 ;
-(id)_managedConfigurationNameForSpecifier:(id)arg1 ;
-(char)_isCloudHistoryEnabled;
-(void)safariClearHistoryAndData;
-(void)explanationSheetDoneButtonPressed:(id)arg1 ;
-(id)favoritesFolderTitle;
-(void)alwaysShowBookmarksBarToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariReadingListOverCellularToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariFraudWarningsToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariSetSearchEngine:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_copyFile:(id)arg1 toFile:(id)arg2 ;
-(void)safariToggleHideFrequentlyVisitedSites:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariToggleDoNotTrack:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariToggleShowTabBar:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariToggleSpeculativeLoading:(id)arg1 forSpecifier:(id)arg2 ;
-(void)safariToggleSpotlightSuggestions:(id)arg1 forSpecifier:(id)arg2 ;
-(void)showClearHistoryAndDataConfirmation:(id)arg1 ;
-(id)siteSpecificSearchSettingsEnabledString;
-(id)enabledContentBlockerCountString;
-(void)showPrivacyExplanationSheet:(id)arg1 ;
-(void)showSearchExplanationSheet:(id)arg1 ;
@end
