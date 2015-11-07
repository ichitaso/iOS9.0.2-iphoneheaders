/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class NSBundle, NSMutableDictionary, UIColor, UIFont, NSDictionary, UIImage;

@interface GAXStyleProvider : NSObject {

	NSBundle* _bundle;
	NSMutableDictionary* _cachedStyleProperties;
	UIOffset _timeRestrictionsFeatureViewTextOffset;

}

@property (nonatomic,readonly) double defaultAnimationDuration; 
@property (nonatomic,readonly) double fastAnimationDuration; 
@property (nonatomic,readonly) float applicationViewRoundedCornerRadius; 
@property (nonatomic,readonly) char reduceTransparencyAndGraphics; 
@property (nonatomic,readonly) UIColor * defaultButtonTitleColor; 
@property (nonatomic,readonly) UIColor * defaultLabelTextColor; 
@property (nonatomic,readonly) UIColor * defaultLabelBackgroundColor; 
@property (nonatomic,readonly) UIFont * workspaceNavigationBarTitleFont; 
@property (nonatomic,readonly) float workspaceNavigationBarDismissButtonMinimumWidth; 
@property (nonatomic,readonly) char workspaceNavigationBarNeedsMiniMetricsInitialized; 
@property (nonatomic,readonly) NSDictionary * workspaceNavigationBarButtonTextAttributes; 
@property (nonatomic,readonly) UIFont * workspaceInstructionsLabelFont; 
@property (nonatomic,readonly) UIEdgeInsets workspaceInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) char workspaceInstructionsLabelShouldBeDisplayed; 
@property (nonatomic,readonly) char workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation; 
@property (nonatomic,readonly) char workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation; 
@property (nonatomic,readonly) UIColor * hostedApplicationShadowColor; 
@property (nonatomic,readonly) double interestAreaViewSnapAnimationDuration; 
@property (nonatomic,readonly) UIColor * interestAreaViewBackgroundColor; 
@property (nonatomic,readonly) UIImage * interestAreaViewBackgroundHatchingTexture; 
@property (nonatomic,readonly) float interestAreaViewBackgroundHatchingTextureAlpha; 
@property (nonatomic,readonly) float interestAreaViewBackgroundStripePatternAlpha; 
@property (nonatomic,readonly) UIColor * interestAreaViewFingerPathStrokeColor; 
@property (nonatomic,readonly) float interestAreaViewFingerPathLineWidth; 
@property (nonatomic,readonly) UIImage * interestAreaViewCloseButtonImage; 
@property (nonatomic,readonly) UIImage * interestAreaViewResizingKnobButtonImage; 
@property (nonatomic,readonly) CGSize minimumSizeForInterestAreaPath; 
@property (nonatomic,readonly) float marginOfErrorForDecidingToMergeInterestAreaPaths; 
@property (nonatomic,readonly) float featureViewControllerHeight; 
@property (nonatomic,readonly) float featureViewControllerMiniHeight; 
@property (nonatomic,readonly) UIFont * featureViewControllerInstructionsFont; 
@property (nonatomic,readonly) UIColor * featureViewControllerInstructionsColor; 
@property (nonatomic,readonly) float featureViewControllerInstructionsHorizontalOffset; 
@property (nonatomic,readonly) float featureViewControllerInstructionsMiniHorizontalOffset; 
@property (nonatomic,readonly) float featureViewControllerLandscapeGutterWidth; 
@property (nonatomic,readonly) float featureViewControllerMinimimGutterWidth; 
@property (nonatomic,readonly) float featureViewControllerMinimumHorizontalSpacing; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsButtonFont; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonMiniOffset; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonOffset; 
@property (nonatomic,readonly) float featureViewControllerOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsCellTextFont; 
@property (nonatomic,readonly) float featureViewControllerPortraitGutterWidth; 
@property (nonatomic,readonly) float featureViewControllerVerticalOffset; 
@property (nonatomic,readonly) UIFont * featureViewDetailTextFont; 
@property (nonatomic,readonly) UIEdgeInsets featureViewFrameEdgeInsets; 
@property (nonatomic,readonly) UIColor * featureViewIconColor; 
@property (nonatomic,readonly) float featureViewIconCornerRadius; 
@property (nonatomic,readonly) CGSize featureViewMaximumIconSize; 
@property (nonatomic,readonly) float featureViewMinimumHeight; 
@property (nonatomic,readonly) UIFont * featureViewOptionsButtonFont; 
@property (nonatomic,readonly) float featureViewOptionsButtonHeight; 
@property (nonatomic,readonly) UIColor * featureViewOptionsButtonLineColor; 
@property (nonatomic,readonly) float featureViewOptionsButtonLineWidth; 
@property (nonatomic,readonly) UIOffset featureViewOptionsButtonOffset; 
@property (nonatomic,readonly) float featureViewOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIColor * featureViewTextColor; 
@property (nonatomic,readonly) UIFont * featureViewTextFont; 
@property (nonatomic,readonly) float featureViewTextHorizontalPadding; 
@property (nonatomic,readonly) UIOffset featureViewToggleOffset; 
@property (nonatomic,readonly) UIImage * appFeatureViewDefineIcon; 
@property (nonatomic,readonly) CGSize appFeatureViewIconSize; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewHomeIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewLockIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewVolumeIcon; 
@property (nonatomic,readonly) UIImage * timeRestrictionsFeatureViewTimerIcon; 
@property (nonatomic,readonly) UIOffset timeRestrictionsFeatureViewTextOffset;                                         //@synthesize timeRestrictionsFeatureViewTextOffset=_timeRestrictionsFeatureViewTextOffset - In the implementation block
@property (nonatomic,readonly) UIOffset optionsFeatureViewTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewKeyboardIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewKeyboardTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewMotionIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewMotionTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewTouchIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewTouchTextOffset; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundHighlightedColor; 
@property (nonatomic,readonly) UIFont * optionsDoneButtonFont; 
@property (nonatomic,readonly) float optionsDoneButtonHeight; 
@property (nonatomic,readonly) UIColor * optionsViewBackgroundDimmingColor; 
@property (nonatomic,readonly) float optionsViewFeaturesContentViewGradientHeight; 
@property (nonatomic,readonly) float optionsViewSeparatorHeight; 
@property (nonatomic,readonly) float optionsViewSeparatorHorizontalPadding; 
@property (nonatomic,readonly) float optionsViewSeparatorVerticalPadding; 
@property (nonatomic,retain) NSBundle * bundle;                                                                        //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStyleProperties;                                              //@synthesize cachedStyleProperties=_cachedStyleProperties - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation;
-(UIImage *)hardwareFeatureViewVolumeIcon;
-(char)workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation;
-(UIOffset)systemFeatureViewMotionTextOffset;
-(UIImage *)systemFeatureViewTouchIcon;
-(UIOffset)systemFeatureViewTouchTextOffset;
-(double)fastAnimationDuration;
-(UIColor *)defaultButtonTitleColor;
-(UIImage *)hardwareFeatureViewLockIcon;
-(UIImage *)systemFeatureViewKeyboardIcon;
-(UIOffset)systemFeatureViewKeyboardTextOffset;
-(UIImage *)systemFeatureViewMotionIcon;
-(CGSize)minimumSizeForInterestAreaPath;
-(UIImage *)appFeatureViewDefineIcon;
-(float)featureViewOptionsButtonHeight;
-(float)featureViewOptionsButtonLineWidth;
-(UIColor *)featureViewOptionsButtonLineColor;
-(UIColor *)defaultLabelBackgroundColor;
-(void)setCachedStyleProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedStyleProperties;
-(UIColor *)featureViewIconColor;
-(id)_boldLabelFontWithSize:(float)arg1 ;
-(id)_lightLabelFontWithSize:(float)arg1 ;
-(float)interestAreaViewBackgroundStripePatternAlpha;
-(id)_regularLabelFontWithSize:(float)arg1 ;
-(id)_mediumLabelFontWithSize:(float)arg1 ;
-(id)_cachedIconWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(float)interestAreaViewFingerPathLineWidth;
-(UIColor *)interestAreaViewFingerPathStrokeColor;
-(UIImage *)interestAreaViewResizingKnobButtonImage;
-(UIImage *)interestAreaViewCloseButtonImage;
-(double)interestAreaViewSnapAnimationDuration;
-(float)marginOfErrorForDecidingToMergeInterestAreaPaths;
-(char)workspaceNavigationBarNeedsMiniMetricsInitialized;
-(char)workspaceInstructionsLabelShouldBeDisplayed;
-(UIFont *)workspaceInstructionsLabelFont;
-(UIEdgeInsets)hostedApplicationScaledFrameEdgeInsetsForInterfaceOrientation:(int)arg1 ;
-(UIEdgeInsets)workspaceInstructionsLabelEdgeInsets;
-(UIFont *)workspaceNavigationBarTitleFont;
-(NSDictionary *)workspaceNavigationBarButtonTextAttributes;
-(float)workspaceNavigationBarDismissButtonMinimumWidth;
-(UIColor *)hostedApplicationShadowColor;
-(float)featureViewIconCornerRadius;
-(char)reduceTransparencyAndGraphics;
-(CGSize)appFeatureViewIconSize;
-(UIOffset)optionsFeatureViewTextOffset;
-(UIImage *)hardwareFeatureViewHomeIcon;
-(float)featureViewControllerVerticalOffset;
-(float)featureViewControllerLandscapeGutterWidth;
-(float)featureViewControllerPortraitGutterWidth;
-(float)featureViewControllerMinimimGutterWidth;
-(float)featureViewControllerMinimumHorizontalSpacing;
-(float)featureViewControllerInstructionsMiniHorizontalOffset;
-(float)featureViewControllerInstructionsHorizontalOffset;
-(UIOffset)featureViewControllerOptionsButtonMiniOffset;
-(UIOffset)featureViewControllerOptionsButtonOffset;
-(float)featureViewControllerMiniHeight;
-(float)featureViewControllerHeight;
-(UIOffset)timeRestrictionsFeatureViewTextOffset;
-(UIFont *)featureViewControllerInstructionsFont;
-(UIColor *)featureViewControllerInstructionsColor;
-(UIFont *)featureViewControllerOptionsButtonFont;
-(float)featureViewControllerOptionsButtonTitleHorizontalPadding;
-(UIColor *)optionsViewBackgroundDimmingColor;
-(UIEdgeInsets)featureViewFrameEdgeInsets;
-(float)optionsViewSeparatorVerticalPadding;
-(float)featureViewMinimumHeight;
-(float)optionsViewSeparatorHeight;
-(float)optionsViewSeparatorHorizontalPadding;
-(float)optionsDoneButtonHeight;
-(float)optionsViewFeaturesContentViewGradientHeight;
-(UIColor *)optionsDoneButtonBackgroundColor;
-(UIFont *)optionsDoneButtonFont;
-(UIColor *)optionsDoneButtonBackgroundHighlightedColor;
-(UIFont *)featureViewControllerOptionsCellTextFont;
-(UIImage *)timeRestrictionsFeatureViewTimerIcon;
-(UIFont *)featureViewOptionsButtonFont;
-(UIFont *)featureViewTextFont;
-(UIOffset)featureViewOptionsButtonOffset;
-(float)featureViewOptionsButtonTitleHorizontalPadding;
-(UIOffset)featureViewToggleOffset;
-(CGSize)featureViewMaximumIconSize;
-(UIColor *)featureViewTextColor;
-(UIFont *)featureViewDetailTextFont;
-(float)featureViewTextHorizontalPadding;
-(UIColor *)interestAreaViewBackgroundColor;
-(UIImage *)interestAreaViewBackgroundHatchingTexture;
-(float)interestAreaViewBackgroundHatchingTextureAlpha;
-(float)applicationViewRoundedCornerRadius;
-(UIColor *)defaultLabelTextColor;
-(double)defaultAnimationDuration;
-(void)dealloc;
-(id)init;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1 ;
-(void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
@end
