/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileSafari/BookmarkFavoritesGridViewDelegate.h>

@protocol UIViewControllerPreviewing, BookmarkFavoritesViewControllerDelegate;
@class WebBookmarkCollection, WebBookmarkList, NSString;

@interface BookmarkFavoritesViewController : UIViewController <BookmarkFavoritesGridViewDelegate> {

	WebBookmarkCollection* _collection;
	WebBookmarkList* _favoritesList;
	char _showWhitelistFavorites;
	id<UIViewControllerPreviewing> _gridViewPreviewingContext;
	id<BookmarkFavoritesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BookmarkFavoritesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBookmarksCollection:(id)arg1 showWhiteListFavorites:(char)arg2 ;
-(void)setAdjustedForSidebar:(char)arg1 ;
-(id)bookmarksNavigationController;
-(void)setScrollViewScrollsToTop:(char)arg1 ;
-(void)loadFavoritesList;
-(void)bookmarkFavoritesGridView:(id)arg1 updatedContentSize:(CGSize)arg2 ;
-(int)bookmarkFavoritesGridViewLayoutType:(id)arg1 ;
-(char)bookmarkFavoritesGridViewShouldReorderBookmarks:(id)arg1 ;
-(void)bookmarkFavoritesGridViewDidReorderBookmarks:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg1 didReorderBookmarkFromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)bookmarkFavoritesGridView:(id)arg1 promoteFrequentlyVisitedSite:(id)arg2 toFavoriteAtIndex:(unsigned)arg3 ;
-(void)didTapOutsideBookmarkFavoritesGridView:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg1 editBookmark:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg1 deleteBookmark:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg1 banFrequentlyVisitedSite:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg1 didSelectBookmark:(id)arg2 ;
-(void)_receivedBookmarksReloadOrSpecialFolderChangeNotification:(id)arg1 ;
-(void)_receivedFrequentlyVisitedSitesDidChangeNotification:(id)arg1 ;
-(id)_bookmarkFavoritesGridView;
-(void)_updateVisibleFrequentlyVisitedSites;
-(void)_recomputeFrequentlyVisitedSitesIfNecessary;
-(void)_updateFavoritesListDueToBookmarksReload:(char)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg1 activityWasSelected:(id)arg2 ;
-(void)setDelegate:(id<BookmarkFavoritesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BookmarkFavoritesViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

