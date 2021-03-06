/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableArray, NSArray;

@interface NSTextStorage : NSMutableAttributedString {

	NSRange _editedRange;
	int _editedDelta;
	struct {
		unsigned editedMask : 8;
		unsigned postWillProcess : 1;
		unsigned postDidProcess : 1;
		unsigned  : 6;
		unsigned disabled : 16;
	}  _flags;
	NSMutableArray* _layoutManagers;
	id _sideData;

}

@property (nonatomic,copy,readonly) NSArray * layoutManagers; 
@property (nonatomic,readonly) unsigned editedMask; 
@property (nonatomic,readonly) NSRange editedRange; 
@property (nonatomic,readonly) int changeInLength; 
@property (assign,nonatomic) id<NSTextStorageDelegate> delegate; 
@property (nonatomic,readonly) char fixesAttributesLazily; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)_undoRedoTextOperation:(id)arg1 ;
-(id)_undoRedoAttributedSubstringFromRange:(NSRange)arg1 ;
-(void)edited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NSTextStorageDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NSTextStorageDelegate>)delegate;
-(Class)classForCoder;
-(void)addLayoutManager:(id)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(void)coordinateEditing:(/*^block*/id)arg1 ;
-(void)_setUsesSimpleTextEffects:(char)arg1 ;
-(char)_usesSimpleTextEffects;
-(char)_shouldSetOriginalFontAttribute;
-(void)coordinateReading:(/*^block*/id)arg1 ;
-(unsigned)editedMask;
-(NSRange)editedRange;
-(void)removeLayoutManager:(id)arg1 ;
-(void)invalidateAttributesInRange:(NSRange)arg1 ;
-(int)changeInLength;
-(NSArray *)layoutManagers;
-(void)processEditing;
-(void)finalize;
-(id)cuiCatalog;
-(id)cuiStyleEffects;
-(char)_isEditing;
-(char)_lockForReading;
-(void)_unlock;
-(void)_setForceFixAttributes:(char)arg1 ;
-(char)_lockForWriting;
-(char)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(char)arg1 ;
-(void)_notifyEdited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3 invalidatedRange:(NSRange)arg4 ;
-(void)fontSetChanged;
-(void)_setEditedRange:(NSRange)arg1 ;
-(char)_lockForWritingWithExceptionHandler:(char)arg1 ;
-(char)fixesAttributesLazily;
-(NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)arg1 ;
-(char)_forceFixAttributes;
-(void)setEditedMask:(unsigned)arg1 ;
-(void)ensureAttributesAreFixedInRange:(NSRange)arg1 ;
@end

