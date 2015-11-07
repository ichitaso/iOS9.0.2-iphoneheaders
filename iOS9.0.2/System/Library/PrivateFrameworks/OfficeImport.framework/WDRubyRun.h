/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDCharacterRun.h>

@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {

	WDCharacterRun* mPhoneticRun;
	WDRubyProperties* mRubyProperties;

}
-(void)dealloc;
-(id)description;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(id)rubyProperties;
-(id)phoneticRun;
-(id)phoneticRunString;
-(void)setPhoneticRunString:(id)arg1 ;
-(void)appendPhoneticRunString:(id)arg1 ;
-(id)rubyBase;
@end
