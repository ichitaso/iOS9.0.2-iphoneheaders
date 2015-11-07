/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>
#import <libobjc.A.dylib/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, EKEventDescriptionGenerator, NSArray, NSTimer, SBSApplicationShortcutService, NSString;

@interface EKBBTodayProvider : EKBBDataProvider <BBDataProvider> {

	NSObject*<OS_dispatch_queue> _bulletinRefreshQueue;
	EKEventDescriptionGenerator* _descriptionGenerator;
	NSArray* _birthdayEvents;
	NSArray* _upcomingEvents;
	NSArray* _todayEvents;
	NSArray* _tomorrowEvents;
	NSTimer* _updateCountdownTimer;
	NSTimer* _startCountdownTimer;
	char _visible;
	char _upcomingEventBulletinNeedsRefresh;
	char _isShowingBirthdayBulletin;
	char _isShowingUpcomingEventBulletin;
	char _isShowingTomorrowBulletin;
	SBSApplicationShortcutService* _sbApplicationShortcutService;

}

@property (retain) SBSApplicationShortcutService * sbApplicationShortcutService;              //@synthesize sbApplicationShortcutService=_sbApplicationShortcutService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)supportsAlerts;
-(char)supportsTravelAdvice;
-(void)eventStoreWillClose;
-(void)setSbApplicationShortcutService:(SBSApplicationShortcutService *)arg1 ;
-(void)_hostWillDismiss:(id)arg1 ;
-(void)_resetTimers;
-(id)_todayEvents;
-(void)_selectedCalendarsChanged:(id)arg1 ;
-(void)_resetAllEvents;
-(id)_createBirthdayBulletin;
-(void)_hostDidPresent:(id)arg1 ;
-(id)_tomorrowEvents;
-(id)_dateForNow;
-(id)_createUpcomingEventBulletin;
-(id)_createTomorrowBulletin;
-(id)_upcomingEvents;
-(void)_eventDescriptionWasInvalidated:(id)arg1 ;
-(id)_birthdayEventsForToday;
-(id)_expirationDateForTomorrowSnippet;
-(SBSApplicationShortcutService *)sbApplicationShortcutService;
-(id)_springBoardCalendarShortcutItemsFromEvents:(id)arg1 ;
-(void)_updateMobileCalHomeScreenIconQuickActionMenuWithUpcomingEvents:(id)arg1 ;
-(char)_isEventFirstForToday:(id)arg1 ;
-(void)_refreshUpcomingEventBulletin;
-(void)_scheduleTimerForUpdatingCountdownForEvent:(id)arg1 ;
-(void)_scheduleTimerForStartingCountdownToEvent:(id)arg1 ;
-(id)_dateForBeginningOfTomorrow;
-(id)_dateForEndOfToday;
-(id)_loadBirthdayEventsForToday;
-(id)_loadUpcomingEvents;
-(id)_loadTomorrowEvents;
-(id)_loadTodayEvents;
-(char)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(char)arg2 ;
-(id)_dateForEndOfTomorrow;
-(id)_dateForBeginningOfToday;
-(void)_refreshBirthdayBulletin;
-(char)_isListOfEvents:(id)arg1 equivalentToListOfEvents:(id)arg2 ;
-(void)_refreshTomorrowBulletin;
-(void)_releaseAllEvents;
-(char)_doesListOfEvents:(id)arg1 containEquivalentForEvent:(id)arg2 ;
-(char)_isEvent:(id)arg1 equivalentToEvent:(id)arg2 ;
-(void)_startCountdownTimerDidFire:(id)arg1 ;
-(void)_updateCountdownTimerDidFire:(id)arg1 ;
-(char)shouldRefreshUpcomingEventBulletin;
-(void)_localeChanged;
-(id)_selectedCalendars;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(void)_todayChanged:(id)arg1 ;
-(id)_tomorrowComponents;
-(void)databaseChanged:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(void)_significantTimeChange:(id)arg1 ;
-(id)sectionIdentifier;
@end
