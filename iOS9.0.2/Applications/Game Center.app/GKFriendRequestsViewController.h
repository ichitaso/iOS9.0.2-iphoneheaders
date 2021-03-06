/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestsViewController : GKBasicCollectionViewController {

	GKPlayer* _selectedPlayer;

}

@property (nonatomic,retain) GKPlayer * selectedPlayer;              //@synthesize selectedPlayer=_selectedPlayer - In the implementation block
+(id)friendRequestsViewController;
-(GKPlayer *)selectedPlayer;
-(void)setSelectedPlayer:(GKPlayer *)arg1 ;
-(void)selectPlayer:(id)arg1 ;
-(id)playerToSelect;
-(id)friendRequestsDataSource;
-(void)refreshPresenter;
-(void)dealloc;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg1 ;
-(char)isMasterViewController;
-(id)preservedIndexPathForSelectedItem;
-(void)didEnterNoContentState;
-(void)didTouchAcceptForPlayer:(id)arg1 ;
-(void)didTouchIgnoreForPlayer:(id)arg1 ;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

