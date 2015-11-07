/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface WebService : SQLiteEntity
+(id)webServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)webServicesInDatabase:(id)arg1 withPassType:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serviceURL:(id)arg3 ;
+(id)insertWebServiceWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
+(id)_insertionDictionaryWithPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)_updateDictionaryWithWebService:(id)arg1 ;
+(id)_propertySettersForWebService;
+(id)_predicateForPassType:(id)arg1 ;
+(id)_predicateForPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
-(void)updateWithLastDeletionDate:(id)arg1 ;
-(void)updateWithWebService:(id)arg1 ;
-(id)lastDeletionDate;
-(id)tagLastUpdateDate;
-(id)initWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
-(id)webService;
-(id)lastUpdatedTag;
@end
