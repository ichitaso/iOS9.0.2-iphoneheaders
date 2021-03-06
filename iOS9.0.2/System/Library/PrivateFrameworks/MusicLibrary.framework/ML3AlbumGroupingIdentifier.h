/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	char _compilation;
	NSData* _groupingKey;
	NSString* _feedURL;
	int _seasonNumber;
	long long _albumArtistPersistentID;

}

@property (nonatomic,readonly) long long albumArtistPersistentID;              //@synthesize albumArtistPersistentID=_albumArtistPersistentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                           //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                             //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) int seasonNumber;                               //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) char compilation;                               //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,readonly) NSData * keyValue; 
-(long long)albumArtistPersistentID;
-(int)seasonNumber;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)compilation;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(int)arg4 compilation:(char)arg5 ;
-(NSData *)groupingKey;
-(NSData *)keyValue;
-(NSString *)feedURL;
@end

