/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class NSURL, NSString;

@interface ICSaveToICloudDriveActivity : UIActivity <UIDocumentPickerDelegate> {

	NSURL* _fileURL;

}

@property (nonatomic,retain) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURLFromActivityItems:(id)arg1 ;
-(id)activityType;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
@end

