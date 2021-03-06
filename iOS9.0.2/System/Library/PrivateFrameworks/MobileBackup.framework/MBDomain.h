/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary;

@interface MBDomain : NSObject {

	int _fileDescriptor;
	int _fileDescriptorRefCount;
	char _shouldDigest;
	char _hasExternalConfig;
	char _isExternalConfig;
	char _shouldRestoreRelativeSymlinks;
	NSString* _rootPath;
	NSString* _name;
	NSSet* _relativePathsToBackupAndRestore;
	NSSet* _relativePathsNotToBackup;
	NSSet* _relativePathsNotToBackupToDrive;
	NSSet* _relativePathsNotToBackupToService;
	NSSet* _relativePathsToOnlyBackupEncrypted;
	NSSet* _relativePathsNotToCheckIfModifiedDuringBackup;
	NSSet* _relativePathsToRestoreOnly;
	NSSet* _relativePathsToRestoreOnlyFromService;
	NSSet* _relativePathsToRemoveOnRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
	NSSet* _relativePathsNotToRestore;
	NSSet* _relativePathsNotToMigrate;
	NSSet* _relativePathsNotToRestoreToIPods;
	NSSet* _relativePathsNotToBackupAndRestoreToAppleTVs;
	NSSet* _relativePathsToBackgroundRestore;
	NSSet* _relativePathsNotToRemoveIfNotRestored;
	NSSet* _relativePathsToBackupIgnoringProtectionClass;
	NSDictionary* _relativePathAggregateDictionaryGroups;
	NSDictionary* _relativePathDomainRedirects;
	NSString* _relativePathToAppPlaceholderInfoPlist;

}

@property (nonatomic,readonly) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                                                  //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSSet * relativePathsToBackup; 
@property (nonatomic,retain) NSSet * relativePathsToBackupAndRestore;                                //@synthesize relativePathsToBackupAndRestore=_relativePathsToBackupAndRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackup;                                       //@synthesize relativePathsNotToBackup=_relativePathsNotToBackup - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToDrive;                                //@synthesize relativePathsNotToBackupToDrive=_relativePathsNotToBackupToDrive - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToService;                              //@synthesize relativePathsNotToBackupToService=_relativePathsNotToBackupToService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToOnlyBackupEncrypted;                             //@synthesize relativePathsToOnlyBackupEncrypted=_relativePathsToOnlyBackupEncrypted - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;                  //@synthesize relativePathsNotToCheckIfModifiedDuringBackup=_relativePathsNotToCheckIfModifiedDuringBackup - In the implementation block
@property (nonatomic,readonly) NSSet * relativePathsToRestore; 
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnly;                                     //@synthesize relativePathsToRestoreOnly=_relativePathsToRestoreOnly - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnlyFromService;                          //@synthesize relativePathsToRestoreOnlyFromService=_relativePathsToRestoreOnlyFromService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRemoveOnRestore;                                 //@synthesize relativePathsToRemoveOnRestore=_relativePathsToRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;                      //@synthesize relativePathsOfSystemFilesToAlwaysRestore=_relativePathsOfSystemFilesToAlwaysRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRemoveOnRestore;              //@synthesize relativePathsOfSystemFilesToAlwaysRemoveOnRestore=_relativePathsOfSystemFilesToAlwaysRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestore;                                      //@synthesize relativePathsNotToRestore=_relativePathsNotToRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToMigrate;                                      //@synthesize relativePathsNotToMigrate=_relativePathsNotToMigrate - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestoreToIPods;                               //@synthesize relativePathsNotToRestoreToIPods=_relativePathsNotToRestoreToIPods - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupAndRestoreToAppleTVs;                   //@synthesize relativePathsNotToBackupAndRestoreToAppleTVs=_relativePathsNotToBackupAndRestoreToAppleTVs - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackgroundRestore;                               //@synthesize relativePathsToBackgroundRestore=_relativePathsToBackgroundRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRemoveIfNotRestored;                          //@synthesize relativePathsNotToRemoveIfNotRestored=_relativePathsNotToRemoveIfNotRestored - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackupIgnoringProtectionClass;                   //@synthesize relativePathsToBackupIgnoringProtectionClass=_relativePathsToBackupIgnoringProtectionClass - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathAggregateDictionaryGroups;                   //@synthesize relativePathAggregateDictionaryGroups=_relativePathAggregateDictionaryGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathDomainRedirects;                             //@synthesize relativePathDomainRedirects=_relativePathDomainRedirects - In the implementation block
@property (nonatomic,retain) NSString * relativePathToAppPlaceholderInfoPlist;                       //@synthesize relativePathToAppPlaceholderInfoPlist=_relativePathToAppPlaceholderInfoPlist - In the implementation block
@property (assign,nonatomic) char shouldDigest;                                                      //@synthesize shouldDigest=_shouldDigest - In the implementation block
@property (assign,nonatomic) char hasExternalConfig;                                                 //@synthesize hasExternalConfig=_hasExternalConfig - In the implementation block
@property (assign,nonatomic) char isExternalConfig;                                                  //@synthesize isExternalConfig=_isExternalConfig - In the implementation block
@property (assign,nonatomic) char shouldRestoreRelativeSymlinks;                                     //@synthesize shouldRestoreRelativeSymlinks=_shouldRestoreRelativeSymlinks - In the implementation block
@property (getter=isAppDomain,nonatomic,readonly) char appDomain; 
@property (getter=isPlaceholderAppDomain,nonatomic,readonly) char placeholderAppDomain; 
@property (getter=isPluginAppDomain,nonatomic,readonly) char pluginAppDomain; 
@property (getter=isGroupAppDomain,nonatomic,readonly) char groupAppDomain; 
@property (getter=isUninstalledAppDomain,nonatomic,readonly) char installedAppDomain; 
@property (nonatomic,readonly) char hasRootPath; 
+(double)systemDomainsVersion;
+(double)systemDomainsMinSupportedVersion;
+(double)systemDomainsMaxSupportedVersion;
+(id)nameWithAppID:(id)arg1 ;
+(id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2 ;
+(double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2 ;
+(void)_loadSystemDomains;
+(char)isAppPluginName:(id)arg1 ;
+(char)isAppGroupName:(id)arg1 ;
+(id)domainWithName:(id)arg1 rootPath:(id)arg2 ;
+(char)shouldRestoreRelativeSymlinksForDomainName:(id)arg1 ;
+(char)_boolFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_relativePathsByAddingSQLiteJournals:(id)arg1 ;
+(id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2 ;
+(char)isContainerName:(id)arg1 ;
+(char)isAppPlaceholderName:(id)arg1 ;
+(id)containerIDWithName:(id)arg1 ;
+(id)systemDomains;
+(id)systemDomainsByName;
+(char)isSystemName:(id)arg1 ;
+(int)containerTypeWithName:(id)arg1 ;
+(id)placeholderNameWithAppID:(id)arg1 ;
+(id)appDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appPlaceholderDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appPluginDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
+(id)appGroupDomainWithIdentifier:(id)arg1 rootPath:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(int)compare:(id)arg1 ;
-(int)containerType;
-(NSString *)containerID;
-(char)isAppDomain;
-(NSString *)rootPath;
-(id)initWithName:(id)arg1 plist:(id)arg2 ;
-(id)initWithName:(id)arg1 rootPath:(id)arg2 ;
-(char)loadSystemDomainFromPlist:(id)arg1 ;
-(char)loadDomainFromExternalPlist:(id)arg1 ;
-(void)_simulateCrashWithMessage:(id)arg1 ;
-(char)isEqualToDomain:(id)arg1 ;
-(char)isPluginAppDomain;
-(char)isGroupAppDomain;
-(void)_releaseFileDescriptor;
-(NSSet *)relativePathsToBackup;
-(NSSet *)relativePathsToRestore;
-(char)isPlaceholderAppDomain;
-(char)isUninstalledAppDomain;
-(char)hasRootPath;
-(NSSet *)relativePathsToBackupAndRestore;
-(void)setRelativePathsToBackupAndRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackup;
-(void)setRelativePathsNotToBackup:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupToDrive;
-(void)setRelativePathsNotToBackupToDrive:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupToService;
-(void)setRelativePathsNotToBackupToService:(NSSet *)arg1 ;
-(NSSet *)relativePathsToOnlyBackupEncrypted;
-(void)setRelativePathsToOnlyBackupEncrypted:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToCheckIfModifiedDuringBackup;
-(void)setRelativePathsNotToCheckIfModifiedDuringBackup:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRestoreOnly;
-(void)setRelativePathsToRestoreOnly:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRestoreOnlyFromService;
-(void)setRelativePathsToRestoreOnlyFromService:(NSSet *)arg1 ;
-(NSSet *)relativePathsToRemoveOnRestore;
-(void)setRelativePathsToRemoveOnRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsOfSystemFilesToAlwaysRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRemoveOnRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRestore;
-(void)setRelativePathsNotToRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToMigrate;
-(void)setRelativePathsNotToMigrate:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRestoreToIPods;
-(void)setRelativePathsNotToRestoreToIPods:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToBackupAndRestoreToAppleTVs;
-(void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(NSSet *)arg1 ;
-(NSSet *)relativePathsToBackgroundRestore;
-(void)setRelativePathsToBackgroundRestore:(NSSet *)arg1 ;
-(NSSet *)relativePathsNotToRemoveIfNotRestored;
-(void)setRelativePathsNotToRemoveIfNotRestored:(NSSet *)arg1 ;
-(NSSet *)relativePathsToBackupIgnoringProtectionClass;
-(void)setRelativePathsToBackupIgnoringProtectionClass:(NSSet *)arg1 ;
-(NSDictionary *)relativePathAggregateDictionaryGroups;
-(void)setRelativePathAggregateDictionaryGroups:(NSDictionary *)arg1 ;
-(NSDictionary *)relativePathDomainRedirects;
-(void)setRelativePathDomainRedirects:(NSDictionary *)arg1 ;
-(NSString *)relativePathToAppPlaceholderInfoPlist;
-(void)setRelativePathToAppPlaceholderInfoPlist:(NSString *)arg1 ;
-(char)shouldDigest;
-(void)setShouldDigest:(char)arg1 ;
-(char)hasExternalConfig;
-(void)setHasExternalConfig:(char)arg1 ;
-(char)isExternalConfig;
-(void)setIsExternalConfig:(char)arg1 ;
-(char)shouldRestoreRelativeSymlinks;
-(void)setShouldRestoreRelativeSymlinks:(char)arg1 ;
-(int)fileDescriptor;
@end

