/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class BBSectionInfo;

@interface COSNotificationAppController : BPSNotificationAppController {

	BBSectionInfo* _bbSectionInfo;

}

@property (nonatomic,retain) BBSectionInfo * bbSectionInfo;              //@synthesize bbSectionInfo=_bbSectionInfo - In the implementation block
-(BBSectionInfo *)bbSectionInfo;
-(id)localizedPaneTitle;
-(void)setBbSectionInfo:(BBSectionInfo *)arg1 ;
-(id)applicationBundleIdentifier;
@end
