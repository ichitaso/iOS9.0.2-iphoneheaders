/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {

	void* _mrLanguageOptionGroup;

}

@property (nonatomic,readonly) NSArray * languageOptions; 
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * defaultLanguageOption; 
@property (nonatomic,readonly) char allowEmptySelection; 
@property (nonatomic,readonly) void* mrLanguageOptionGroup;                                         //@synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup - In the implementation block
-(NSArray *)languageOptions;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(char)arg3 ;
-(MPNowPlayingInfoLanguageOption *)defaultLanguageOption;
-(char)allowEmptySelection;
-(void*)mrLanguageOptionGroup;
-(void)dealloc;
@end
