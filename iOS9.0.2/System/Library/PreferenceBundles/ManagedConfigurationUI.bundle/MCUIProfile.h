/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCProfile, NSArray;

@interface MCUIProfile : NSObject {

	char _showManagedPayloads;
	int _finalInstallationWarningStyle;
	MCProfile* _profile;
	NSArray* _availableElevatedPayloadInfoTypes;
	NSArray* _accountSections;
	NSArray* _managedAppSections;
	NSArray* _managedBookSections;
	NSArray* _moreDetailsSections;
	NSArray* _restrictionSections;
	NSArray* _payloadInfoSectionSummaries;

}

@property (assign,nonatomic) char showManagedPayloads;                                   //@synthesize showManagedPayloads=_showManagedPayloads - In the implementation block
@property (assign,nonatomic) int finalInstallationWarningStyle;                          //@synthesize finalInstallationWarningStyle=_finalInstallationWarningStyle - In the implementation block
@property (nonatomic,readonly) MCProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSArray * availableElevatedPayloadInfoTypes;              //@synthesize availableElevatedPayloadInfoTypes=_availableElevatedPayloadInfoTypes - In the implementation block
@property (nonatomic,readonly) NSArray * accountSections;                                //@synthesize accountSections=_accountSections - In the implementation block
@property (nonatomic,readonly) NSArray * managedAppSections;                             //@synthesize managedAppSections=_managedAppSections - In the implementation block
@property (nonatomic,readonly) NSArray * managedBookSections;                            //@synthesize managedBookSections=_managedBookSections - In the implementation block
@property (nonatomic,readonly) NSArray * moreDetailsSections;                            //@synthesize moreDetailsSections=_moreDetailsSections - In the implementation block
@property (nonatomic,readonly) NSArray * restrictionSections;                            //@synthesize restrictionSections=_restrictionSections - In the implementation block
@property (nonatomic,readonly) NSArray * payloadInfoSectionSummaries;                    //@synthesize payloadInfoSectionSummaries=_payloadInfoSectionSummaries - In the implementation block
-(MCProfile *)profile;
-(void)dealloc;
-(void)_profileListChanged:(id)arg1 ;
-(id)initWithProfile:(id)arg1 managedPayloads:(char)arg2 ;
-(void)setShowManagedPayloads:(char)arg1 ;
-(NSArray *)availableElevatedPayloadInfoTypes;
-(NSArray *)moreDetailsSections;
-(int)numberOfManagedApps;
-(int)numberOfManagedBooks;
-(int)numberOfRestrictions;
-(void)setProfile:(id)arg1 managedPayloads:(char)arg2 ;
-(void)_managedAppsChanged:(id)arg1 ;
-(void)_managedBooksChanged:(id)arg1 ;
-(void)reloadProfile:(id)arg1 ;
-(char)isInstalledMDMProfile;
-(void)setFinalInstallationWarningStyle:(int)arg1 ;
-(char)showManagedPayloads;
-(id)_sortedPayloads:(id)arg1 ;
-(void)_determineAvailableElevatedPayloadInfoTypes;
-(NSArray *)managedAppSections;
-(NSArray *)managedBookSections;
-(NSArray *)accountSections;
-(int)_numberOfItemsInSectionsArray:(id)arg1 ;
-(NSArray *)restrictionSections;
-(char)managesAppID:(id)arg1 ;
-(char)managesBook:(id)arg1 ;
-(int)finalInstallationWarningStyle;
-(NSArray *)payloadInfoSectionSummaries;
-(int)numberOfAccounts;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(char)isMDMProfile;
@end
