/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MBSCacheStmt;

@interface MBSFileChangeEnumerator : NSEnumerator {

	MBSCacheStmt* _stmt;
	id _objects[64];
	int _count;
	int _next;
	long long _lastRowID;
	char _done;

}
+(id)enumeratorWithCache:(id)arg1 ;
-(id)_fileChangeFromStmt:(id)arg1 ;
-(void)_fetch;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_MB17*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithCache:(id)arg1 ;
@end

