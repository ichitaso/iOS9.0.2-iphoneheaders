/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogFullOperators/PowerlogFullOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition;

@interface PLSyslogAgent : PLAgent {

	int kq;
	unsigned lastMessageID;
	unsigned syslogdPid;
	CFRunLoopSourceRef fileDescriptorSource;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(void)logEventPointLogLine;
-(void)listenForSyslogDeath;
-(void)enumerateResultsOfASLQuery:(asl_object_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)resetMessageIndex;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
@end
