/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, NSDate;


@protocol _SSURLCompletionMatch <NSObject>
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) int matchLocation; 
@property (getter=isTopHit,nonatomic,readonly) char topHit; 
@property (getter=isSynthesizedTopHit,nonatomic,readonly) char synthesizedTopHit; 
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) char topHitDueToTriggerMatch; 
@property (nonatomic,readonly) int visitCount; 
@property (nonatomic,readonly) NSDate * lastVisitTime; 
@required
-(NSURL *)url;
-(NSString *)title;
-(NSString *)userVisibleURLString;
-(int)visitCount;
-(NSDate *)lastVisitTime;
-(char)isTopHit;
-(int)matchLocation;
-(char)isSynthesizedTopHit;
-(char)isTopHitDueToTriggerMatch;

@end

