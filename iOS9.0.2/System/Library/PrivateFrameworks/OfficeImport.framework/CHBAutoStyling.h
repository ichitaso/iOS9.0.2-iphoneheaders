/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHAutoStyling.h>
#import <libobjc.A.dylib/CHAutoStyling.h>

@class NSString;

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fillWithColorIndex:(unsigned)arg1 ;
-(id)strokeWithColorIndex:(int)arg1 ;
-(id)autoFill;
-(id)autoStroke;
-(void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(char)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(char)arg7 ;
-(id)autoSeriesFill:(unsigned)arg1 ;
-(id)autoStrokeForSeriesIndex:(unsigned)arg1 ;
-(id)autoSeriesBorderStroke;
-(void)resolveAxisGraphicProperties:(id)arg1 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveWallGraphicProperties:(id)arg1 ;
-(void)resolveFloorGraphicProperties:(id)arg1 ;
-(void)resolveLegendGraphicProperties:(id)arg1 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(void)resolveChartAreaGraphicProperties:(id)arg1 ;
-(id)autoTextFill;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 isLine:(BOOL)arg3 ;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned)arg3 clientGraphicPropertyDefaults:(/*^block*/id)arg4 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
@end
