/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKTransitDeparturesCellDelegate;
@class UIImageView, UILabel, _MKAnimatableLabel, NSLayoutConstraint, NSArray, _MKGradientView, UIView, NSAttributedString, NSDate, NSTimeZone, UIButton, NSString;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell <UIGestureRecognizerDelegate> {

	UIImageView* _lineImageView;
	UIImageView* _incidentIconImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	_MKAnimatableLabel* _departureLabel;
	UILabel* _departureSubtextLabel;
	NSLayoutConstraint* _labelLeadingMarginConstraint;
	char _isShowingMultipleDepartures;
	NSLayoutConstraint* _departureLabelCenterX;
	NSLayoutConstraint* _departureLabelCustomTrailingMarginConstraint;
	NSLayoutConstraint* _departureLabelTrailingAlign;
	NSLayoutConstraint* _labelBufferConstraint;
	NSLayoutConstraint* _lineImageToContainerTrailingConstraint;
	NSLayoutConstraint* _lineImageViewTopConstraint;
	NSLayoutConstraint* _primaryToTopConstraint;
	NSLayoutConstraint* _departureLabelToTopConstraint;
	NSLayoutConstraint* _departureLabelToBottomConstraint;
	NSLayoutConstraint* _lineImageViewCenteringConstraint;
	NSLayoutConstraint* _primaryLabelCenteringConstraint;
	NSLayoutConstraint* _departureLabelCenteringConstraint;
	NSLayoutConstraint* _incidentToDepartureSubtextLabelConstraint;
	NSLayoutConstraint* _incidentTrailingConstraint;
	UILabel* _animationLabel;
	NSLayoutConstraint* _primaryLabelWidthConstraint;
	NSArray* _labelHeightConstraints;
	NSLayoutConstraint* _primaryLabelHeightConstraint;
	NSLayoutConstraint* _secondaryLabelHeightConstraint;
	NSLayoutConstraint* _secondaryToPrimaryConstraint;
	NSLayoutConstraint* _primaryToBottomConstraint;
	NSLayoutConstraint* _secondaryToBottomConstraint;
	NSLayoutConstraint* _departureSubtextToTopConstraint;
	NSLayoutConstraint* _departureSubtextLabelToBottomConstraint;
	NSLayoutConstraint* _incidentToPrimaryConstraint;
	NSLayoutConstraint* _incidentToSecondaryConstraint;
	NSLayoutConstraint* _incidentToBottomConstraint;
	NSLayoutConstraint* _lineImageToTextGutterConstraint;
	NSLayoutConstraint* _lineImageLeadingConstraint;
	NSLayoutConstraint* _lineImageCompressedLeadingConstraint;
	NSLayoutConstraint* _primaryToDepartureLabelConstraint;
	NSLayoutConstraint* _animationLabelLeadingConstraint;
	NSLayoutConstraint* _animationLabelToTopConstraint;
	char _supressSelectionState;
	char _isTrackingDragGesture;
	float _dragGestureStartingPercentage;
	int _closingDragGestureAnimationCount;
	_MKGradientView* _dragGradientView;
	UIView* _dragBackgroundView;
	char _dragAnimateSubtext;
	NSAttributedString* _dragAnimationSubtext;
	NSAttributedString* _dragAnimationPreviousSubtext;
	char _isAnimatingMultiDepartureTransition;
	float _unadjustedLeadingSeparatorInset;
	char _showNoConnectionEmDash;
	char _centerPrimaryLabel;
	char _centerDepartureLabel;
	char _showIncidentIcon;
	char _incidentButtonHidden;
	char _shouldAdjustSeparatorInsetToMargin;
	char _useCompressedGutter;
	char _useCompressedLeading;
	float _lineImageViewSize;
	NSArray* _departures;
	unsigned _departureStyle;
	NSDate* _countdownReferenceDate;
	NSTimeZone* _departureTimeZone;
	UIButton* _incidentButton;
	NSString* _incidentTitle;
	id<MKTransitDeparturesCellDelegate> _delegate;

}

@property (assign,nonatomic) float lineImageViewSize;                                                     //@synthesize lineImageViewSize=_lineImageViewSize - In the implementation block
@property (nonatomic,readonly) float labelMargin; 
@property (nonatomic,retain) NSDate * countdownReferenceDate;                                             //@synthesize countdownReferenceDate=_countdownReferenceDate - In the implementation block
@property (nonatomic,retain) NSArray * departures;                                                        //@synthesize departures=_departures - In the implementation block
@property (assign,nonatomic) unsigned departureStyle;                                                     //@synthesize departureStyle=_departureStyle - In the implementation block
@property (nonatomic,retain) NSTimeZone * departureTimeZone;                                              //@synthesize departureTimeZone=_departureTimeZone - In the implementation block
@property (nonatomic,readonly) char isShowingMultipleDepartures; 
@property (nonatomic,readonly) NSArray * displayableDepartures; 
@property (assign,getter=isShowingNoConnectionEmDash,nonatomic) char showNoConnectionEmDash;              //@synthesize showNoConnectionEmDash=_showNoConnectionEmDash - In the implementation block
@property (assign,getter=isShowingIncidentIcon,nonatomic) char showIncidentIcon;                          //@synthesize showIncidentIcon=_showIncidentIcon - In the implementation block
@property (nonatomic,copy) NSString * incidentTitle;                                                      //@synthesize incidentTitle=_incidentTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDeparturesCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char useCompressedGutter;                                                    //@synthesize useCompressedGutter=_useCompressedGutter - In the implementation block
@property (assign,nonatomic) char useCompressedLeading;                                                   //@synthesize useCompressedLeading=_useCompressedLeading - In the implementation block
@property (assign,nonatomic) char shouldAdjustSeparatorInsetToMargin;                                     //@synthesize shouldAdjustSeparatorInsetToMargin=_shouldAdjustSeparatorInsetToMargin - In the implementation block
@property (assign,nonatomic) char centerPrimaryLabel;                                                     //@synthesize centerPrimaryLabel=_centerPrimaryLabel - In the implementation block
@property (assign,nonatomic) char centerDepartureLabel;                                                   //@synthesize centerDepartureLabel=_centerDepartureLabel - In the implementation block
@property (nonatomic,retain) UIButton * incidentButton;                                                   //@synthesize incidentButton=_incidentButton - In the implementation block
@property (assign,getter=isIncidentButtonHidden,nonatomic) char incidentButtonHidden;                     //@synthesize incidentButtonHidden=_incidentButtonHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSecondaryFont;
+(float)defaultLineImageViewSize;
+(id)_nowStringAttributes;
+(id)_timestampFont;
+(float)labelMarginWithLineImageViewWidth:(float)arg1 ;
+(id)_primaryFont;
+(float)defaultLabelMargin;
+(id)timestampSecondaryFont;
+(id)_multipleCountdownDepartureAttributes;
+(void)useCompressedGutter:(out char*)arg1 compressedLeading:(out char*)arg2 forImageWidth:(float)arg3 inWidth:(float)arg4 compressed:(char)arg5 ;
+(char)_shouldScaleSingleCountdownValue;
+(id)strongSecondaryFont;
+(id)_singleCountdownSubtext;
+(id)_multipleCountdownFont;
+(id)_departureSubtextFont;
+(char)_needsUpdateMaxLabelWidths;
+(id)_departureSubtextAttributes;
+(id)_nowString;
+(float)_maxSingleDepartureLabelWidth;
+(float)maxLineImageWidthforWidth:(float)arg1 compressed:(char)arg2 ;
+(id)_singleCountdownDepartureAttributes;
+(float)_minTextWidth:(char)arg1 ;
+(id)_singleCountdownFont;
+(float)_maxSingleDepartureSubtextLabelWidth;
+(void)_calculateMaxLabelWidths;
+(float)defaultHeight;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(float)labelMargin;
-(void)setIncidentTitle:(NSString *)arg1 ;
-(NSString *)incidentTitle;
-(float)_adjustedSeparatorInsetToMargin:(float)arg1 ;
-(void)setShouldAdjustSeparatorInsetToMargin:(char)arg1 ;
-(char)shouldAdjustSeparatorInsetToMargin;
-(NSArray *)displayableDepartures;
-(char)centerPrimaryLabel;
-(char)useCompressedLeading;
-(void)_addHeightConstraintWithPrimaryHeight:(float)arg1 secondaryHeight:(float)arg2 ;
-(char)_isRTL;
-(id)currentPrimaryHeightConstraintValue;
-(void)setShowIncidentIcon:(char)arg1 ;
-(void)setCenterPrimaryLabel:(char)arg1 ;
-(void)setUseCompressedGutter:(char)arg1 ;
-(void)_addEmDashAttributes:(id)arg1 ;
-(void)_departureText:(out id*)arg1 subtext:(out id*)arg2 forAnimationLabel:(char)arg3 ;
-(float)_departureLabelToTopScaleValueWithString:(id)arg1 ;
-(char)isShowingIncidentIcon;
-(void)setIncidentButtonHidden:(char)arg1 ;
-(void)_addTimeStampConstraintsIfNeeded;
-(void)centerContentIfNeccessaryForWidth:(float)arg1 ;
-(void)setIncidentButton:(UIButton *)arg1 ;
-(unsigned)_departureLabelStyle;
-(void)setUseCompressedLeading:(char)arg1 ;
-(char)centerDepartureLabel;
-(void)setCountdownReferenceDate:(NSDate *)arg1 ;
-(void)_updateLabelFonts;
-(char)useCompressedGutter;
-(void)_addAnimationLabelWithText:(id)arg1 ;
-(float)lineImageViewSize;
-(char)_pointIsInCustomGestureBounds:(CGPoint)arg1 ;
-(void)_addDepartureLabelTrailingConstraintIfNeeded;
-(void)setDepartureStyle:(unsigned)arg1 ;
-(void)setLineImageViewSize:(float)arg1 ;
-(char)isShowingMultipleDepartures;
-(void)setSecondaryText:(id)arg1 ;
-(void)_updateCountdownConstraintsForString:(id)arg1 ;
-(void)_removeIncidentIcon;
-(unsigned)departureStyle;
-(void)refreshDeparturesDisplay;
-(char)isShowingNoConnectionEmDash;
-(void)_updateDepartureLabelToTopConstraintWithString:(id)arg1 ;
-(void)setLeadingSeparatorInset:(float)arg1 ;
-(void)setDepartureTimeZone:(NSTimeZone *)arg1 ;
-(void)setShowNoConnectionEnDash:(char)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)setIsShowingMultipleDepartures:(char)arg1 animated:(char)arg2 primaryHeightConstraintValue:(id)arg3 secondaryHeightConstraintValue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateIncidentConstraints;
-(void)_removeIncidentButton;
-(void)_addIncidentIcon;
-(UIButton *)incidentButton;
-(void)setShowNoConnectionEmDash:(char)arg1 ;
-(char)isIncidentButtonHidden;
-(void)_addIncidentButton;
-(id)currentSecondaryHeightConstraintValue;
-(void)setCenterDepartureLabel:(char)arg1 ;
-(unsigned)_displayableDeparturesCount;
-(void)_addCountdownConstraintsIfNeeded;
-(void)_enumerateMinutesUntilDepartureTimesWithBlock:(/*^block*/id)arg1 ;
-(void)setLineImage:(id)arg1 forWidth:(float)arg2 compressed:(char)arg3 center:(char)arg4 centeringWidth:(float)arg5 ;
-(void)_incidentButtonPressed;
-(NSDate *)countdownReferenceDate;
-(id)_incidentIcon;
-(void)_setLineImageColumnCentered:(char)arg1 withImageWidth:(float)arg2 centeringWidth:(float)arg3 ;
-(void)setPrimaryText:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setDelegate:(id<MKTransitDeparturesCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<MKTransitDeparturesCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)_commonInit;
-(char)isOpaque;
-(void)layoutMarginsDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(NSArray *)departures;
-(void)setDepartures:(NSArray *)arg1 ;
-(NSTimeZone *)departureTimeZone;
@end

