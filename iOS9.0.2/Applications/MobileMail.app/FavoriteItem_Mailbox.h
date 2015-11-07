/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox : FavoriteItem {

	MFMailboxUid* _mailbox;
	MailAccount* _account;
	int _mailboxType;
	NSString* _accountRelativePath;
	NSString* _displayName;
	char _originalPushState;

}

@property (assign,nonatomic) char originalPushState;              //@synthesize originalPushState=_originalPushState - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
+(char)_defaultShouldSync;
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(char)arg2 ;
-(void)wasAddedToCollection:(id)arg1 ;
-(void)wasRemovedFromCollecion:(id)arg1 ;
-(id)syncValue;
-(void)wasChangedExternally;
-(int)_defaultCellAccessoryType;
-(void)setOriginalPushState:(char)arg1 ;
-(char)originalPushState;
-(MFMailboxUid *)mailbox;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(char)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
-(void)_postNotification;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(char)isDeletable;
-(id)syncKey;
-(id)account;
@end
