/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	char _isCustom;
	char _wasInitalizedFromDictionaryRepresentation;
	NSString* _languageCode;
	int _gender;
	int _footprint;
	NSString* _name;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,readonly) NSString * languageCode;                                     //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) int gender;                                                    //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) char isCustom;                                                 //@synthesize isCustom=_isCustom - In the implementation block
@property (nonatomic,readonly) int footprint;                                               //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;                                   //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;                                  //@synthesize masteredVersion=_masteredVersion - In the implementation block
@property (nonatomic,readonly) char wasInitalizedFromDictionaryRepresentation;              //@synthesize wasInitalizedFromDictionaryRepresentation=_wasInitalizedFromDictionaryRepresentation - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(id)initWithLanguageCode:(id)arg1 gender:(int)arg2 isCustom:(char)arg3 name:(id)arg4 footprint:(int)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7 ;
-(id)initWithLanguageCode:(id)arg1 gender:(int)arg2 isCustom:(char)arg3 ;
-(id)genderString;
-(id)footprintString;
-(id)initWithLanguageCode:(id)arg1 ;
-(void)setIsCustom:(char)arg1 ;
-(char)wasInitalizedFromDictionaryRepresentation;
-(int)footprint;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(char)isCustom;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(NSString *)masteredVersion;
-(NSNumber *)contentVersion;
@end

