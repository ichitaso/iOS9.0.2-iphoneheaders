/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICFreeTransformableAttachmentView.h>
#import <MobileNotes/ICImageAttachmentPresentationDelegate.h>

@class CALayer, UIImage, NSString;

@interface ICImageAttachmentView : ICFreeTransformableAttachmentView <ICImageAttachmentPresentationDelegate> {

	CALayer* _imageLayer;
	CGPoint _centerOfSalience;

}

@property (retain) CALayer * imageLayer;                            //@synthesize imageLayer=_imageLayer - In the implementation block
@property (readonly) UIImage * image; 
@property (assign) CGPoint centerOfSalience;                        //@synthesize centerOfSalience=_centerOfSalience - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sharedInit;
-(void)setupEventHandling;
-(UIView*)viewToPresentAttachmentFrom;
-(void)setCenterOfSalience:(CGPoint)arg1 ;
-(void)updateImageInView:(char)arg1 ;
-(void)setupImageLayerBoundary;
-(void)imageDidLoad:(UIImage*)arg1 shouldFade:(char)arg2 ;
-(void)setupImageLayerBoundaryIfNecessary;
-(id)imageContentsGravity;
-(void)animateImageArrival;
-(void)updateImageSize;
-(void)updateCenterOfSalience;
-(char)supportsFreeTransformGesture;
-(id)newNavigationController;
-(CGPoint)centerOfSalience;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(CGRect)imageFrame;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(id)accessibilityLabel;
-(CGSize)imageSize;
-(id)accessibilityHint;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didUpdatePreviewImages;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
@end
