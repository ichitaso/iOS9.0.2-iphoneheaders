/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITextView, UIButton;

@interface _MedicalIDIntroductionView : UIView {

	UIImageView* _glyph;
	UILabel* _medicalIDLabel;
	UITextView* _descriptionView;
	UIImageView* _descriptionFader;
	UIButton* _createMedicalIDButton;

}

@property (nonatomic,readonly) UIButton * createMedicalIDButton;              //@synthesize createMedicalIDButton=_createMedicalIDButton - In the implementation block
-(UIButton *)createMedicalIDButton;
-(id)_resizableFaderImage;
-(void)_updateFontSizes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

