/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIActivityGroupViewControllerDelegate.h>
#import <UIKit/UIActivityGroupViewControllerDataSource.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/SFAirDropActivityViewControllerDelegate.h>

@protocol UIActivityViewControllerDelegate;
@class NSArray, UIActivity, NSString, UIViewController, UIAlertController, _UIAlertControllerShimPresenter, _UIActivityGroupListViewController, UIAlertAction, NSOperationQueue, SFAirDropActivityViewController, _UIActivityApplicationExtensionDiscovery;

@interface UIActivityViewController : UIViewController <UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource, UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, SFAirDropActivityViewControllerDelegate> {

	char _useBlackPopoverStyle;
	char _showKeyboardAutomatically;
	char _allowsEmbedding;
	char _willDismissActivityViewController;
	char _performActivityForStateRestoration;
	char _shouldMatchOnlyUserElectedExtensions;
	/*^block*/id _completionHandler;
	/*^block*/id _completionWithItemsHandler;
	NSArray* _excludedActivityTypes;
	UIActivity* _activity;
	NSArray* _includedActivityTypes;
	int _excludedActivityCategories;
	NSArray* _activityTypeOrder;
	NSString* _mailAutosaveIdentifier;
	/*^block*/id _preCompletionHandler;
	id<UIActivityViewControllerDelegate> _airDropDelegate;
	UIViewController* _activityViewController;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	UIAlertController* _activityAlertController;
	_UIAlertControllerShimPresenter* _activityAlertControllerShimPresenter;
	_UIActivityGroupListViewController* _activityGroupListViewController;
	UIAlertAction* _activityAlertCancelAction;
	NSOperationQueue* _activityItemProviderOperationQueue;
	int _totalProviderCount;
	int _completedProviderCount;
	unsigned _backgroundTaskIdentifier;
	int _originalPopoverBackgroundStyle;
	Class _originalPopoverBackgroundViewClass;
	NSString* _subject;
	SFAirDropActivityViewController* _airDropViewController;
	/*^block*/id __popoverDismissalAction;
	_UIActivityApplicationExtensionDiscovery* _applicationExtensionDiscovery;

}

@property (nonatomic,copy) id dismissCompletionHandler; 
@property (nonatomic,copy) id completionHandler;                                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id completionWithItemsHandler;                                                           //@synthesize completionWithItemsHandler=_completionWithItemsHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                         //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) UIActivity * activity;                                                                 //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) char useBlackPopoverStyle;                                                             //@synthesize useBlackPopoverStyle=_useBlackPopoverStyle - In the implementation block
@property (assign,nonatomic) char showKeyboardAutomatically;                                                        //@synthesize showKeyboardAutomatically=_showKeyboardAutomatically - In the implementation block
@property (nonatomic,copy) NSArray * includedActivityTypes;                                                         //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (assign,nonatomic) int excludedActivityCategories;                                                        //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,copy) NSArray * activityTypeOrder;                                                             //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) char allowsEmbedding;                                                                  //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (nonatomic,retain) NSString * mailAutosaveIdentifier;                                                     //@synthesize mailAutosaveIdentifier=_mailAutosaveIdentifier - In the implementation block
@property (nonatomic,readonly) char sourceIsManaged; 
@property (nonatomic,copy) id preCompletionHandler;                                                                 //@synthesize preCompletionHandler=_preCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityViewControllerDelegate> airDropDelegate;                           //@synthesize airDropDelegate=_airDropDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * activityViewController;                                             //@synthesize activityViewController=_activityViewController - In the implementation block
@property (nonatomic,copy) NSArray * activityItems;                                                                 //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,copy) NSArray * applicationActivities;                                                         //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) UIAlertController * activityAlertController;                                           //@synthesize activityAlertController=_activityAlertController - In the implementation block
@property (nonatomic,retain) _UIAlertControllerShimPresenter * activityAlertControllerShimPresenter;                //@synthesize activityAlertControllerShimPresenter=_activityAlertControllerShimPresenter - In the implementation block
@property (nonatomic,retain) _UIActivityGroupListViewController * activityGroupListViewController;                  //@synthesize activityGroupListViewController=_activityGroupListViewController - In the implementation block
@property (nonatomic,retain) UIAlertAction * activityAlertCancelAction;                                             //@synthesize activityAlertCancelAction=_activityAlertCancelAction - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityItemProviderOperationQueue;                                 //@synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue - In the implementation block
@property (assign,nonatomic) int totalProviderCount;                                                                //@synthesize totalProviderCount=_totalProviderCount - In the implementation block
@property (assign,nonatomic) int completedProviderCount;                                                            //@synthesize completedProviderCount=_completedProviderCount - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier;                                                     //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (assign,nonatomic) int originalPopoverBackgroundStyle;                                                    //@synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle - In the implementation block
@property (nonatomic,retain) Class originalPopoverBackgroundViewClass;                                              //@synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) SFAirDropActivityViewController * airDropViewController;                               //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (nonatomic,copy) id _popoverDismissalAction;                                                              //@synthesize _popoverDismissalAction=__popoverDismissalAction - In the implementation block
@property (assign,nonatomic) char willDismissActivityViewController;                                                //@synthesize willDismissActivityViewController=_willDismissActivityViewController - In the implementation block
@property (nonatomic,retain) _UIActivityApplicationExtensionDiscovery * applicationExtensionDiscovery;              //@synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery - In the implementation block
@property (assign,nonatomic) char performActivityForStateRestoration;                                               //@synthesize performActivityForStateRestoration=_performActivityForStateRestoration - In the implementation block
@property (assign,nonatomic) char shouldMatchOnlyUserElectedExtensions;                                             //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_activeActivityViewControllers;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 activity:(id)arg3 ;
+(id)_dataTypeIdentifierForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_subjectForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_thumbnailImageForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_attachmentNameForActivityItem:(id)arg1 activity:(id)arg2 ;
+(void)_reloadImageForActivity:(id)arg1 ;
+(void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3 ;
+(void)_clearActivityItems:(id)arg1 ;
-(void)_gkCallOnSuperSkippingSelf_viewDidAppear:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalPresentationStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(char)_requiresCustomPresentationController;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_containedAlertController;
-(id)visualStyleForAlertControllerStyle:(int)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(id)activityGroupViewController:(id)arg1 availableActivitiesInCategory:(int)arg2 ;
-(void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2 ;
-(void)setCompletionWithItemsHandler:(id)arg1 ;
-(char)sourceIsManaged;
-(void)setSubject:(NSString *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(char)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(UIViewController *)activityViewController;
-(UIActivity *)activity;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)_cancel;
-(id)_availableActivities;
-(SFAirDropActivityViewController *)airDropViewController;
-(void)setAirDropViewController:(SFAirDropActivityViewController *)arg1 ;
-(void)_reloadImageForActivity:(id)arg1 ;
-(_UIActivityGroupListViewController *)activityGroupListViewController;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(void)_notifyReloadImageForActivity:(id)arg1 ;
-(void)setWillDismissActivityViewController:(char)arg1 ;
-(void)setActivityAlertCancelAction:(UIAlertAction *)arg1 ;
-(void)setActivityAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)activityAlertController;
-(void)setActivityAlertControllerShimPresenter:(_UIAlertControllerShimPresenter *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(id)_availableActivitiesForItems:(id)arg1 applicationExtensionActivities:(id)arg2 ;
-(_UIActivityApplicationExtensionDiscovery *)applicationExtensionDiscovery;
-(void)setApplicationExtensionDiscovery:(_UIActivityApplicationExtensionDiscovery *)arg1 ;
-(char)shouldMatchOnlyUserElectedExtensions;
-(id)_activityItemValues;
-(void)_updateActivities:(id)arg1 animated:(char)arg2 ;
-(char)_shouldExcludeActivityType:(id)arg1 ;
-(int)excludedActivityCategories;
-(NSArray *)includedActivityTypes;
-(NSArray *)activityItems;
-(NSArray *)activityTypeOrder;
-(id)_availableActivitiesForItems:(id)arg1 ;
-(void)_updateActivityItems:(id)arg1 animated:(char)arg2 ;
-(void)setShouldMatchOnlyUserElectedExtensions:(char)arg1 ;
-(id)_newActivityGroupViewControllerForItems:(id)arg1 category:(int)arg2 userDefaults:(id)arg3 ;
-(char)allowsEmbedding;
-(void)_setDarkStyleOnLegacyApp;
-(_UIAlertControllerShimPresenter *)activityAlertControllerShimPresenter;
-(void)_updatePreferredContentSizes;
-(void)_removeFromActiveActivityViewControllers;
-(void)setPreCompletionHandler:(id)arg1 ;
-(char)willDismissActivityViewController;
-(void)setActivity:(UIActivity *)arg1 ;
-(void)setActivityItemProviderOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_cleanupActivityWithSuccess:(char)arg1 items:(id)arg2 error:(id)arg3 ;
-(char)performActivityForStateRestoration;
-(void)_cleanupActivityWithSuccess:(char)arg1 ;
-(char)showKeyboardAutomatically;
-(NSString *)mailAutosaveIdentifier;
-(NSString *)subject;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPerformActivityForStateRestoration:(char)arg1 ;
-(void)_addToActiveActivityViewControllers;
-(void)set_popoverDismissalAction:(id)arg1 ;
-(void)_resetAfterActivity:(char)arg1 ;
-(void)_executeActivity;
-(char)useBlackPopoverStyle;
-(id)_popoverDismissalAction;
-(NSOperationQueue *)activityItemProviderOperationQueue;
-(UIAlertAction *)activityAlertCancelAction;
-(void)_changeActionButtonToDone;
-(void)airDropActivityRequestingSharedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)airDropActivityDidSuccessfullyCompleteTransfer;
-(void)airDropActivityDidSuccessfullyStartTransfer;
-(void)_updateActivityItems:(id)arg1 ;
-(float)_displayHeight;
-(void)_mailAutosaveWithHandler:(/*^block*/id)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)_performActivityOfType:(id)arg1 ;
-(id)completionWithItemsHandler;
-(void)setUseBlackPopoverStyle:(char)arg1 ;
-(void)setShowKeyboardAutomatically:(char)arg1 ;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(void)setExcludedActivityCategories:(int)arg1 ;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(void)setAllowsEmbedding:(char)arg1 ;
-(void)setMailAutosaveIdentifier:(NSString *)arg1 ;
-(id)preCompletionHandler;
-(id<UIActivityViewControllerDelegate>)airDropDelegate;
-(void)setAirDropDelegate:(id<UIActivityViewControllerDelegate>)arg1 ;
-(NSArray *)applicationActivities;
-(void)setActivityGroupListViewController:(_UIActivityGroupListViewController *)arg1 ;
-(int)totalProviderCount;
-(void)setTotalProviderCount:(int)arg1 ;
-(int)completedProviderCount;
-(void)setCompletedProviderCount:(int)arg1 ;
-(unsigned)backgroundTaskIdentifier;
-(int)originalPopoverBackgroundStyle;
-(void)setOriginalPopoverBackgroundStyle:(int)arg1 ;
-(Class)originalPopoverBackgroundViewClass;
-(void)setOriginalPopoverBackgroundViewClass:(Class)arg1 ;
@end

