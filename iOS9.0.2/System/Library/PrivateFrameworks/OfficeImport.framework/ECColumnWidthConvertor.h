/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECColumnWidthConvertor : NSObject {

	int mMultiplier;

}
-(double)lassoColumnWidthFromXl:(double)arg1 ;
-(void)setupWithEDFont:(id)arg1 state:(id)arg2 ;
-(double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1 ;
-(CGSize)stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3 ;
-(float)fontWidthAdjustmentFor:(id)arg1 ;
-(double)xlColumnWidthFromLasso:(double)arg1 ;
@end
