/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSArray, VideosArtworkView;

@interface VideosArtworkContainer : UIView {

	NSLayoutConstraint* _artworkHeightConstraint;
	NSLayoutConstraint* _artworkWidthConstraint;
	NSLayoutConstraint* _artworkCenterXContraint;
	NSLayoutConstraint* _artworkCenterYContraint;
	NSArray* _artworkViewAnchorConstraints;
	int _anchorPoint;
	int _constraintsSetupAnchorPoint;
	char _hasAddedConstraints;
	VideosArtworkView* _artworkView;

}

@property (assign,nonatomic) int anchorPoint;                                //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (nonatomic,readonly) VideosArtworkView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
-(id)initWithVideoArtworkAnchor:(int)arg1 ;
-(void)_updateConstratintsForAnchor:(int)arg1 ;
-(void)_centerArtworkViewHorizontally;
-(void)_centerArtworkViewVertically;
-(void)removeContainerConstraints;
-(id)init;
-(int)anchorPoint;
-(void)setAnchorPoint:(int)arg1 ;
-(void)updateConstraints;
-(id)initForAutolayout;
-(VideosArtworkView *)artworkView;
@end

