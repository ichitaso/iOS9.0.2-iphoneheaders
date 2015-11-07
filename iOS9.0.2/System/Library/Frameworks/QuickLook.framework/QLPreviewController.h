/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {

	QLPreviewControllerReserved* _reserved;

}

@property (__weak) id<QLPreviewControllerDataSource> dataSource; 
@property (assign) int currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (__weak) id<QLPreviewControllerDelegate> delegate; 
+(id)contentTypeForPreviewItem:(id)arg1 ;
+(char)canPreviewDocumentType:(id)arg1 ;
+(id)_passThroughDocumentTypes;
+(char)_shouldPassThroughDocumentType:(id)arg1 ;
+(char)canPreviewMIMEType:(id)arg1 ;
+(id)titleForPreviewItem:(id)arg1 ;
+(char)copyPreviewItemToPasteboard:(id)arg1 ;
+(char)_shouldForwardViewWillTransitionToSize;
+(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(char)arg4 ;
+(char)canPreviewItem:(id)arg1 ;
-(char)ckCanDismissWhenSuspending;
-(void)_updateNavigationBarAnimated:(char)arg1 ;
-(void)prepareForPrinting;
-(char)_overlayVisible;
-(void)_requestRemoteViewControllerIfNeeded;
-(void)_runDeferredAnimationBlock;
-(void)_unloadInternalViews;
-(id)itemsSource;
-(id)_displayedInteractionController;
-(void)setTransitioning:(char)arg1 synchronizedWithBlock:(/*^block*/id)arg2 ;
-(id)_currentNavigationController;
-(void)_updateToolbarVisibilityAnimated:(char)arg1 ;
-(char)_canShowStatusBar;
-(void)_configurePreviewContentController;
-(void)dismissDisplayedInteractionControllerAnimated:(char)arg1 ;
-(void)_updateToolbarAnimated:(char)arg1 ;
-(void)_showContentsIfPossibleAnimated:(char)arg1 ;
-(void)_showOverlayAdjustingStatusBar:(char)arg1 duration:(double)arg2 ;
-(int)numberOfPreviewItems;
-(id)previewItemAtIndex:(int)arg1 ;
-(void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(char)arg2 showContentsIfPossible:(char)arg3 ;
-(void)removePreviewContentController;
-(void)_showGenericDisplayBundle;
-(void)_setControlsOverlayVisible:(char)arg1 adjustingStatusBar:(char)arg2 duration:(double)arg3 ;
-(void)_contentWasTapped;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3 ;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_setupWithMode:(int)arg1 parentViewController:(id)arg2 ;
-(void)_setupPreferredModeWithParentViewController:(id)arg1 ;
-(char)_addPreviewContentController;
-(void)_saveBarsState;
-(void)_loadInternalViews;
-(void)updateOrbState;
-(void)_removeOverlayButtons;
-(void)_restoreOriginalNavigationBarItems;
-(CGRect)_contentFrameForRemoteView;
-(void)_createControls;
-(void)_removeChildPreviewContentControllerIfNeeded;
-(void)_updateStatusBarVisibilityWithTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)leftArrowAction:(id)arg1 ;
-(void)rightArrowAction:(id)arg1 ;
-(void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(char)arg3 ;
-(void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(char)arg3 ;
-(void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(/*^block*/id)arg1 ;
-(char)blockRemoteImages;
-(void)setUseCustomActionButton:(char)arg1 ;
-(char)useCustomActionButton;
-(void)setShowActionAsDefaultButton:(char)arg1 ;
-(char)showActionAsDefaultButton;
-(void)animateWhenReadyWithBlock:(/*^block*/id)arg1 ;
-(id)passThroughViewsForIndexSheet;
-(id)previewContentController;
-(id)swipeToDismissGestureRecognizer;
-(id)_documentProxyForPreviewItem:(id)arg1 ;
-(int)currentSourceUUIDForPreviewContentController:(id)arg1 ;
-(int)numberOfPreviewItemsInPreviewContentController:(id)arg1 ;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4 ;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)contentWasTappedInPreviewContentController:(id)arg1 ;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1 ;
-(void)overlayWasTappedInPreviewContentController:(id)arg1 ;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)customActionButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)arrowsAction:(id)arg1 ;
-(void)showArchiveContent:(id)arg1 ;
-(void)playButtonAction:(id)arg1 ;
-(void)navigationGoBackAction:(id)arg1 ;
-(char)canPrint;
-(void)dismissalGestureDidUpdateInPreviewContentController:(id)arg1 state:(int)arg2 trackingInformation:(id)arg3 ;
-(unsigned)currentOrbMode;
-(id)additionalLeftBarButtonItems;
-(id)additionalRightBarButtonItems;
-(char)_needsAVControls;
-(unsigned)_customButtons;
-(char)_needsToolbarForTraitCollection:(id)arg1 ;
-(unsigned)_currentAVButton;
-(unsigned)_buttonForAction;
-(unsigned)_buttonForArchive;
-(unsigned)toolBarButtonsForMode:(int)arg1 traitCollection:(id)arg2 ;
-(id)_flexibleSpaceItem;
-(id)_listDescriptionStringWithTitle:(id)arg1 ;
-(void)_updateNavigationBarTitleWithTraitCollection:(id)arg1 ;
-(unsigned)navigationBarButtonsForMode:(int)arg1 traitCollection:(id)arg2 ;
-(char)_needsToolbar;
-(void)_hideOverlayAdjustingStatusBar:(char)arg1 duration:(double)arg2 ;
-(id)_fixedSpaceItemWithWidth:(float)arg1 ;
-(id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(CGSize)arg3 scale:(float)arg4 ;
-(id)_buttonItemForArchive;
-(void)setAdditionalLeftBarButtonItems:(id)arg1 ;
-(char)_overlayVisibleBeforeDismissal;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)setDataSource:(id<QLPreviewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<QLPreviewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<QLPreviewControllerDataSource>)dataSource;
-(id<QLPreviewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_commonInit;
-(id)_currentInteractionController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)mode;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(char)sourceIsManaged;
-(id<QLPreviewItem>)currentPreviewItem;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg1 ;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg1 ;
-(void)setAdditionalRightBarButtonItems:(id)arg1 ;
-(void)setSourceIsManaged:(char)arg1 ;
-(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(char)arg4 ;
-(void)setBlockRemoteImages:(char)arg1 ;
-(void)setCurrentOrbMode:(unsigned)arg1 ;
-(void)setCurrentPreviewItemIndex:(int)arg1 ;
-(void)_prepareDelayedAppearance;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)refreshCurrentPreviewItem;
-(int)currentPreviewItemIndex;
@end
