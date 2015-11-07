/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCDirectoryItem, BRCDocumentItem, BRCLocalContainer, NSString, BRCItemID;

@interface BRCAliasItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCLocalContainer * targetLocalContainer; 
@property (nonatomic,readonly) NSString * targetContainerID; 
@property (nonatomic,readonly) BRCItemID * targetItemID; 
-(char)isAlias;
-(BRCAliasItem *)asAlias;
-(BRCItemID *)targetItemID;
-(BRCLocalContainer *)targetLocalContainer;
-(NSString *)targetContainerID;
-(char)changedAtRelativePath:(id)arg1 scanPackage:(char)arg2 ;
-(char)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(char)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(void)learnTarget:(id)arg1 ;
-(void)rewriteAliasOnDiskWithTarget:(id)arg1 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(char)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2 ;
-(char)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(char)arg2 ;
-(void)serverDidAckAliasTargetDeletion;
-(id)structureRecordBeingDeadInServerTruth:(char)arg1 stageID:(id)arg2 ;
-(id)targetReference;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
@end
