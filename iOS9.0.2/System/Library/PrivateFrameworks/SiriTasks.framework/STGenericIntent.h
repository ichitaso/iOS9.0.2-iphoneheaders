/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, AFSiriTask, STGenericIntentRequest;

@interface STGenericIntent : NSObject <NSCoding> {

	char _appInForeground;
	char _isLaunch;
	char _handled;
	char _finishedState;
	NSString* _name;
	NSString* _utterance;
	NSString* _attributes;
	NSMutableDictionary* _parameters;
	AFSiriTask* _siriTask;
	STGenericIntentRequest* _intentRequest;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utterance;                                  //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy) NSString * attributes;                                 //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) char appInForeground;                                //@synthesize appInForeground=_appInForeground - In the implementation block
@property (assign,nonatomic) char isLaunch;                                       //@synthesize isLaunch=_isLaunch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) AFSiriTask * siriTask;                               //@synthesize siriTask=_siriTask - In the implementation block
@property (nonatomic,retain) STGenericIntentRequest * intentRequest;              //@synthesize intentRequest=_intentRequest - In the implementation block
@property (assign,nonatomic) char handled;                                        //@synthesize handled=_handled - In the implementation block
@property (assign,nonatomic) char finishedState;                                  //@synthesize finishedState=_finishedState - In the implementation block
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(void)handleWithProgress:(int)arg1 ;
-(void)finished;
-(id)getPlacesParameter:(id)arg1 ;
-(id)getDateRangeParameter:(id)arg1 ;
-(id)getGroupParameter:(id)arg1 ;
-(id)getPersonParameter:(id)arg1 ;
-(id)getTopicParameter:(id)arg1 ;
-(char)isLaunch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(NSString *)attributes;
-(id)initWithName:(id)arg1 ;
-(void)setAttributes:(NSString *)arg1 ;
-(char)finishedState;
-(void)setFinishedState:(char)arg1 ;
-(AFSiriTask *)siriTask;
-(STGenericIntentRequest *)intentRequest;
-(void)setHandled:(char)arg1 ;
-(void)setSiriTask:(AFSiriTask *)arg1 ;
-(void)setIntentRequest:(STGenericIntentRequest *)arg1 ;
-(void)addParam:(id)arg1 withValue:(id)arg2 ;
-(char)appInForeground;
-(void)setAppInForeground:(char)arg1 ;
-(void)setIsLaunch:(char)arg1 ;
-(char)handled;
@end

