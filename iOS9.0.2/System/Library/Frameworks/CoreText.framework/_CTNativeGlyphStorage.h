/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage {

	const int* _attachCounts;
	const CGPoint* _origins;
	unsigned _retainCount;
	GlyphStack* _stack;
	long _capacity;
	void* _preallocatedStorage;

}
+(id)newWithCount:(long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long)arg2 ;
-(void)initGlyphStackWithCapacity:(long)arg1 ;
-(void)pushGlyphAtIndex:(long)arg1 ;
-(void)popGlyphAtIndex:(long)arg1 ;
-(long)attachmentCountAtIndex:(long)arg1 ;
-(CGPoint)originAtIndex:(long)arg1 ;
-(void)setStringIndex:(long)arg1 atIndex:(long)arg2 ;
-(void)setAttachmentCount:(long)arg1 atIndex:(long)arg2 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long)arg2 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long)arg2 ;
-(void)prepareWithCapacity:(long)arg1 preallocated:(BOOL)arg2 ;
-(const int*)stringIndices;
-(id)initWithCount:(long)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(char)_isDeallocating;
-(char)_tryRetain;
-(void)finalize;
-(void)setCapacity:(long)arg1 ;
@end

