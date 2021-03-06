/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/DirectionsStepsTableViewControllerDelegate.h>
#import <Maps/RoutePickingSession.h>

@protocol RoutePickingDisplayableRoutes;
@class MNRoute, NSError, RoutePickingMessageView, RoutePickingCompactBarView, MainChromeDetailsBarContent, NSLayoutConstraint, UIView, DirectionsStepsTableViewController, BlurView, RoutePickingSidebarFooterView, UIActivityIndicatorView, RoutePickingModeController, NSString;

@interface RoutePickingSessionDrivingWalking : NSObject <DirectionsStepsTableViewControllerDelegate, RoutePickingSession> {

	id<RoutePickingDisplayableRoutes> _displayableRoutes;
	MNRoute* _selectedRoute;
	NSError* _error;
	RoutePickingMessageView* _messageView;
	char _isShowingMessageView;
	RoutePickingCompactBarView* _compactBarView;
	MainChromeDetailsBarContent* _detailsBarContent;
	NSLayoutConstraint* _compactBarViewBottomConstraint;
	char _isUsingSidebarLayout;
	UIView* _sidebarContentView;
	DirectionsStepsTableViewController* _sidebarListController;
	BlurView* _sidebarBlur;
	RoutePickingSidebarFooterView* _sidebarFooterView;
	UIActivityIndicatorView* _loadingView;
	RoutePickingModeController* _routePickingMode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) RoutePickingModeController * routePickingMode;                                       //@synthesize routePickingMode=_routePickingMode - In the implementation block
@property (getter=isLimitingNumberOfRouteDisplayed,nonatomic,readonly) char limitingNumberOfRouteDisplayed; 
@property (getter=isSuppressingRoutesDisplay,nonatomic,readonly) char suppressingRoutesDisplay; 
@property (nonatomic,readonly) char showsOnlySelectedRouteOnMap; 
@property (nonatomic,readonly) id<PresenterPresentationSource> shareSheetPresentationSource; 
-(int)selectedVariant;
-(void)setSelectedRoute:(id)arg1 ;
-(id)_mainChrome;
-(char)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2 ;
-(void)updateBlurDisabledBackgroundColor:(id)arg1 blurViewStyle:(int)arg2 transitionToBackdropStyle:(int)arg3 ;
-(void)_updateDetailsBarIfPossible;
-(id)detailsBarContent;
-(RoutePickingModeController *)routePickingMode;
-(void)setRoutePickingMode:(RoutePickingModeController *)arg1 ;
-(void)willStartLoadingExpectingNewSession:(char)arg1 withTiming:(id)arg2 animation:(id)arg3 ;
-(void)_updateCompactBarConstraints;
-(void)_createCompactObjectsIfNeeded;
-(id)sidebarScrollableContentBarsController;
-(void)_createSidebarObjectsIfNeeded;
-(void)controlBarMainActionButtonTapped:(id)arg1 ;
-(void)didFinishLoading;
-(void)_showOrHideMessageView;
-(void)didFinishLoadingNewDisplayableRoutes:(id)arg1 ;
-(void)_updateMessageViewContents;
-(char)canHandleError:(id)arg1 ;
-(void)_invalidateMessageView;
-(void)didReceiveError:(id)arg1 ;
-(char)isSuppressingRoutesDisplay;
-(char)showsOnlySelectedRouteOnMap;
-(void)_setupInitialCompactBarConstraints;
-(void)_showOrHideMessageViewIfNeeded;
-(char)isLimitingNumberOfRouteDisplayed;
-(char)_shouldShowDetailsBar;
-(void)_showSidebarContentsWithAnimation:(id)arg1 ;
-(id<PresenterPresentationSource>)shareSheetPresentationSource;
-(void)resignCurrentWithAnimation:(id)arg1 ;
-(void)becomeCurrentWithAnimation:(id)arg1 ;
-(void)_routeDetailsButtonTappedWithPresenterPositioningBlock:(/*^block*/id)arg1 ;
-(UIEdgeInsets)additionalInsetsForSession;
-(char)_shouldShowMessageView;
-(int)_currentTransportType;
-(void)dealloc;
-(void)layout;
-(void)_handleLocaleChange:(id)arg1 ;
@end

