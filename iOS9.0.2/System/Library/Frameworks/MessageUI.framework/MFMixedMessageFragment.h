/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {

	NSString* _markupString;
	NSData* _markupData;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSURL* _baseURL;

}
-(id)initWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(id)markupString;
-(id)markupData;
-(id)encodingName;
-(void)dealloc;
-(id)description;
-(id)mimeType;
-(id)baseURL;
@end
