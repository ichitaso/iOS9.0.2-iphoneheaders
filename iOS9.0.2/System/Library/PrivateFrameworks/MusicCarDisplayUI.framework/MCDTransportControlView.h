/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIImage;

@interface MCDTransportControlView : UIView {

	char _progressActive;
	int _mode;
	UIButton* _leftButton;
	UIButton* _playPauseButton;
	UIButton* _fastForwardButton;
	UIImage* _pauseImage;

}

@property (assign,nonatomic) int mode;                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                           //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * fastForwardButton;                         //@synthesize fastForwardButton=_fastForwardButton - In the implementation block
@property (assign,nonatomic) char progressActive;                                    //@synthesize progressActive=_progressActive - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                   //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,readonly) UIImage * defaultLeftButtonImage; 
@property (nonatomic,readonly) UIImage * defaultFastForwardButtonImage; 
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_addConstraints;
-(void)setPauseImage:(UIImage *)arg1 ;
-(UIButton *)playPauseButton;
-(UIImage *)pauseImage;
-(UIImage *)defaultLeftButtonImage;
-(UIImage *)defaultFastForwardButtonImage;
-(void)_updateProgressActive;
-(void)setProgressActive:(char)arg1 ;
-(UIButton *)fastForwardButton;
-(char)progressActive;
-(UIButton *)leftButton;
@end
