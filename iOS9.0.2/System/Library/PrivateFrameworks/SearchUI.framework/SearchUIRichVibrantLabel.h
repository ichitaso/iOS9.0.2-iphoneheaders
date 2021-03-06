/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SearchUIVibrantLabel, UILabel, UIFont;

@interface SearchUIRichVibrantLabel : UIView {

	SearchUIVibrantLabel* _vibrantLabel;
	UILabel* _highlightLabel;

}

@property (retain) UIFont * font; 
@property (assign) int numberOfLines; 
@property (assign) float preferredMaxLayoutWidth; 
@property (retain) SearchUIVibrantLabel * vibrantLabel;              //@synthesize vibrantLabel=_vibrantLabel - In the implementation block
@property (retain) UILabel * highlightLabel;                         //@synthesize highlightLabel=_highlightLabel - In the implementation block
-(void)setNumberOfLines:(int)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)viewForLastBaselineLayout;
-(int)numberOfLines;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(void)setVibrantLabel:(SearchUIVibrantLabel *)arg1 ;
-(void)setHighlightLabel:(UILabel *)arg1 ;
-(char)updateWithRichText:(id)arg1 ;
-(SearchUIVibrantLabel *)vibrantLabel;
-(UILabel *)highlightLabel;
-(id)initWithRichText:(id)arg1 style:(unsigned)arg2 ;
@end

