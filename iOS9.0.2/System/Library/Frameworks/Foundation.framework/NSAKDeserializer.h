/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSAKDeserializer : NSObject {

	id ds;

}
-(id)deserializeNewData;
-(id)deserializeNewList;
-(id)deserializeNewPList;
-(id)deserializeNewString;
-(id)deserializeData:(id)arg1 ;
-(id)deserializeString:(id)arg1 ;
-(id)deserializeList:(id)arg1 ;
-(id)deserializeListItemIn:(id)arg1 at:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)deserializeNewObject;
-(id)deserializePList:(id)arg1 ;
-(id)deserializePListKeyIn:(id)arg1 ;
-(id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned)arg3 ;
-(id)deserializeNewKeyString;
-(id)initForDeserializerStream:(id)arg1 ;
-(id)deserializerStream;
-(void)dealloc;
@end
