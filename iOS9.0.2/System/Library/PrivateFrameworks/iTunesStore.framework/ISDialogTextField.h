/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding> {

	int _keyboardType;
	char _secure;
	NSString* _title;
	NSString* _value;

}

@property (assign) int keyboardType;                                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecure) char secure;                            //@synthesize secure=_secure - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) NSString * value;                                //@synthesize value=_value - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFieldWithTitle:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSecure:(char)arg1 ;
-(char)isSecure;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
@end

