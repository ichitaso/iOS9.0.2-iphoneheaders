/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SANPMovePlayhead : SADomainCommand

@property (nonatomic,copy) NSNumber * playbackPositionInMilliseconds; 
+(id)movePlayhead;
+(id)movePlayheadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSNumber *)playbackPositionInMilliseconds;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
@end

