/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AELibraryMgr.h>
#import <iBooks/IMOperationDelegate.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, BKSortOrderMigrator, NSDictionary, BKLibraryPlist, NSString;

@interface BKLibrary : NSObject <AELibraryMgr, IMOperationDelegate> {

	NSOperationQueue* _reloadOperationQueue;
	NSObject*<OS_dispatch_queue> _clearDiskCacheQueue;
	NSObject*<OS_dispatch_queue> _clearImageCacheQueue;
	NSObject*<OS_dispatch_queue> _deleteObjectsQueue;
	BKSortOrderMigrator* _sortOrderMigrator;
	NSObject*<OS_dispatch_queue> _reloadFlagsQueue;
	unsigned _reloadFlags;
	unsigned _libraryLoadDeleteDetectionBlockLevel;
	NSDictionary* _prefetchedDatabaseKeySortKeys;
	char _collectionBackupProcessed;
	BKLibraryPlist* _booksPlist;
	BKLibraryPlist* _purchasesPlist;
	BKLibraryPlist* _managedBooksPlist;

}

@property (nonatomic,retain) BKLibraryPlist * booksPlist;                     //@synthesize booksPlist=_booksPlist - In the implementation block
@property (nonatomic,retain) BKLibraryPlist * purchasesPlist;                 //@synthesize purchasesPlist=_purchasesPlist - In the implementation block
@property (nonatomic,retain) BKLibraryPlist * managedBooksPlist;              //@synthesize managedBooksPlist=_managedBooksPlist - In the implementation block
@property (assign,nonatomic) char collectionBackupProcessed;                  //@synthesize collectionBackupProcessed=_collectionBackupProcessed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookWithAssetURL:(id)arg1 moc:(id)arg2 ;
+(id)managedBooksChangedNotification;
+(id)PurchasesDirectory;
+(char)isDirectoryFileName:(id)arg1 ;
+(id)bookWithDatabaseKey:(id)arg1 contentType:(int)arg2 moc:(id)arg3 ;
+(id)removeUnauthorizedFamilyContentNotification;
+(id)BooksDirectory;
+(id)ManagedBooksDirectory;
+(id)libraryCollectionsChangedNotification;
+(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 moc:(id)arg4 currentBookInfo:(id)arg5 ;
+(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 moc:(id)arg4 ;
+(id)bookSyncBeganNotification;
+(id)bookSyncFinishedNotification;
+(id)libraryPlistChangedNotification;
+(void)setLocalLibrary:(id)arg1 ;
+(id)localLibrary;
-(void)forceUpdateBookUpdateCount;
-(void)forceUpdateSeriesData;
-(void)successPurchase:(id)arg1 ;
-(id)valueForKey:(id)arg1 forAssetAtURL:(id)arg2 ;
-(void)addDownload:(id)arg1 notifyPurchaseAnimator:(id)arg2 ;
-(void)failPurchase:(id)arg1 ;
-(void)significantCollectionChange;
-(void)deleteBooksByObjectID:(id)arg1 removeFromCloud:(char)arg2 ;
-(void)resetIsNew:(id)arg1 ;
-(void)resetHighwaterMarks:(id)arg1 ;
-(void)resetSeriesFlags:(id)arg1 ;
-(id)reloadOperationQueue;
-(void)triggerLibraryReloadWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateBookEpubIdFieldStoppingAfter:(id)arg1 ;
-(id)objectIdFromStoreId:(id)arg1 moc:(id)arg2 ;
-(id)objectIdFromTemporaryItemIdentifier:(id)arg1 moc:(id)arg2 ;
-(id)objectIdFromStoreId:(id)arg1 ;
-(void)appendBooksToPurchases:(id)arg1 ;
-(void)prefetchPreExistingSortKeyForDatabaseKeys:(id)arg1 moc:(id)arg2 ;
-(void)patchBookWithPreExistingSortKey:(id)arg1 ;
-(void)airTrafficControllerDidChangeUpdates:(id)arg1 ;
-(void)airTrafficControllerSyncDidFinish:(id)arg1 ;
-(void)downloadQueueControllerNeedsReload:(id)arg1 ;
-(void)atcSyncFinished:(id)arg1 ;
-(void)somePlistWasUpdated:(id)arg1 ;
-(void)mediaLibraryChanged:(id)arg1 ;
-(void)jaliscoStatusChanged:(id)arg1 ;
-(void)managedBooksChanged:(id)arg1 ;
-(void)removeUnauthorizedFamilyContent:(id)arg1 ;
-(void)_mocSaved:(id)arg1 ;
-(void)jaliscoItemsChanged:(id)arg1 ;
-(void)seriesItemsChanged:(id)arg1 ;
-(id)initWithBooksPlist:(id)arg1 purchasesPlist:(id)arg2 managedBooksPlist:(id)arg3 ;
-(void)scheduleLibraryReload:(unsigned)arg1 ;
-(unsigned)cancelLibraryReload;
-(void)cancelReprocessingByClass:(Class)arg1 ;
-(void)deleteBooksByObjectID:(id)arg1 removeFromCloud:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)existingReloadOperationQueue;
-(BKLibraryPlist *)purchasesPlist;
-(BKLibraryPlist *)booksPlist;
-(BKLibraryPlist *)managedBooksPlist;
-(void)resetSeriesContainers;
-(void)kickSeriesManager;
-(void)triggerCloudSync:(char)arg1 ;
-(void)scheduleLibraryReload:(unsigned)arg1 fastTrack:(char)arg2 ;
-(void)postReloadCleanup;
-(void)moveFileURLsToTrash:(id)arg1 destroyCloudDocuments:(char)arg2 ;
-(id)trashRepository;
-(id)metadataForAssetAtURL:(id)arg1 ;
-(void)moveFileURLsToTrash:(id)arg1 ;
-(void)airTrafficControllerDidStart:(id)arg1 ;
-(id)purchasesPlistPath;
-(id)booksPlistPath;
-(id)managedBooksPlistPath;
-(id)objectIdFromTemporaryItemIdentifier:(id)arg1 ;
-(void)reducePreExistingSortKeyCache;
-(void)updateBookUpdateCount;
-(void)updateSeriesData;
-(void)setValue:(id)arg1 forKey:(id)arg2 forAssetAtURL:(id)arg3 ;
-(char)collectionBackupProcessed;
-(void)setCollectionBackupProcessed:(char)arg1 ;
-(void)setBooksPlist:(BKLibraryPlist *)arg1 ;
-(void)setPurchasesPlist:(BKLibraryPlist *)arg1 ;
-(void)setManagedBooksPlist:(BKLibraryPlist *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addDownload:(id)arg1 ;
-(void)emptyTrash;
-(char)isProcessing;
-(void)operationFinished:(id)arg1 ;
@end

