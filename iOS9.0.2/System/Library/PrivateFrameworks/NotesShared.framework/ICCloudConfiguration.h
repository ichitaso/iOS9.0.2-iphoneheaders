/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject {

	ICCloudThrottlingPolicy* _throttlingPolicy;
	unsigned _maxInlineAssetSizeBytes;
	unsigned _maxAttachmentsPerNote;
	unsigned _resultsLimitPerSyncOperation;
	NSNumber* _maximumAttachmentSizeMB;
	NSString* _minimumClientVersion;
	NSTimer* _downloadTimer;
	double _pollingInterval;

}

@property (nonatomic,retain) ICCloudThrottlingPolicy * throttlingPolicy;              //@synthesize throttlingPolicy=_throttlingPolicy - In the implementation block
@property (assign,nonatomic) double pollingInterval;                                  //@synthesize pollingInterval=_pollingInterval - In the implementation block
@property (assign,nonatomic) unsigned maxInlineAssetSizeBytes;                        //@synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes - In the implementation block
@property (assign,nonatomic) unsigned maxAttachmentsPerNote;                          //@synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote - In the implementation block
@property (assign,nonatomic) unsigned resultsLimitPerSyncOperation;                   //@synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation - In the implementation block
@property (nonatomic,retain) NSNumber * maximumAttachmentSizeMB;                      //@synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB - In the implementation block
@property (nonatomic,copy) NSString * minimumClientVersion;                           //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (nonatomic,retain) NSTimer * downloadTimer;                                 //@synthesize downloadTimer=_downloadTimer - In the implementation block
+(id)sharedConfiguration;
+(id)availableConfigurationURLs;
+(void)setDefaultConfigurationURL:(id)arg1 ;
+(id)defaultConfigurationURL;
-(void)dealloc;
-(id)init;
-(unsigned)maxAttachmentsPerNote;
-(NSNumber *)maximumAttachmentSizeMB;
-(void)loadLocalConfigurationFile;
-(void)downloadRemoteConfiguration:(id)arg1 ;
-(void)setDownloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)downloadTimer;
-(void)loadConfigurationFromURL:(id)arg1 ;
-(void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setConfigurationFromDictionary:(id)arg1 ;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(void)setThrottlingPolicy:(ICCloudThrottlingPolicy *)arg1 ;
-(void)setMaxInlineAssetSizeBytes:(unsigned)arg1 ;
-(void)setMaxAttachmentsPerNote:(unsigned)arg1 ;
-(void)setPollingInterval:(double)arg1 ;
-(void)setMaximumAttachmentSizeMB:(NSNumber *)arg1 ;
-(void)setResultsLimitPerSyncOperation:(unsigned)arg1 ;
-(ICCloudThrottlingPolicy *)throttlingPolicy;
-(double)pollingInterval;
-(unsigned)maxInlineAssetSizeBytes;
-(unsigned)resultsLimitPerSyncOperation;
-(NSString *)minimumClientVersion;
@end

