/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, _UIOrderedLayoutArrangement, _UIAlignedLayoutArrangement, NSArray;

@interface UIStackView : UIView {

	NSMutableArray* _mutableLayoutArrangements;
	_UIOrderedLayoutArrangement* _distributionArrangement;
	_UIAlignedLayoutArrangement* _alignmentArrangement;
	char _didRequestTallestBaselineViewForFirst;
	char _didRequestTallestBaselineViewForLast;
	char _viewForFirstBaselineLayoutDidChange;
	char _viewForLastBaselineLayoutDidChange;
	char _layoutMarginsRelativeArrangement;
	NSMutableArray* __mutableArrangedSubviews;

}

@property (nonatomic,copy,readonly) NSArray * arrangedSubviews; 
@property (assign,nonatomic) int axis; 
@property (assign,nonatomic) int distribution; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) float spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) char baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) char layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
@property (nonatomic,retain) NSMutableArray * _mutableArrangedSubviews;                                                    //@synthesize _mutableArrangedSubviews=__mutableArrangedSubviews - In the implementation block
+(Class)layerClass;
-(void)setAlignment:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setAxis:(int)arg1 ;
-(void)setDistribution:(int)arg1 ;
-(id)_mutableLayoutArrangements;
-(char)_hasLayoutArrangements;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(int)axis;
-(void)updateConstraints;
-(id)viewForLastBaselineLayout;
-(int)alignment;
-(void)_vendedBaselineViewParametersDidChange;
-(void)addArrangedSubview:(id)arg1 ;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1 ;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(int)distribution;
-(void)setBaselineRelativeArrangement:(char)arg1 ;
-(char)isBaselineRelativeArrangement;
-(void)setLayoutMarginsRelativeArrangement:(char)arg1 ;
-(NSArray *)arrangedSubviews;
-(char)isLayoutMarginsRelativeArrangement;
-(float)_calculatedIntrinsicHeight;
-(char)_shouldRequestTallestBaselineViewForFirst:(char)arg1 ;
-(id)_baselineViewForFirst:(char)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_vendedBaselineViewDidMoveForFirst:(char)arg1 ;
-(char)_recordBaselineLoweringInfo;
-(NSMutableArray *)_mutableArrangedSubviews;
-(void)set_mutableArrangedSubviews:(NSMutableArray *)arg1 ;
@end

