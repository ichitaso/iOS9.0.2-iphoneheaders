/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface COSScannerActivityView : UIView {

	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

