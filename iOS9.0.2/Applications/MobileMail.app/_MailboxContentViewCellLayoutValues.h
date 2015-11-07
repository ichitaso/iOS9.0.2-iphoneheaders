/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont;

@interface _MailboxContentViewCellLayoutValues : NSObject {

	UIFont* _addressFont;
	UIFont* _dateFont;
	UIFont* _subjectFont;
	UIFont* _summaryFont;
	UIFont* _mailboxFont;
	float _compactRowHeight;
	float _defaultRowHeight;
	float _topMargin;
	float _bottomMargin;
	float _topPadding;
	float _leading;
	float _addressCapHeight;
	float _dateCapHeight;
	float _subjectCapHeight;
	float _summaryCapHeight;
	float _bottomPadding;

}

@property (nonatomic,readonly) UIFont * addressFont; 
@property (nonatomic,readonly) UIFont * dateFont; 
@property (nonatomic,readonly) UIFont * subjectFont; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) UIFont * mailboxFont; 
@property (nonatomic,readonly) float compactRowHeight; 
@property (nonatomic,readonly) float defaultRowHeight; 
@property (nonatomic,readonly) float leading; 
@property (nonatomic,readonly) float topPadding; 
@property (nonatomic,readonly) float addressCapHeight; 
@property (nonatomic,readonly) float dateCapHeight; 
@property (nonatomic,readonly) float subjectCapHeight; 
@property (nonatomic,readonly) float summaryCapHeight; 
@property (nonatomic,readonly) float bottomPadding; 
@property (assign,nonatomic) float topMargin;                       //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) float bottomMargin;                    //@synthesize bottomMargin=_bottomMargin - In the implementation block
+(id)sharedInstance;
-(float)compactRowHeight;
-(UIFont *)dateFont;
-(UIFont *)mailboxFont;
-(float)addressCapHeight;
-(float)dateCapHeight;
-(UIFont *)addressFont;
-(UIFont *)subjectFont;
-(float)heightWithNumberOfSummaryLines:(int)arg1 ;
-(float)subjectCapHeight;
-(float)summaryCapHeight;
-(float)topPadding;
-(void)dealloc;
-(void)invalidate;
-(float)topMargin;
-(UIFont *)summaryFont;
-(float)leading;
-(float)bottomPadding;
-(float)bottomMargin;
-(void)setTopMargin:(float)arg1 ;
-(float)defaultRowHeight;
-(void)setBottomMargin:(float)arg1 ;
@end
