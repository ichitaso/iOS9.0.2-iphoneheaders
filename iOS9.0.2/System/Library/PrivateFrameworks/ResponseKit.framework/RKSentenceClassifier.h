/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSValue;

@interface RKSentenceClassifier : NSObject {

	char _sentenceIsTerminated;
	char _sentenceIsAllSymbols;
	char _sentenceHasQuestionTerminator;
	char _sentenceHasAlternativeConjunction;
	NSString* _sentenceStringOriginal;
	NSString* _sentenceString;
	NSArray* _sentenceEntities;
	NSValue* _sentenceTag;
	NSArray* _inversions;
	NSArray* _interrogatives;
	NSArray* _choiceDelimiters;
	NSArray* _alternatives;
	NSArray* _appreciations;
	NSArray* _dataDetected;
	NSString* _RKLinguisticTagDataDetected;

}

@property (retain) NSString * sentenceStringOriginal;                   //@synthesize sentenceStringOriginal=_sentenceStringOriginal - In the implementation block
@property (retain) NSString * sentenceString;                           //@synthesize sentenceString=_sentenceString - In the implementation block
@property (retain) NSArray * sentenceEntities;                          //@synthesize sentenceEntities=_sentenceEntities - In the implementation block
@property (assign) char sentenceIsTerminated;                           //@synthesize sentenceIsTerminated=_sentenceIsTerminated - In the implementation block
@property (assign) char sentenceIsAllSymbols;                           //@synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols - In the implementation block
@property (assign) char sentenceHasQuestionTerminator;                  //@synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator - In the implementation block
@property (assign) char sentenceHasAlternativeConjunction;              //@synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction - In the implementation block
@property (retain) NSValue * sentenceTag;                               //@synthesize sentenceTag=_sentenceTag - In the implementation block
@property (retain) NSArray * inversions;                                //@synthesize inversions=_inversions - In the implementation block
@property (retain) NSArray * interrogatives;                            //@synthesize interrogatives=_interrogatives - In the implementation block
@property (retain) NSArray * choiceDelimiters;                          //@synthesize choiceDelimiters=_choiceDelimiters - In the implementation block
@property (retain) NSArray * alternatives;                              //@synthesize alternatives=_alternatives - In the implementation block
@property (retain) NSArray * appreciations;                             //@synthesize appreciations=_appreciations - In the implementation block
@property (retain) NSArray * dataDetected;                              //@synthesize dataDetected=_dataDetected - In the implementation block
@property (retain) NSString * RKLinguisticTagDataDetected;              //@synthesize RKLinguisticTagDataDetected=_RKLinguisticTagDataDetected - In the implementation block
@property (readonly) NSArray * alternativeConjunctions; 
+(char)canClassifyLanguageIdentifier:(id)arg1 ;
+(id)languageIdentifierFromClassName;
+(Class)subclassForLanguageIdentifier:(id)arg1 ;
+(Class)subclassForLocale:(id)arg1 ;
+(id)lexicalEntitiesFromString:(id)arg1 ;
+(id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1 ;
+(id)polarTagRegularExpressionForLanguage:(id)arg1 ;
+(id)categoryKeywordMapForLanguage:(id)arg1 ;
+(id)appreciationKeywordsForLanguage:(id)arg1 ;
+(id)alternativeInversionsForLanguage:(id)arg1 ;
+(id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2 ;
+(id)stringFromLexicalEntities:(id)arg1 ;
+(id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned)arg3 ;
-(id)languageIdentifier;
-(NSArray *)alternatives;
-(void)analyzeSentence;
-(void)setInversions:(NSArray *)arg1 ;
-(NSArray *)sentenceEntities;
-(NSArray *)inversions;
-(id)classifySentence;
-(NSArray *)interrogatives;
-(char)sentenceHasQuestionTerminator;
-(NSArray *)alternativeConjunctions;
-(id)addSentenceTerminatorQuestion:(id)arg1 ;
-(NSString *)sentenceString;
-(id)sentenceClassification:(id)arg1 options:(unsigned)arg2 ;
-(void)setSentenceString:(NSString *)arg1 ;
-(void)setSentenceStringOriginal:(NSString *)arg1 ;
-(void)setSentenceEntities:(NSArray *)arg1 ;
-(void)setSentenceIsTerminated:(char)arg1 ;
-(void)setSentenceHasQuestionTerminator:(char)arg1 ;
-(char)sentenceIsTerminated;
-(NSString *)sentenceStringOriginal;
-(void)setSentenceIsAllSymbols:(char)arg1 ;
-(void)setSentenceTag:(NSValue *)arg1 ;
-(void)setInterrogatives:(NSArray *)arg1 ;
-(void)setDataDetected:(NSArray *)arg1 ;
-(void)setChoiceDelimiters:(NSArray *)arg1 ;
-(void)setSentenceHasAlternativeConjunction:(char)arg1 ;
-(char)sentenceHasAlternativeConjunction;
-(NSArray *)dataDetected;
-(NSArray *)choiceDelimiters;
-(void)setAlternatives:(NSArray *)arg1 ;
-(char)isLexicalClassAvailable;
-(void)setAppreciations:(NSArray *)arg1 ;
-(NSArray *)appreciations;
-(char)sentenceIsAllSymbols;
-(NSValue *)sentenceTag;
-(NSString *)RKLinguisticTagDataDetected;
-(void)setRKLinguisticTagDataDetected:(NSString *)arg1 ;
@end
