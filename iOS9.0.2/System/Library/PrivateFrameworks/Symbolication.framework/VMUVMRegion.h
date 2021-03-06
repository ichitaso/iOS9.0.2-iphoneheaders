/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUVMRegion : NSObject {

	VMURange range;
	unsigned prot;
	unsigned maxProt;
	NSString* type;
	NSString* path;
	char summarized;
	unsigned char external_pager;
	unsigned char share_mode;
	int purgeable;
	unsigned virtual_pages;
	unsigned pages_resident;
	unsigned pages_shared_now_private;
	unsigned pages_swapped_out;
	unsigned pages_dirtied;
	unsigned ref_count;
	unsigned user_tag;
	unsigned object_id;
	unsigned nesting_depth;
	unsigned is_submap : 1;
	unsigned is_macho_region : 1;
	unsigned is_unused_data_region : 1;
	unsigned is_unused_data_page_shared_with_active_content : 1;
	unsigned reserved_flags : 28;
	unsigned mallocBlockCount;
	unsigned mallocTypeFlag;
	unsigned zone_index;
	unsigned coalesced_region_count;
	unsigned long long resident_size;
	unsigned long long shared_now_private_size;
	unsigned long long swapped_out_size;
	unsigned long long dirty_size;
	unsigned long long purgable_vol_size;
	unsigned long long purgable_non_vol_size;
	unsigned long long purgable_empty_size;

}
+(void)initialize;
+(id)columnHeadersWithOptions:(unsigned)arg1 maximumLength:(unsigned)arg2 memorySizeDivisor:(unsigned)arg3 hasFractionalPageSizes:(char)arg4 ;
+(id)columnHeadersWithOptions:(unsigned)arg1 maximumLength:(unsigned)arg2 ;
-(unsigned long long)address;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(id)type;
-(id)path;
-(VMURange)range;
-(unsigned)protection;
-(id)descriptionWithOptions:(unsigned)arg1 maximumLength:(unsigned)arg2 ;
-(id)breakAtLength:(unsigned long long)arg1 ;
-(void)addInfoFromRegion:(id)arg1 ;
-(char)hasSameInfoAsRegion:(id)arg1 ;
-(id)initWithVMRegionData:(VMUVMRegionData*)arg1 encodedVersion:(int)arg2 simpleSerializer:(id)arg3 ;
-(void)getVMRegionData:(VMUVMRegionData*)arg1 withSimpleSerializer:(id)arg2 ;
-(id)descriptionWithOptions:(unsigned)arg1 maximumLength:(unsigned)arg2 memorySizeDivisor:(unsigned)arg3 hasFractionalPageSizes:(char)arg4 ;
-(unsigned)maxProtection;
-(char)isSubmap;
@end

