/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@interface BKFairPlay : NSObject
+(id)decryptedDataForFile:(id)arg1 contextManager:(IMFairPlayContextManagerRef)arg2 sinfData:(id)arg3 refetch:(char*)arg4 error:(id*)arg5 ;
+(id)decryptedDataForFile:(id)arg1 sinfData:(id)arg2 refetch:(char*)arg3 error:(id*)arg4 ;
+(id)validateSinfData:(id)arg1 ;
+(void)refetchBagForAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)clearCachedInfoForBookWithSinfDatas:(id)arg1 ;
+(id)decryptionSessionForSinfData:(id)arg1 ;
+(unsigned)poisonPadding;
+(void)prewarm;
+(IMFairPlayContextManagerRef)contextManager;
@end
