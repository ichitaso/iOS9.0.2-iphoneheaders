/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/QLContentView.h>
#import <UIKit/UIToolbarDelegate.h>

@class QLDocumentInfoView, QuickLookBannerView, NSString;

@interface QLContentViewIPhone : UIView <QLContentView, UIToolbarDelegate> {

	QLDocumentInfoView* _documentInfoView;
	QuickLookBannerView* _bannerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 quickLookBannerViewDelegate:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)positionForBar:(id)arg1 ;
-(void)showBanner;
-(void)hideBanner;
@end
