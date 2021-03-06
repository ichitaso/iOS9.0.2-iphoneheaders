/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iap2d/iAP2IdentificationParameter.h>

@class NSNumber;

@interface iAP2CameraAreaOfInterest : iAP2IdentificationParameter {

	NSNumber* _horizontalOrigin;
	NSNumber* _verticalOrigin;
	NSNumber* _width;
	NSNumber* _height;

}

@property (assign) NSNumber * horizontalOrigin;              //@synthesize horizontalOrigin=_horizontalOrigin - In the implementation block
@property (assign) NSNumber * verticalOrigin;                //@synthesize verticalOrigin=_verticalOrigin - In the implementation block
@property (assign) NSNumber * width;                         //@synthesize width=_width - In the implementation block
@property (assign) NSNumber * height;                        //@synthesize height=_height - In the implementation block
-(NSNumber *)horizontalOrigin;
-(void)setHorizontalOrigin:(NSNumber *)arg1 ;
-(NSNumber *)verticalOrigin;
-(void)setVerticalOrigin:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
@end

