/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class _UIBackdropView, UITextView, MTPlayerItem, NSString;

@interface MusicNowPlayingLyricsViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	_UIBackdropView* _backdropView;
	UITextView* _textView;
	MTPlayerItem* _currentItem;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) MTPlayerItem * currentItem;                    //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setCurrentItem:(MTPlayerItem *)arg1 ;
-(MTPlayerItem *)currentItem;
-(UITextView *)textView;
-(_UIBackdropView *)backdropView;
-(void)_updateLyrics;
@end

