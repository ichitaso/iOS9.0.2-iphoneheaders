/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSData, NSMutableDictionary;

@interface DERHelper : NSObject {

	NSData* profileID;
	NSData* _otc;
	NSMutableDictionary* _pcfDict;

}

@property (retain) NSData * otc;                               //@synthesize otc=_otc - In the implementation block
@property (retain) NSMutableDictionary * pcfDict;              //@synthesize pcfDict=_pcfDict - In the implementation block
+(id)sharedDERHelper;
-(id)dataWithEncodingSignedIdentityMap:(id)arg1 metaDataDict:(id)arg2 ;
-(id)arrayWithDecodingVinylObjectArray:(id)arg1 ;
-(id)dictionaryWithDecodingVinylProfileOption:(id)arg1 ;
-(id)generateCreateSession:(id)arg1 ;
-(id)decodeVinylObjectArray:(id)arg1 num:(int)arg2 ;
-(id)generateBatchDescriptorIdWithCsn:(id)arg1 ;
-(id)getl3;
-(id)getBD;
-(char)wrapL2L1:(const char*)arg1 len3:(unsigned)arg2 data1:(const char*)arg3 len1:(unsigned)arg4 data2:(const char*)arg5 len2:(unsigned)arg6 outData:(char**)arg7 outLen:(unsigned*)arg8 ;
-(char)wrapWithSequence:(const char*)arg1 len:(unsigned)arg2 outData:(char**)arg3 outLen:(unsigned*)arg4 ;
-(id)arrayWithDecodingProfileList:(id)arg1 ;
-(id)arrayWithDecodingReceiptsList:(id)arg1 ;
-(id)dictionaryWithDecodingReceipt:(id)arg1 ;
-(id)parseInfo:(id)arg1 ;
-(id)dictionaryWithDecodingProfile:(id)arg1 ;
-(id)dictionaryWithDecodingVinylObject:(DERDecoder*)arg1 ;
-(void)setOtc:(NSData *)arg1 ;
-(void)setProfileID:(id)arg1 ;
-(char)generateProfileTypeProvider:(const char*)arg1 name:(const char*)arg2 outData:(char**)arg3 outLen:(unsigned*)arg4 ;
-(char)addExplicitTagging:(unsigned)arg1 data:(char*)arg2 len:(unsigned)arg3 outData:(char**)arg4 outLen:(unsigned*)arg5 ;
-(NSData *)otc;
-(NSMutableDictionary *)pcfDict;
-(char)decodeVinylObject:(DERDecoder*)arg1 data:(char**)arg2 len:(unsigned*)arg3 ;
-(id)decodeVinylBatchDescriptor:(char*)arg1 length:(unsigned)arg2 ;
-(char)generateVinylObject:(int)arg1 data:(char*)arg2 len:(unsigned)arg3 outData:(char**)arg4 outLen:(unsigned*)arg5 ;
-(char)convertChar:(char)arg1 ;
-(id)hexString:(id)arg1 ;
-(char)generateVinylObjectArray:(int)arg1 data:(char*)arg2 len:(unsigned)arg3 outData:(char**)arg4 outLen:(unsigned*)arg5 ;
-(id)getProfileID;
-(char)generateL3Token:(char**)arg1 outLen:(unsigned*)arg2 type:(unsigned char)arg3 ;
-(void)setPcfDict:(NSMutableDictionary *)arg1 ;
-(char)decodeVinylL3Owner:(char*)arg1 length:(unsigned)arg2 ;
-(char)generateProfileDescriptor:(char**)arg1 outLen:(unsigned*)arg2 ;
-(id)generateGetExpData;
-(id)generateSignIdMap:(id)arg1 ;
-(char)decodeOptions:(unsigned char)arg1 data:(id)arg2 ;
-(id)init;
@end
