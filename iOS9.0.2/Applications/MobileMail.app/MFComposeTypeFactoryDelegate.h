/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(char)arg1;

@required
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)bodyField;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(char)arg2;
-(id)bccRecipients;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1;
-(char)hasAnyHiddenTrailingEmptyQuote;
-(void)setToRecipients:(id)arg1;
-(id)attachments;
-(void)setSubject:(id)arg1;
-(id)subject;

@end

