/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	OADColor* mBgColor;
	OADPattern* mPattern;

}
+(id)defaultProperties;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)setPattern:(id)arg1 ;
-(void)setFgColor:(id)arg1 ;
-(void)setBgColor:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)pattern;
-(char)isFgColorOverridden;
-(char)isBgColorOverridden;
-(char)isPatternOverridden;
-(id)fgColor;
-(id)bgColor;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
-(id)initWithDefaults;
-(char)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

