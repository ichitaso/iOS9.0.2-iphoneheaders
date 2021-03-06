/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUICircularPagingViewDelegate.h>

@class OFUICircularPagingView, NSString;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate> {

	OFUICircularPagingView* circularPagingView;

}

@property (nonatomic,retain) OFUICircularPagingView * circularPagingView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)circularPagingViewClass;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)commonInit;
-(OFUICircularPagingView *)circularPagingView;
-(void)circularPagingViewDidMoveForward:(id)arg1 ;
-(void)circularPagingViewDidMoveBackward:(id)arg1 ;
-(void)setCircularPagingView:(OFUICircularPagingView *)arg1 ;
@end

