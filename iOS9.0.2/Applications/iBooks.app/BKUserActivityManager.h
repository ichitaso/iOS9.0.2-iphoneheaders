/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAssertion;
@class NSUserActivity;

@interface BKUserActivityManager : NSObject {

	NSUserActivity* _currentActivity;
	id<IMAssertion> _holdAtLaunchScreenAssertion;

}

@property (nonatomic,retain) NSUserActivity * currentActivity;                         //@synthesize currentActivity=_currentActivity - In the implementation block
@property (nonatomic,retain) id<IMAssertion> holdAtLaunchScreenAssertion;              //@synthesize holdAtLaunchScreenAssertion=_holdAtLaunchScreenAssertion - In the implementation block
+(id)sharedInstance;
-(void)startReadingAsset:(id)arg1 ;
-(void)stopReadingCurrentAsset;
-(void)setCurrentActivity:(NSUserActivity *)arg1 ;
-(void)setHoldAtLaunchScreenAssertion:(id<IMAssertion>)arg1 ;
-(char)willContinueActivityWithType:(id)arg1 ;
-(char)continueActivity:(id)arg1 ;
-(id<IMAssertion>)holdAtLaunchScreenAssertion;
-(void)willEnterForeground;
-(NSUserActivity *)currentActivity;
-(void)didEnterBackground;
@end
