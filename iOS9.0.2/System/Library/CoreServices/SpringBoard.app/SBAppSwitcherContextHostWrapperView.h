/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@protocol FBSceneHostView;
@class FBWindowContextHostManager, UIView, SBWallpaperEffectView, NSString;

@interface SBAppSwitcherContextHostWrapperView : UIView <SBMainAppSwitcherPageContentView> {

	FBWindowContextHostManager* _contextHostManager;
	UIView* _containerView;
	UIView*<FBSceneHostView> _contextHostView;
	UIView* _snapshotView;
	SBWallpaperEffectView* _wallpaperEffectView;
	int _orientation;

}

@property (assign,nonatomic) int orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 application:(id)arg2 sideApplication:(id)arg3 ;
-(CGAffineTransform)_rotationTransformForOrientation:(int)arg1 ;
-(void)_viewDidAnimateDismissal:(id)arg1 ;
-(void)_viewWillPresent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)didMoveToSuperview;
@end
