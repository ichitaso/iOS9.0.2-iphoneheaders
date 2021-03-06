/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _atomic;
	char _shouldOnlySaveAssetContent;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	int _savePolicy;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;

}

@property (nonatomic,retain) NSArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) char atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (assign,nonatomic) int savePolicy;                                                //@synthesize savePolicy=_savePolicy - In the implementation block
@property (assign,nonatomic) char shouldOnlySaveAssetContent;                               //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                         //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setSavePolicy:(int)arg1 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(int)savePolicy;
-(NSData *)clientChangeTokenData;
-(char)shouldOnlySaveAssetContent;
-(char)atomic;
-(void)setAtomic:(char)arg1 ;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(void)setShouldOnlySaveAssetContent:(char)arg1 ;
@end

