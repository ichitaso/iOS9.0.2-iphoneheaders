/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/WebContentAnalysisUI.app/WebContentAnalysisUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebContentAnalysisUI/WebContentAnalysisUI-Structs.h>
#import <Preferences/DevicePINController.h>

@class NSObject;

@interface WFServicePINEntryViewController : DevicePINController {

	NSObject* _delegate;

}

@property (assign,nonatomic,__weak) NSObject * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)settingEnabled;
-(void)setDelegate:(NSObject *)arg1 ;
-(id)init;
-(NSObject *)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)setPane:(id)arg1 ;
-(char)requiresKeyboard;
-(CFStringRef)defaultsID;
-(char)validatePIN:(id)arg1 ;
-(char)isNumericPIN;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsTable;
-(char)simplePIN;
-(char)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)performActionAfterPINSet;
-(void)setPIN:(id)arg1 ;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINEntry;
@end
