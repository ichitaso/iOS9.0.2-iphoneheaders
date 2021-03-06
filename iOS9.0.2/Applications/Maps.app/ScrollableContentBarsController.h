/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ScrollableContentBarsRequiredMethods.h>

@class BarShadowView, UIView, UIScrollView, BlurView, NSString;

@interface ScrollableContentBarsController : NSObject <ScrollableContentBarsRequiredMethods> {

	char _hidden;
	char _ignoringRestOfScroll;
	char _dragging;
	CGPoint _startingContentOffset;
	char _startedAtBottom;
	int _scrollDirection;
	CGRect _startingTopBarFrame;
	BarShadowView* _topBarShadow;
	CGRect _startingBottomBarFrame;
	BarShadowView* _bottomBarShadow;
	UIView* _hostView;
	UIScrollView* _scrollView;
	UIView* _topBarView;
	UIView* _bottomBarView;
	UIView* _contentView;
	BlurView* _topBlurView;
	BlurView* _bottomBlurView;
	UIEdgeInsets _desiredContentInsets;

}

@property (nonatomic,readonly) UIView * hostView;                                 //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                           //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets desiredContentInsets;                   //@synthesize desiredContentInsets=_desiredContentInsets - In the implementation block
@property (nonatomic,retain) UIView * topBarView;                                 //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,retain) UIView * bottomBarView;                              //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) BlurView * topBlurView;                            //@synthesize topBlurView=_topBlurView - In the implementation block
@property (nonatomic,readonly) BlurView * bottomBlurView;                         //@synthesize bottomBlurView=_bottomBlurView - In the implementation block
@property (nonatomic,readonly) float insetForAccomodatingTopBarView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTopBarBlurHidden;
-(CGRect)_bottomBarFrameDuringScrollingToOffset:(CGPoint)arg1 ;
-(void)_setTopBarFrame:(CGRect)arg1 ;
-(void)updateBarShadowsForDarkBackground:(char)arg1 ;
-(UIView *)topBarView;
-(void)setContentView:(id)arg1 transitionCrossDissolveWithAnimation:(id)arg2 ;
-(void)_setBottomBarFrame:(CGRect)arg1 ;
-(void)layoutBarViews;
-(float)_bottomBarHeight;
-(void)setDesiredContentInsets:(UIEdgeInsets)arg1 ;
-(void)setTopBarView:(UIView *)arg1 ;
-(char)_topBarViewIsOffScreen;
-(void)_updateScrollViewContentInsets;
-(CGRect)_topBarFrameAtRestForHidden:(char)arg1 ;
-(void)setBottomBarView:(UIView *)arg1 ;
-(UIView *)bottomBarView;
-(float)insetForAccomodatingTopBarView;
-(void)_endThisScrollByMovingToHidden:(char)arg1 ;
-(BlurView *)bottomBlurView;
-(CGRect)_bottomBarFrameAtRestForHidden:(char)arg1 ;
-(void)_updateBottomBarBlurHidden;
-(id)initWithHostView:(id)arg1 ;
-(BlurView *)topBlurView;
-(char)_bottomBarViewIsOffScreen;
-(CGRect)_topBarFrameDuringScrollingToOffset:(CGPoint)arg1 ;
-(UIEdgeInsets)desiredContentInsets;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(float)_topBarHeight;
-(UIView *)hostView;
@end

