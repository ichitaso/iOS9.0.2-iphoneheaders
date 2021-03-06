/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookRemoteSessionProtocol;
@interface SLFacebookSession : NSObject {

	id<SLFacebookRemoteSessionProtocol> _remoteSession;

}
+(id)_remoteInterface;
+(id)sharedSession;
-(char)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(char)arg2 withPostCompletion:(/*^block*/id)arg3 ;
-(void)uploadsInProgress:(/*^block*/id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)testCall;
-(char)uploadPost:(id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(char)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
@end

