/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPUCellInvalidationContext : NSObject {

	char _invalidateEverything;
	char _invalidateDownloadStatus;
	char _invalidateLayout;
	char _animated;

}

@property (assign,nonatomic) char invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (assign,nonatomic) char invalidateDownloadStatus;                //@synthesize invalidateDownloadStatus=_invalidateDownloadStatus - In the implementation block
@property (assign,nonatomic) char invalidateLayout;                        //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,getter=isAnimated,nonatomic) char animated;              //@synthesize animated=_animated - In the implementation block
-(char)isAnimated;
-(void)setAnimated:(char)arg1 ;
-(char)invalidateLayout;
-(char)invalidateEverything;
-(void)setInvalidateEverything:(char)arg1 ;
-(char)invalidateDownloadStatus;
-(void)setInvalidateLayout:(char)arg1 ;
-(void)setInvalidateDownloadStatus:(char)arg1 ;
@end

