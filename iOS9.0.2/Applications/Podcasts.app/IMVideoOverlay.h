/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class IMAVPlayer, UINavigationBar, IMPlayerItem;


@protocol IMVideoOverlay
@property (assign,nonatomic) char allowsWirelessPlayback; 
@property (assign,nonatomic) char navigationBarHidden; 
@property (nonatomic,retain) IMAVPlayer * player; 
@property (nonatomic,retain,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic,__weak) id<IMVideoOverlayDelegate> delegate; 
@property (nonatomic,retain) IMPlayerItem * item; 
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) unsigned long long disabledParts; 
@required
-(void)setAllowsWirelessPlayback:(char)arg1;
-(char)allowsWirelessPlayback;
-(char)navigationBarHidden;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1;
-(void)setVisibleParts:(unsigned long long)arg1;
-(void)setDisabledParts:(unsigned long long)arg1;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(char)arg2;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(char)arg2;
-(unsigned long long)disabledParts;
-(void)stopTicking;
-(void)startTicking;
-(char)updateTimeBasedValues;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(void)setPlayer:(id)arg1;
-(IMAVPlayer *)player;
-(void)setDelegate:(id)arg1;
-(id<IMVideoOverlayDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(IMPlayerItem *)item;
-(void)setNavigationBarHidden:(char)arg1;
-(void)setItem:(id)arg1;

@end

