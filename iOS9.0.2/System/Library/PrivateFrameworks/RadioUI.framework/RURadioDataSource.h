/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUDataSource.h>
#import <RadioUI/RadioPushNotificationControllerDelegate.h>

@protocol RURadioDataSourceDelegate;
@class NSArray, RadioPushNotificationController, RURadioPlaybackCoordinator, NSString;

@interface RURadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate> {

	id<RURadioDataSourceDelegate> _delegate;
	NSArray* _featuredStations;
	char _optedInToRadio;
	RadioPushNotificationController* _pushNotificationController;
	NSArray* _stations;
	NSArray* _userStations;
	RURadioPlaybackCoordinator* _playbackCoordinator;

}

@property (assign,nonatomic,__weak) id<RURadioDataSourceDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * featuredStations; 
@property (getter=isOptedInToRadio,nonatomic,readonly) char optedInToRadio; 
@property (nonatomic,retain) RURadioPlaybackCoordinator * playbackCoordinator;              //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,readonly) NSArray * stations; 
@property (nonatomic,readonly) NSArray * userStations; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isOptedInToRadio;
-(id)initWithEntityType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RURadioDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id<RURadioDataSourceDelegate>)delegate;
-(id)playbackContextForIndex:(unsigned)arg1 ;
-(void)_invalidateCalculatedEntities;
-(NSArray *)stations;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
-(char)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
-(id)entities;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(char)isOptedInToRadio;
-(RURadioPlaybackCoordinator *)playbackCoordinator;
-(void)synchronizeStationsAsAutomaticUpdate:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_deauthenticate;
-(void)_reloadOptedInToRadio;
-(void)refreshFeaturedStations;
-(void)deauthenticateIfNecessary;
-(void)_notifyAssistantOfStationChanges;
-(void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2 ;
-(void)checkAcceptedTermsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlaybackCoordinator:(RURadioPlaybackCoordinator *)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(NSArray *)featuredStations;
-(NSArray *)userStations;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end
