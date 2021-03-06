/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class NSSet, NSArray, UILabel;

@interface SiriMoviesShowtimeListView : UIView {

	char _hasLeadingTypeLabel;
	NSSet* _showtimes;
	NSArray* _labelGroups;
	UILabel* _moreShowtimesIndicator;

}

@property (nonatomic,copy) NSSet * showtimes;                                                                //@synthesize showtimes=_showtimes - In the implementation block
@property (setter=_setLabelGroups:,getter=_labelGroups,nonatomic,copy) NSArray * labelGroups;                //@synthesize labelGroups=_labelGroups - In the implementation block
@property (getter=_moreShowtimesIndicator,nonatomic,readonly) UILabel * moreShowtimesIndicator;              //@synthesize moreShowtimesIndicator=_moreShowtimesIndicator - In the implementation block
@property (assign,nonatomic) char hasLeadingTypeLabel;                                                       //@synthesize hasLeadingTypeLabel=_hasLeadingTypeLabel - In the implementation block
-(float)ascenderHeight;
-(char)hasLeadingTypeLabel;
-(id)_mediumFont;
-(id)_createShowtimeLabelAsAnnotation:(char)arg1 ;
-(void)setHasLeadingTypeLabel:(char)arg1 ;
-(void)_calculateLabelFramesForSize:(CGSize)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_labelStringForAllTheSameShowtimes;
-(void)_setLabelGroups:(id)arg1 ;
-(char)_isShowtimeAnnotationLabel:(id)arg1 ;
-(id)_moreShowtimesIndicator;
-(id)_labelGroups;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)_defaultFont;
-(NSSet *)showtimes;
-(void)setShowtimes:(NSSet *)arg1 ;
@end

