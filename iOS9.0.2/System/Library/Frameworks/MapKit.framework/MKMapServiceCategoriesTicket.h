/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol MKMapServiceCategoriesTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;

@end
