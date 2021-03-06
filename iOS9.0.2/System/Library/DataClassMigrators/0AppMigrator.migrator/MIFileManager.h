/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MIFileManager : NSObject
+(id)defaultManager;
-(char)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(char)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)itemDoesNotExistAtURL:(id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(char)arg2 error:(id*)arg3 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(char)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(char)arg3 error:(id*)arg4 ;
-(char)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(char)arg3 error:(id*)arg4 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(char)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(char)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)itemExistsAtURL:(id)arg1 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(char)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(char)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(char)standardizeOwnershipAndValidateSymlinksAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 error:(id*)arg4 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2 ;
-(char)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(char)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(char)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(char)arg3 failureIsFatal:(char)arg4 withError:(id*)arg5 ;
-(char)markBundleAsPlaceholder:(id)arg1 withError:(id*)arg2 ;
-(char)bundleAtURLIsPlaceholder:(id)arg1 ;
-(unsigned long long)diskUsageForURL:(id)arg1 ;
@end

