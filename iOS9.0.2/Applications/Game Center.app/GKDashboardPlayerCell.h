/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class GKPlayer, GKDashboardPlayerShadowView, NSLayoutConstraint, UILabel, UIColor, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell {

	char _onDarkBackground;
	GKPlayer* _player;
	GKDashboardPlayerShadowView* _playerView;
	NSLayoutConstraint* _playerViewBottomToNameLabelTopConstraint;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UIColor* _nameColor;
	UIColor* _statusColor;
	float _playerViewBottomToNameLabelTopConstant;

}

@property (nonatomic,retain) GKPlayer * player;                                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char onDarkBackground;                                                      //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (assign,nonatomic) GKDashboardPlayerShadowView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * playerViewBottomToNameLabelTopConstraint;              //@synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * statusLabel;                                                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIColor * nameColor;                                                        //@synthesize nameColor=_nameColor - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                                                      //@synthesize statusColor=_statusColor - In the implementation block
@property (assign,nonatomic) float playerViewBottomToNameLabelTopConstant;                               //@synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant - In the implementation block
+(float)preferredCollectionHeight;
+(CGSize)defaultSize;
-(void)setNameColor:(UIColor *)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(void)setPlayerViewBottomToNameLabelTopConstant:(float)arg1 ;
-(void)setOnDarkBackground:(char)arg1 ;
-(void)setStatusWithLastPlayedDate:(id)arg1 ;
-(char)onDarkBackground;
-(void)setPlayerView:(GKDashboardPlayerShadowView *)arg1 ;
-(NSLayoutConstraint *)playerViewBottomToNameLabelTopConstraint;
-(void)setPlayerViewBottomToNameLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)nameColor;
-(UIColor *)statusColor;
-(float)playerViewBottomToNameLabelTopConstant;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(GKDashboardPlayerShadowView *)playerView;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)setStatusText:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(char)canBecomeFocused;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIView *)popoverSourceView;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setNameText:(id)arg1 ;
@end

