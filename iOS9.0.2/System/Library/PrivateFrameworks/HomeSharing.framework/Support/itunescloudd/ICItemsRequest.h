/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICItemsRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(char)arg5 ;
-(id)_bodyDataForMetadataFilter:(id)arg1 queryFilter:(id)arg2 purchaseTokens:(id)arg3 includeHiddenItems:(char)arg4 ;
-(id)initWithDatabaseID:(unsigned)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(char)arg5 ;
-(double)timeoutInterval;
@end
