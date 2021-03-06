/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView;


@protocol UIViewControllerPreviewing <NSObject>
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@required
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;

@end

