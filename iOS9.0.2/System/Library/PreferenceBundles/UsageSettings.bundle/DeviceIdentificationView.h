/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface DeviceIdentificationView : UIView {

	UIImageView* _deviceImageView;
	UILabel* _deviceNameLabel;
	UILabel* _deviceModelLabel;

}

@property (nonatomic,retain) UIImage * deviceImage; 
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(char)arg5 ;
-(void)setDeviceImage:(UIImage *)arg1 ;
-(void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2 ;
-(UIImage *)deviceImage;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
@end

