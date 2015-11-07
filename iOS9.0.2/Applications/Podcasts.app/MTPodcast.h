/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <Podcasts/IMMetricsDataSource.h>

@class NSString, NSSet;

@interface MTPodcast : NSManagedObject <IMMetricsDataSource>

@property (assign,nonatomic) char needsArtworkUpdate; 
@property (assign,nonatomic) char importing; 
@property (assign,nonatomic) char hasBeenSynced; 
@property (assign,nonatomic) char isExplicit; 
@property (getter=isDark,nonatomic,readonly) char dark; 
@property (getter=isPastFeedDark,nonatomic,readonly) char feedDark; 
@property (getter=isPastAutodownloadDark,nonatomic,readonly) char autodownloadDark; 
@property (assign,getter=isAuthenticatedDark,nonatomic) char authenticatedDark; 
@property (assign,nonatomic) char sortAscending; 
@property (assign,nonatomic) char playbackNewestToOldest; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double addedDate; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) int autoDownloadType; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) long long darkCount; 
@property (assign,nonatomic) long long darkCountLocal; 
@property (assign,nonatomic) long long deletePlayedEpisodes; 
@property (assign,nonatomic) double downloadedDate; 
@property (assign,nonatomic) long long episodeLimit; 
@property (nonatomic,retain) NSString * feedURL; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) char hidden; 
@property (nonatomic,retain) NSString * imageURL; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastTouchDate; 
@property (assign,nonatomic) char notifications; 
@property (assign,nonatomic) char orphanedFromCloud; 
@property (assign,nonatomic) long long podcastPID; 
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) char showPlacardForOrphanedFromCloud; 
@property (assign,nonatomic) char showPlacardForRemovePlayedEpisodes; 
@property (assign,nonatomic) char showPlacardForSavedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (assign,nonatomic) long long storeCollectionId; 
@property (nonatomic,retain) NSString * storeCleanURL; 
@property (nonatomic,retain) NSString * storeShortURL; 
@property (assign,nonatomic) double lastStoreEpisodesInfoCheckDate; 
@property (assign,nonatomic) double lastStorePodcastInfoCheckDate; 
@property (assign,nonatomic) char subscribed; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double updateAvg; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * updatedFeedURL; 
@property (assign,nonatomic) long long updateInterval; 
@property (assign,nonatomic) double updateStdDev; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * episodes; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) NSSet * playlistSettings; 
@property (nonatomic,readonly) char autoDownload; 
@property (assign,nonatomic) long long keepEpisodes; 
+(id)predicateForAllPodcasts;
+(id)podcastUuidForFeedUrl:(id)arg1 ;
+(id)userDefaultPropertiesAffectingPredicates;
+(long long)updateIntervalDefaultValue;
+(double)timeIntervalForUpdate:(long long)arg1 ;
+(long long)deletePlayedEpisodesDefaultValue;
+(long long)episodeLimitDefaultValue;
+(int)autoDownloadDefaultValue;
+(id)predicateForAutoDownloadType:(int)arg1 ;
+(id)predicateForUpdateInterval:(long long)arg1 ;
+(id)imageForPodcastUuid:(id)arg1 size:(CGSize)arg2 ;
+(id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(char)arg2 url:(id)arg3 title:(id)arg4 author:(id)arg5 provider:(id)arg6 category:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 ;
+(unsigned)totalUnplayedCount;
+(void)setRemovePlayedEpisodesSetting:(long long)arg1 forPodcastUuid:(id)arg2 ;
+(id)predicateForSubscribed:(char)arg1 ;
+(id)predicateForSubscribedAndNotHidden:(char)arg1 ;
+(id)predicateForOrphanedFromCloud:(char)arg1 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForUpdatablePodcasts;
+(id)predicateForExcludingExplicitBasedOnSetting;
+(id)predicateForPodcastWithFeedUrl:(id)arg1 ;
+(id)predicateForPodcastUUID:(id)arg1 ;
+(id)predicateForPodcastStoreId:(long long)arg1 ;
-(void)setNeedsArtworkUpdate:(char)arg1 ;
-(void)setOrphanedFromCloud:(char)arg1 ;
-(void)resetGoDark;
-(void)setLastDatePlayed:(double)arg1 ;
-(long long)episodeLimitResolvedValue;
-(char)deletePlayedEpisodesResolvedValue;
-(int)autoDownloadResolvedValue;
-(void)markPlaylistsForUpdate;
-(id)artworkImageWithSize:(CGSize)arg1 ;
-(id)metricsContentIdentifier;
-(id)metricsAdditionalData;
-(void)updateLastTouchDate;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(void)setPlaybackNewestToOldest:(char)arg1 ;
-(void)setSortAscending:(char)arg1 ;
-(void)updateEpisodesMetadataIdentifiers;
-(void)_setFlag:(long long)arg1 state:(char)arg2 ;
-(char)_stateForFlag:(long long)arg1 ;
-(id)bestAvailableStoreCleanURL;
-(id)bestAvailableFeedURL;
-(char)isAuthenticatedDark;
-(char)isPastAutodownloadDark;
-(char)isPastFeedDark;
-(int)darkCountLimit;
-(char)sortAscending;
-(char)playbackNewestToOldest;
-(id)mostRecentlyPlayedEpisode;
-(id)userEpisodeAfterEpisode:(id)arg1 ;
-(id)_episodeAfterEpisode:(id)arg1 restrictToUserEpisodes:(char)arg2 ;
-(id)sortDescriptorsForPlayOrder;
-(id)_latestOrOldestEpisode:(char)arg1 restrictToUserEpisodes:(char)arg2 excludePlayed:(char)arg3 ;
-(id)countOfAudioEpisodes;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(char)needsArtworkUpdate;
-(void)setHasBeenSynced:(char)arg1 ;
-(char)hasBeenSynced;
-(void)setImporting:(char)arg1 ;
-(char)importing;
-(char)autodownloadDefault;
-(id)twitterShareURL;
-(char)isDark;
-(void)setAuthenticatedDark:(char)arg1 ;
-(id)sortDescriptorsForSortOrder;
-(id)episodeToResume;
-(id)episodeAfterEpisode:(id)arg1 ;
-(id)firstUserEpisodeNotPlayed;
-(id)newestEpisode;
-(id)newestEpisodeNotPlayed;
-(id)newestUserEpisode;
-(id)newestUserEpisodeNotPlayed;
-(id)oldestEpisode;
-(id)oldestEpisodeNotPlayed;
-(id)oldestUserEpisode;
-(id)oldestUserEpisodeNotPlayed;
-(id)countOfNewEpisodes;
-(id)countOfUnplayedEpisodes;
-(id)dateOfNewestEpisode;
-(char)isVideoPodcast;
-(void)setTitle:(NSString *)arg1 ;
-(id)colorTheme;
-(id)shareURL;
-(void)setIsExplicit:(char)arg1 ;
-(char)isExplicit;
-(void)setSubscribed:(char)arg1 ;
@end
