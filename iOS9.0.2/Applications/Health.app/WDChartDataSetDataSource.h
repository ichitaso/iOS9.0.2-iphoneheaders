/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WDChartDataSetDataSource <NSObject>
@optional
-(id)dataSet:(id)arg1 annotationForPointAtIndex:(unsigned)arg2;
-(id)dataPointsForSet:(id)arg1;

@required
-(unsigned)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned)arg2;

@end

