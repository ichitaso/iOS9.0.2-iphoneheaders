/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(char)_removeAccounts:(id)arg1 ;
-(char)removeSMTPAccountsThatShouldBeDynamic;
-(char)_saveAccounts:(id)arg1 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)dealloc;
-(id)init;
-(id)dataClassName;
-(id)initWithAccountStore:(id)arg1 ;
-(char)performMigration;
@end
