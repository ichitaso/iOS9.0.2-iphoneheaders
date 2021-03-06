/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned offset;                            //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(id)decodeWithData:(id)arg1 ;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)candidateTypeToClassNameMap;
+(Class)classFromCandidateType:(int)arg1 ;
-(NSMutableData *)mutableData;
-(void)dealloc;
-(const char*)bytes;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(id)candidateResultSet;
-(const char*)currentPosition;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned long long)decodeUInt64;
-(unsigned char)decodeByte;
-(char)decodeBool;
-(void)encodeBool:(char)arg1 ;
-(id)decodeString;
-(void)encodeString:(id)arg1 ;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeUInt32:(unsigned)arg1 ;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)decodeCandidate;
-(unsigned)decodeUInt32;
-(id)decodeStringArray;
-(void)encodeShort:(unsigned short)arg1 ;
-(unsigned short)decodeShort;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)initForEncoding;
-(void)setMutableData:(NSMutableData *)arg1 ;
-(void)encodeStringArray:(id)arg1 ;
-(void)encodePointerValueArray:(id)arg1 ;
-(id)decodePointerValueArray;
@end

