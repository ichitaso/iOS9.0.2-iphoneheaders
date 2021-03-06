/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IMBloomFilter : NSObject <NSCoding> {

	/*^block*/id _hashProvider;
	SCD_Struct_IM26 _specification;
	SCD_Struct_IM33 _bitVector;

}

@property (readonly) NSString * usageDescription; 
-(id)initWithSpecification:(SCD_Struct_IM26)arg1 hashProvider:(/*^block*/id)arg2 ;
-(char)mightContainKey:(const void*)arg1 ;
-(int)indexSize;
-(NSString *)usageDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)addKey:(const void*)arg1 ;
@end

