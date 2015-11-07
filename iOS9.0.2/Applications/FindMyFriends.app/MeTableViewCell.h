/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, FMFHorizontalRule, NSLayoutConstraint;

@interface MeTableViewCell : UITableViewCell {

	char _needsTopSeparator;
	char _needsBottomSeparator;
	char _topSeparatorFullWidth;
	char _bottomSeparatorFullWidth;
	UILabel* _textLabelModified;
	UILabel* _detailTextLabelModified;
	FMFHorizontalRule* _topRule;
	FMFHorizontalRule* _bottomRule;
	NSLayoutConstraint* _topRuleLeftConstraint;
	NSLayoutConstraint* _bottomRuleLeftConstraint;

}

@property (assign,nonatomic) char needsTopSeparator;                                     //@synthesize needsTopSeparator=_needsTopSeparator - In the implementation block
@property (assign,nonatomic) char needsBottomSeparator;                                  //@synthesize needsBottomSeparator=_needsBottomSeparator - In the implementation block
@property (assign,nonatomic) char topSeparatorFullWidth;                                 //@synthesize topSeparatorFullWidth=_topSeparatorFullWidth - In the implementation block
@property (assign,nonatomic) char bottomSeparatorFullWidth;                              //@synthesize bottomSeparatorFullWidth=_bottomSeparatorFullWidth - In the implementation block
@property (nonatomic,retain) UILabel * textLabelModified;                                //@synthesize textLabelModified=_textLabelModified - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabelModified;                          //@synthesize detailTextLabelModified=_detailTextLabelModified - In the implementation block
@property (nonatomic,retain) FMFHorizontalRule * topRule;                                //@synthesize topRule=_topRule - In the implementation block
@property (nonatomic,retain) FMFHorizontalRule * bottomRule;                             //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topRuleLeftConstraint;                 //@synthesize topRuleLeftConstraint=_topRuleLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomRuleLeftConstraint;              //@synthesize bottomRuleLeftConstraint=_bottomRuleLeftConstraint - In the implementation block
-(FMFHorizontalRule *)topRule;
-(void)setTopRule:(FMFHorizontalRule *)arg1 ;
-(void)addRules;
-(void)setNeedsTopSeparator:(char)arg1 ;
-(void)setNeedsBottomSeparator:(char)arg1 ;
-(void)setTopSeparatorFullWidth:(char)arg1 ;
-(void)setBottomSeparatorFullWidth:(char)arg1 ;
-(char)topSeparatorFullWidth;
-(NSLayoutConstraint *)topRuleLeftConstraint;
-(char)bottomSeparatorFullWidth;
-(NSLayoutConstraint *)bottomRuleLeftConstraint;
-(id)lineBreakForTop:(char)arg1 ;
-(void)setTopRuleLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomRuleLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomRule:(FMFHorizontalRule *)arg1 ;
-(void)refreshCell;
-(char)needsTopSeparator;
-(char)needsBottomSeparator;
-(UILabel *)textLabelModified;
-(void)setTextLabelModified:(UILabel *)arg1 ;
-(UILabel *)detailTextLabelModified;
-(void)setDetailTextLabelModified:(UILabel *)arg1 ;
-(FMFHorizontalRule *)bottomRule;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
@end
