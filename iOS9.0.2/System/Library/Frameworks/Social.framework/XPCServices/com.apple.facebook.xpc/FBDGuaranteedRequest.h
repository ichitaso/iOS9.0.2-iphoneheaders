/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.facebook.xpc/com.apple.facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SLFacebookRequest;

@interface FBDGuaranteedRequest : NSObject {

	SLFacebookRequest* _request;

}

@property (nonatomic,retain) SLFacebookRequest * request;              //@synthesize request=_request - In the implementation block
-(void)_addBackgroundTaskAgentJob;
-(SLFacebookRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)perform;
-(void)setRequest:(SLFacebookRequest *)arg1 ;
@end

