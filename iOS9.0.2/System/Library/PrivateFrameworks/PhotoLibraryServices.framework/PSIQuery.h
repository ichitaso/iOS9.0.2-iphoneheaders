/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PSIDatabase, NSObject, NSString;

@interface PSIQuery : NSObject {

	PSIDatabase* _idx;
	NSObject*<OS_dispatch_queue> _syncQueue;
	/*^block*/id _earlyNotificationHandler;
	char _didStart;
	char _isCanceled;
	char _isWildcardQuery;
	NSString* _searchText;
	int _queryId;

}

@property (nonatomic,copy,readonly) NSString * searchText;              //@synthesize searchText=_searchText - In the implementation block
@property (getter=isCanceled,readonly) char canceled; 
@property (nonatomic,readonly) int queryId;                             //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) char isWildcardQuery;                    //@synthesize isWildcardQuery=_isWildcardQuery - In the implementation block
-(void)setEarlyResultsNotificationHandler:(/*^block*/id)arg1 ;
-(void)runWithResultsHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)searchText;
-(char)isCanceled;
-(id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3 isWildcardQuery:(char)arg4 ;
-(int)queryId;
-(char)isWildcardQuery;
@end
