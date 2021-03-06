/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl {

	int _previousUserRating;
	UIImageView* _emptyStarsImageView;
	UIImageView* _filledStarsImageView;
	int _userRating;
	float _starSpacing;
	float _starWidth;

}

@property (nonatomic,retain) UIImage * emptyStarsImage; 
@property (nonatomic,retain) UIImage * filledStarsImage; 
@property (assign,nonatomic) int userRating;                          //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) float starSpacing;                       //@synthesize starSpacing=_starSpacing - In the implementation block
@property (assign,nonatomic) float starWidth;                         //@synthesize starWidth=_starWidth - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setStarWidth:(float)arg1 ;
-(int)userRating;
-(void)setUserRating:(int)arg1 ;
-(void)setEmptyStarsImage:(UIImage *)arg1 ;
-(void)setFilledStarsImage:(UIImage *)arg1 ;
-(void)_updateUserRatingWithTouch:(id)arg1 ;
-(float)starWidth;
-(float)starSpacing;
-(UIImage *)emptyStarsImage;
-(UIImage *)filledStarsImage;
-(void)setStarSpacing:(float)arg1 ;
@end

