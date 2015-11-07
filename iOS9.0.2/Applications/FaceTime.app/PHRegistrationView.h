/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@class UILabel, UIActivityIndicatorView, UIButton, UIView;

@interface PHRegistrationView : UIScrollView {

	UILabel* _titleLabel;
	UILabel* _verbiageLabel;
	UILabel* _signingInLabel;
	UIActivityIndicatorView* _signingInSpinner;
	UIButton* _learnMoreButton;
	UIView* _authKitSignInView;
	float _originalAuthKitViewHeight;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verbiageLabel;                                 //@synthesize verbiageLabel=_verbiageLabel - In the implementation block
@property (nonatomic,retain) UILabel * signingInLabel;                                //@synthesize signingInLabel=_signingInLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * signingInSpinner;              //@synthesize signingInSpinner=_signingInSpinner - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * authKitSignInView;                              //@synthesize authKitSignInView=_authKitSignInView - In the implementation block
@property (assign,nonatomic) float originalAuthKitViewHeight;                         //@synthesize originalAuthKitViewHeight=_originalAuthKitViewHeight - In the implementation block
-(void)setOriginalAuthKitViewHeight:(float)arg1 ;
-(float)originalAuthKitViewHeight;
-(void)setVerbiageLabel:(UILabel *)arg1 ;
-(void)setSigningInLabel:(UILabel *)arg1 ;
-(void)setSigningInSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(UIView *)authKitSignInView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSigningIn:(char)arg1 ;
-(void)setAuthKitSignInView:(UIView *)arg1 ;
-(void)_learnMorePressed:(id)arg1 ;
-(UILabel *)signingInLabel;
-(UIActivityIndicatorView *)signingInSpinner;
-(UILabel *)verbiageLabel;
-(UIButton *)learnMoreButton;
@end
