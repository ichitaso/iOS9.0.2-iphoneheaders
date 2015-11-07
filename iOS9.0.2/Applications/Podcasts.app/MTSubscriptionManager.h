/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTBaseFeedManager.h>

@class NSMutableDictionary;

@interface MTSubscriptionManager : MTBaseFeedManager {

	NSMutableDictionary* _feedUrlsToParams;

}

@property (nonatomic,retain) NSMutableDictionary * feedUrlsToParams;              //@synthesize feedUrlsToParams=_feedUrlsToParams - In the implementation block
-(void)task:(id)arg1 didCompleteWithData:(id)arg2 ;
-(void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(int)arg3 ;
-(void)subscribeToPodcastWithParams:(id)arg1 ;
-(void)setFeedUrlsToParams:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)feedUrlsToParams;
-(void)showSubscriptionFailureDialog:(id)arg1 ;
-(void)removeSubscribeParamsForFeedUrl:(id)arg1 ;
-(void)addSubscribeParams:(id)arg1 forFeedUrl:(id)arg2 ;
-(id)subscribeParamsForFeedUrl:(id)arg1 ;
-(id)init;
@end
