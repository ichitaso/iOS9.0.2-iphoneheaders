/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSDate, NSNumber, NSArray, NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface PLBBMavLogMsg : PLBasebandMessage {

	NSDate* _bbDate;
	NSNumber* _bbTimeCal;
	NSNumber* _bbSeqNum;
	NSNumber* _bbHwMsgType;
	NSNumber* _bbSwRev;
	NSNumber* _bbHwRev;
	NSNumber* _bbHwStatsType;
	NSNumber* _bbHwStatsLength;
	NSNumber* _bbHwStatsLevel;
	NSNumber* _bbHwCurrTimeStamp;
	NSNumber* _bbHwLastTimeStamp;
	NSNumber* _bbHwLogDurationInTicks;
	NSArray* _bbHwProcSystemState;
	NSArray* _bbHwProcArmPerfState;
	NSArray* _bbHwModemAppMdspState;
	NSArray* _bbHwModemAppMdspClockState;
	NSArray* _bbHwModemAppMdmState;
	NSArray* _bbHwModemAppMdmSpeed;
	NSArray* _bbHwModemAppQ6FwSpeed;
	NSArray* _bbHwModemAppQ6SwSpeed;
	NSArray* _bbHwModemAppMdspSpeed;
	NSArray* _bbHwModemAppQdspSpeed;
	NSArray* _bbHwModemAppAdspState;
	NSArray* _bbHwModemAppAdspClockState;
	NSArray* _bbHwModemAppAdspSpeed;
	NSArray* _bbHwModemAppAdmState;
	NSArray* _bbHwPeripheralUSBState;
	NSArray* _bbHwPeripheralSPIState;
	NSArray* _bbHwPeripheralGPSState;
	NSArray* _bbHwPeripheralUARTState;
	NSArray* _bbHwSleepVetoClientListQdsp;
	NSArray* _bbHwSleepVetoClientListArm;
	NSNumber* _rpmXOShutDuration;
	NSNumber* _rpmXOShutCnt;
	NSNumber* _rpmVDDMinEnterCnt;
	NSNumber* _rpmVDDMinDuration;
	NSArray* _appsPerfStateCountHist;
	NSNumber* _cxoShutDownDuration;
	NSNumber* _cxoShutDownCount;
	NSArray* _usbStateCountHist;
	NSArray* _uartOnOffState;
	NSArray* _spiOnOffState;
	NSArray* _admOnOffState;
	NSArray* _lpassOnOffState;
	NSArray* _appsSleepVeto;
	NSArray* _mpssSleepVeto;
	NSArray* _mdspConfigCount;
	NSArray* _qdspConfigCount;
	NSArray* _gpsOnOff;
	NSArray* _gpsDPOOnOff;
	NSArray* _gpsDPOBin;
	NSNumber* _mpssCxoShutDownDuration;
	NSNumber* _mpssCxoShutDownCount;
	NSArray* _mcpmVetoNumHistogram;
	NSArray* _pcieStateHistogram;
	NSNumber* _npaVetoMask;
	NSArray* _npaVetoClientNumHistogram;
	NSString* _appsClockStateDurationStr;
	NSString* _mpssClockStateDurationStr;
	NSArray* _hsicStateSleepVetoNum;
	NSNumber* _radioTech;
	NSArray* _rssiModeCount;
	NSArray* _rx0RssiPowerHist;
	NSArray* _rx1RssiPowerHist;
	NSArray* _rx0SQAPowerHist;
	NSArray* _rx1SQAPowerHist;
	NSArray* _txPowerHist;
	NSArray* _protocolStateHist;
	NSDictionary* _protocolStateHistDict;
	NSArray* _bbActive;
	NSArray* _txPowerHist1x;
	NSArray* _txPowerHistEVDO;
	NSNumber* _txTicks;
	NSNumber* _rxTicks;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;
	NSString* _groupEntryKey;
	NSString* _groupID;
	NSMutableArray* _groupArrEntries;
	NSMutableDictionary* _groupDict;

}

@property (retain) NSDate * bbDate;                                         //@synthesize bbDate=_bbDate - In the implementation block
@property (retain) NSNumber * bbTimeCal;                                    //@synthesize bbTimeCal=_bbTimeCal - In the implementation block
@property (retain) NSNumber * bbSeqNum;                                     //@synthesize bbSeqNum=_bbSeqNum - In the implementation block
@property (retain) NSNumber * bbHwMsgType;                                  //@synthesize bbHwMsgType=_bbHwMsgType - In the implementation block
@property (retain) NSNumber * bbSwRev;                                      //@synthesize bbSwRev=_bbSwRev - In the implementation block
@property (retain) NSNumber * bbHwRev;                                      //@synthesize bbHwRev=_bbHwRev - In the implementation block
@property (retain) NSNumber * bbHwStatsType;                                //@synthesize bbHwStatsType=_bbHwStatsType - In the implementation block
@property (retain) NSNumber * bbHwStatsLength;                              //@synthesize bbHwStatsLength=_bbHwStatsLength - In the implementation block
@property (retain) NSNumber * bbHwStatsLevel;                               //@synthesize bbHwStatsLevel=_bbHwStatsLevel - In the implementation block
@property (retain) NSNumber * bbHwCurrTimeStamp;                            //@synthesize bbHwCurrTimeStamp=_bbHwCurrTimeStamp - In the implementation block
@property (retain) NSNumber * bbHwLastTimeStamp;                            //@synthesize bbHwLastTimeStamp=_bbHwLastTimeStamp - In the implementation block
@property (retain) NSNumber * bbHwLogDurationInTicks;                       //@synthesize bbHwLogDurationInTicks=_bbHwLogDurationInTicks - In the implementation block
@property (retain) NSArray * bbHwProcSystemState;                           //@synthesize bbHwProcSystemState=_bbHwProcSystemState - In the implementation block
@property (retain) NSArray * bbHwProcArmPerfState;                          //@synthesize bbHwProcArmPerfState=_bbHwProcArmPerfState - In the implementation block
@property (retain) NSArray * bbHwModemAppMdspState;                         //@synthesize bbHwModemAppMdspState=_bbHwModemAppMdspState - In the implementation block
@property (retain) NSArray * bbHwModemAppMdspClockState;                    //@synthesize bbHwModemAppMdspClockState=_bbHwModemAppMdspClockState - In the implementation block
@property (retain) NSArray * bbHwModemAppMdmState;                          //@synthesize bbHwModemAppMdmState=_bbHwModemAppMdmState - In the implementation block
@property (retain) NSArray * bbHwModemAppMdmSpeed;                          //@synthesize bbHwModemAppMdmSpeed=_bbHwModemAppMdmSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppQ6FwSpeed;                         //@synthesize bbHwModemAppQ6FwSpeed=_bbHwModemAppQ6FwSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppQ6SwSpeed;                         //@synthesize bbHwModemAppQ6SwSpeed=_bbHwModemAppQ6SwSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppMdspSpeed;                         //@synthesize bbHwModemAppMdspSpeed=_bbHwModemAppMdspSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppQdspSpeed;                         //@synthesize bbHwModemAppQdspSpeed=_bbHwModemAppQdspSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppAdspState;                         //@synthesize bbHwModemAppAdspState=_bbHwModemAppAdspState - In the implementation block
@property (retain) NSArray * bbHwModemAppAdspClockState;                    //@synthesize bbHwModemAppAdspClockState=_bbHwModemAppAdspClockState - In the implementation block
@property (retain) NSArray * bbHwModemAppAdspSpeed;                         //@synthesize bbHwModemAppAdspSpeed=_bbHwModemAppAdspSpeed - In the implementation block
@property (retain) NSArray * bbHwModemAppAdmState;                          //@synthesize bbHwModemAppAdmState=_bbHwModemAppAdmState - In the implementation block
@property (retain) NSArray * bbHwPeripheralUSBState;                        //@synthesize bbHwPeripheralUSBState=_bbHwPeripheralUSBState - In the implementation block
@property (retain) NSArray * bbHwPeripheralSPIState;                        //@synthesize bbHwPeripheralSPIState=_bbHwPeripheralSPIState - In the implementation block
@property (retain) NSArray * bbHwPeripheralGPSState;                        //@synthesize bbHwPeripheralGPSState=_bbHwPeripheralGPSState - In the implementation block
@property (retain) NSArray * bbHwPeripheralUARTState;                       //@synthesize bbHwPeripheralUARTState=_bbHwPeripheralUARTState - In the implementation block
@property (retain) NSArray * bbHwSleepVetoClientListQdsp;                   //@synthesize bbHwSleepVetoClientListQdsp=_bbHwSleepVetoClientListQdsp - In the implementation block
@property (retain) NSArray * bbHwSleepVetoClientListArm;                    //@synthesize bbHwSleepVetoClientListArm=_bbHwSleepVetoClientListArm - In the implementation block
@property (retain) NSNumber * rpmXOShutDuration;                            //@synthesize rpmXOShutDuration=_rpmXOShutDuration - In the implementation block
@property (retain) NSNumber * rpmXOShutCnt;                                 //@synthesize rpmXOShutCnt=_rpmXOShutCnt - In the implementation block
@property (retain) NSNumber * rpmVDDMinEnterCnt;                            //@synthesize rpmVDDMinEnterCnt=_rpmVDDMinEnterCnt - In the implementation block
@property (retain) NSNumber * rpmVDDMinDuration;                            //@synthesize rpmVDDMinDuration=_rpmVDDMinDuration - In the implementation block
@property (retain) NSArray * appsPerfStateCountHist;                        //@synthesize appsPerfStateCountHist=_appsPerfStateCountHist - In the implementation block
@property (retain) NSNumber * cxoShutDownDuration;                          //@synthesize cxoShutDownDuration=_cxoShutDownDuration - In the implementation block
@property (retain) NSNumber * cxoShutDownCount;                             //@synthesize cxoShutDownCount=_cxoShutDownCount - In the implementation block
@property (retain) NSArray * usbStateCountHist;                             //@synthesize usbStateCountHist=_usbStateCountHist - In the implementation block
@property (retain) NSArray * uartOnOffState;                                //@synthesize uartOnOffState=_uartOnOffState - In the implementation block
@property (retain) NSArray * spiOnOffState;                                 //@synthesize spiOnOffState=_spiOnOffState - In the implementation block
@property (retain) NSArray * admOnOffState;                                 //@synthesize admOnOffState=_admOnOffState - In the implementation block
@property (retain) NSArray * lpassOnOffState;                               //@synthesize lpassOnOffState=_lpassOnOffState - In the implementation block
@property (retain) NSArray * appsSleepVeto;                                 //@synthesize appsSleepVeto=_appsSleepVeto - In the implementation block
@property (retain) NSArray * mpssSleepVeto;                                 //@synthesize mpssSleepVeto=_mpssSleepVeto - In the implementation block
@property (retain) NSArray * mdspConfigCount;                               //@synthesize mdspConfigCount=_mdspConfigCount - In the implementation block
@property (retain) NSArray * qdspConfigCount;                               //@synthesize qdspConfigCount=_qdspConfigCount - In the implementation block
@property (retain) NSArray * gpsOnOff;                                      //@synthesize gpsOnOff=_gpsOnOff - In the implementation block
@property (retain) NSArray * gpsDPOOnOff;                                   //@synthesize gpsDPOOnOff=_gpsDPOOnOff - In the implementation block
@property (retain) NSArray * gpsDPOBin;                                     //@synthesize gpsDPOBin=_gpsDPOBin - In the implementation block
@property (retain) NSNumber * mpssCxoShutDownDuration;                      //@synthesize mpssCxoShutDownDuration=_mpssCxoShutDownDuration - In the implementation block
@property (retain) NSNumber * mpssCxoShutDownCount;                         //@synthesize mpssCxoShutDownCount=_mpssCxoShutDownCount - In the implementation block
@property (retain) NSArray * mcpmVetoNumHistogram;                          //@synthesize mcpmVetoNumHistogram=_mcpmVetoNumHistogram - In the implementation block
@property (retain) NSArray * pcieStateHistogram;                            //@synthesize pcieStateHistogram=_pcieStateHistogram - In the implementation block
@property (retain) NSNumber * npaVetoMask;                                  //@synthesize npaVetoMask=_npaVetoMask - In the implementation block
@property (retain) NSArray * npaVetoClientNumHistogram;                     //@synthesize npaVetoClientNumHistogram=_npaVetoClientNumHistogram - In the implementation block
@property (retain) NSString * appsClockStateDurationStr;                    //@synthesize appsClockStateDurationStr=_appsClockStateDurationStr - In the implementation block
@property (retain) NSString * mpssClockStateDurationStr;                    //@synthesize mpssClockStateDurationStr=_mpssClockStateDurationStr - In the implementation block
@property (retain) NSArray * hsicStateSleepVetoNum;                         //@synthesize hsicStateSleepVetoNum=_hsicStateSleepVetoNum - In the implementation block
@property (retain) NSNumber * radioTech;                                    //@synthesize radioTech=_radioTech - In the implementation block
@property (retain) NSArray * rssiModeCount;                                 //@synthesize rssiModeCount=_rssiModeCount - In the implementation block
@property (retain) NSArray * rx0RssiPowerHist;                              //@synthesize rx0RssiPowerHist=_rx0RssiPowerHist - In the implementation block
@property (retain) NSArray * rx1RssiPowerHist;                              //@synthesize rx1RssiPowerHist=_rx1RssiPowerHist - In the implementation block
@property (retain) NSArray * rx0SQAPowerHist;                               //@synthesize rx0SQAPowerHist=_rx0SQAPowerHist - In the implementation block
@property (retain) NSArray * rx1SQAPowerHist;                               //@synthesize rx1SQAPowerHist=_rx1SQAPowerHist - In the implementation block
@property (retain) NSArray * txPowerHist;                                   //@synthesize txPowerHist=_txPowerHist - In the implementation block
@property (retain) NSArray * protocolStateHist;                             //@synthesize protocolStateHist=_protocolStateHist - In the implementation block
@property (retain) NSDictionary * protocolStateHistDict;                    //@synthesize protocolStateHistDict=_protocolStateHistDict - In the implementation block
@property (retain) NSArray * bbActive;                                      //@synthesize bbActive=_bbActive - In the implementation block
@property (retain) NSArray * txPowerHist1x;                                 //@synthesize txPowerHist1x=_txPowerHist1x - In the implementation block
@property (retain) NSArray * txPowerHistEVDO;                               //@synthesize txPowerHistEVDO=_txPowerHistEVDO - In the implementation block
@property (retain) NSNumber * txTicks;                                      //@synthesize txTicks=_txTicks - In the implementation block
@property (retain) NSNumber * rxTicks;                                      //@synthesize rxTicks=_rxTicks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
@property (retain) NSString * groupEntryKey;                                //@synthesize groupEntryKey=_groupEntryKey - In the implementation block
@property (retain) NSString * groupID;                                      //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSMutableArray * groupArrEntries;                        //@synthesize groupArrEntries=_groupArrEntries - In the implementation block
@property (retain) NSMutableDictionary * groupDict;                         //@synthesize groupDict=_groupDict - In the implementation block
+(id)entryEventMavBBMav1HwOther;
+(id)entryEventBackwardMav1BBHwOtherPerRAT;
+(id)entryEventMavBBMav2HwOther;
+(id)entryEventBackwardMavBBHwOtherPerRAT;
+(id)entryEventMavBBMav4HwOther;
+(id)entryEventMavBBMav13HwOther;
+(id)entryEventMavBBMav10HwOther;
+(id)entryEventBackwardMavBBHwOther;
+(id)getNameBBMavHwOther;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(id)init;
-(void)setType:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setLogDuration:(id)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(void)addToGroupPLBBMav2HwOther;
-(void)logEventBackwardGrpEntriesBBMavHw;
-(void)setBbHwCurrTimeStamp:(NSNumber *)arg1 ;
-(void)setBbHwLastTimeStamp:(NSNumber *)arg1 ;
-(void)setBbHwLogDurationInTicks:(NSNumber *)arg1 ;
-(void)appendToError:(id)arg1 ;
-(void)logEventBackwardMavBBHwOtherPerRAT;
-(void)setRat:(id)arg1 ;
-(void)setRadioTech:(NSNumber *)arg1 ;
-(void)setRssiModeCount:(NSArray *)arg1 ;
-(void)setRx0RssiPowerHist:(NSArray *)arg1 ;
-(void)setRx1RssiPowerHist:(NSArray *)arg1 ;
-(void)setTxPowerHist:(NSArray *)arg1 ;
-(id)logEventBackwardGrpEntriesBBMavHwOtherPerRAT;
-(void)addToGroupPLBBMavHwEntry:(id)arg1 withEntryKey:(id)arg2 ;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSDate *)bbDate;
-(void)setBbDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(NSNumber *)bbTimeCal;
-(void)setBbTimeCal:(NSNumber *)arg1 ;
-(void)logEventBackwardMavBBHwOther;
-(void)addToGroupPLBBMav10HwOther;
-(void)logEventBackwardGrpEntriesBBMav10Hw;
-(void)setMcpmVetoNumHistogram:(NSArray *)arg1 ;
-(void)setNpaVetoMask:(NSNumber *)arg1 ;
-(void)setNpaVetoClientNumHistogram:(NSArray *)arg1 ;
-(void)setRpmXOShutDuration:(NSNumber *)arg1 ;
-(void)setRpmXOShutCnt:(NSNumber *)arg1 ;
-(void)setRpmVDDMinDuration:(NSNumber *)arg1 ;
-(void)setRpmVDDMinEnterCnt:(NSNumber *)arg1 ;
-(void)setAppsPerfStateCountHist:(NSArray *)arg1 ;
-(void)setCxoShutDownDuration:(NSNumber *)arg1 ;
-(void)setCxoShutDownCount:(NSNumber *)arg1 ;
-(void)setAppsSleepVeto:(NSArray *)arg1 ;
-(void)setMpssCxoShutDownDuration:(NSNumber *)arg1 ;
-(void)setMpssCxoShutDownCount:(NSNumber *)arg1 ;
-(void)setMpssSleepVeto:(NSArray *)arg1 ;
-(void)setQdspConfigCount:(NSArray *)arg1 ;
-(void)setAdmOnOffState:(NSArray *)arg1 ;
-(void)addToGroupPLBBMavHwOther;
-(void)setLpassOnOffState:(NSArray *)arg1 ;
-(void)setUsbStateCountHist:(NSArray *)arg1 ;
-(void)setSpiOnOffState:(NSArray *)arg1 ;
-(void)setUartOnOffState:(NSArray *)arg1 ;
-(void)setGpsOnOff:(NSArray *)arg1 ;
-(void)setGpsDPOOnOff:(NSArray *)arg1 ;
-(void)setRx0SQAPowerHist:(NSArray *)arg1 ;
-(void)setRx1SQAPowerHist:(NSArray *)arg1 ;
-(NSDictionary *)protocolStateHistDict;
-(void)setProtocolStateHist:(NSArray *)arg1 ;
-(void)setProtocolStateHistDict:(NSDictionary *)arg1 ;
-(void)setGpsDPOBin:(NSArray *)arg1 ;
-(void)setMdspConfigCount:(NSArray *)arg1 ;
-(void)setBbActive:(NSArray *)arg1 ;
-(void)setAppsClockStateDurationStr:(NSString *)arg1 ;
-(void)setMpssClockStateDurationStr:(NSString *)arg1 ;
-(void)setHsicStateSleepVetoNum:(NSArray *)arg1 ;
-(NSString *)groupEntryKey;
-(NSMutableArray *)groupArrEntries;
-(void)setGroupEntryKey:(NSString *)arg1 ;
-(void)setGroupArrEntries:(NSMutableArray *)arg1 ;
-(void)addToGroupPLBBMav4HwOther;
-(void)setBbSwRev:(NSNumber *)arg1 ;
-(void)setBbHwRev:(NSNumber *)arg1 ;
-(void)setBbHwStatsType:(NSNumber *)arg1 ;
-(void)setBbHwStatsLength:(NSNumber *)arg1 ;
-(void)setBbHwStatsLevel:(NSNumber *)arg1 ;
-(void)setBbHwProcSystemState:(NSArray *)arg1 ;
-(void)setBbHwProcArmPerfState:(NSArray *)arg1 ;
-(void)setBbHwModemAppMdspSpeed:(NSArray *)arg1 ;
-(void)setBbHwModemAppMdmState:(NSArray *)arg1 ;
-(void)setBbHwModemAppQdspSpeed:(NSArray *)arg1 ;
-(void)setBbHwModemAppAdmState:(NSArray *)arg1 ;
-(void)setBbHwPeripheralGPSState:(NSArray *)arg1 ;
-(void)setBbHwPeripheralUSBState:(NSArray *)arg1 ;
-(void)setBbHwPeripheralSPIState:(NSArray *)arg1 ;
-(void)setBbHwPeripheralUARTState:(NSArray *)arg1 ;
-(void)setBbHwSleepVetoClientListQdsp:(NSArray *)arg1 ;
-(void)addToGroupPLBBMav1HwOther;
-(void)setBbHwModemAppMdspState:(NSArray *)arg1 ;
-(void)setBbHwModemAppMdspClockState:(NSArray *)arg1 ;
-(void)setBbHwModemAppAdspState:(NSArray *)arg1 ;
-(void)setBbHwModemAppAdspClockState:(NSArray *)arg1 ;
-(void)setBbHwModemAppAdspSpeed:(NSArray *)arg1 ;
-(void)setRxTicks:(NSNumber *)arg1 ;
-(void)setTxTicks:(NSNumber *)arg1 ;
-(void)setTxPowerHist1x:(NSArray *)arg1 ;
-(void)setTxPowerHistEVDO:(NSArray *)arg1 ;
-(id)logEventBackwardGrpEntriesBBMav1HwOtherPerRAT;
-(void)populateEntryBBMavHwOther:(id)arg1 ;
-(NSMutableDictionary *)groupDict;
-(NSNumber *)bbSwRev;
-(NSNumber *)bbHwRev;
-(NSNumber *)bbHwStatsType;
-(NSNumber *)bbHwStatsLength;
-(NSNumber *)bbHwStatsLevel;
-(NSNumber *)bbHwCurrTimeStamp;
-(NSNumber *)bbHwLastTimeStamp;
-(NSNumber *)bbHwLogDurationInTicks;
-(NSNumber *)rpmXOShutDuration;
-(NSNumber *)rpmXOShutCnt;
-(NSNumber *)rpmVDDMinDuration;
-(NSNumber *)rpmVDDMinEnterCnt;
-(NSArray *)appsPerfStateCountHist;
-(NSNumber *)cxoShutDownDuration;
-(NSNumber *)cxoShutDownCount;
-(NSArray *)usbStateCountHist;
-(NSArray *)uartOnOffState;
-(NSArray *)spiOnOffState;
-(NSArray *)admOnOffState;
-(NSArray *)lpassOnOffState;
-(NSArray *)appsSleepVeto;
-(NSArray *)mpssSleepVeto;
-(NSArray *)mdspConfigCount;
-(NSArray *)qdspConfigCount;
-(NSArray *)gpsOnOff;
-(NSArray *)gpsDPOOnOff;
-(NSArray *)gpsDPOBin;
-(NSNumber *)mpssCxoShutDownDuration;
-(NSNumber *)mpssCxoShutDownCount;
-(NSArray *)mcpmVetoNumHistogram;
-(NSNumber *)npaVetoMask;
-(NSArray *)npaVetoClientNumHistogram;
-(NSString *)appsClockStateDurationStr;
-(NSString *)mpssClockStateDurationStr;
-(NSArray *)hsicStateSleepVetoNum;
-(void)populateEntryBBMavHwOtherPerRAT:(id)arg1 ;
-(id)internaLogEventBackwardBBMavHwOtherPerRAT;
-(NSNumber *)radioTech;
-(NSArray *)rssiModeCount;
-(NSArray *)rx0RssiPowerHist;
-(NSArray *)rx1RssiPowerHist;
-(NSArray *)rx0SQAPowerHist;
-(NSArray *)rx1SQAPowerHist;
-(NSArray *)txPowerHist;
-(NSArray *)protocolStateHist;
-(NSNumber *)rxTicks;
-(NSNumber *)txTicks;
-(NSArray *)txPowerHist1x;
-(NSArray *)txPowerHistEVDO;
-(id)internaLogEventBackwardBBMav1HwOtherPerRAT;
-(void)populateEntryBBMav1HwOtherPerRAT:(id)arg1 ;
-(NSNumber *)bbHwMsgType;
-(NSArray *)bbHwProcSystemState;
-(NSArray *)bbHwProcArmPerfState;
-(NSArray *)bbHwModemAppMdspState;
-(NSArray *)bbHwModemAppMdspClockState;
-(NSArray *)bbHwModemAppMdspSpeed;
-(NSArray *)bbHwModemAppMdmState;
-(NSArray *)bbHwModemAppAdspState;
-(NSArray *)bbHwModemAppAdspClockState;
-(NSArray *)bbHwModemAppAdspSpeed;
-(NSArray *)bbHwModemAppAdmState;
-(NSArray *)bbHwPeripheralUSBState;
-(NSArray *)bbHwPeripheralSPIState;
-(NSArray *)bbHwPeripheralGPSState;
-(NSArray *)bbHwPeripheralUARTState;
-(void)populateEntryBBMav2HwOther:(id)arg1 ;
-(NSArray *)bbHwModemAppQdspSpeed;
-(NSArray *)bbHwSleepVetoClientListQdsp;
-(NSArray *)bbHwSleepVetoClientListArm;
-(void)populateEntryBBMav4HwOther:(id)arg1 ;
-(void)populateEntryBBMav10HwOther:(id)arg1 ;
-(void)populateEntryBBMav13HwOther:(id)arg1 ;
-(NSArray *)pcieStateHistogram;
-(void)setTxPwr:(id)arg1 ;
-(void)setTxPwrArray:(id)arg1 ;
-(void)refreshMavBBHwOther;
-(void)logEventBackwardGrpEntriesBBMav13Hw;
-(void)refreshMavBBHwOtherPerRAT;
-(void)logGrpEntriesMavBBHwOtherPerRat;
-(void)setMavBBHwValue:(id)arg1 forKey:(id)arg2 ;
-(void)logEventBackwardMav1BBHwOtherPerRAT;
-(void)refreshMav1BBHwOtherPerRAT;
-(void)refreshBBMav2HwOther;
-(void)refreshBBMav4HwOther;
-(void)refreshBBMav10HwOther;
-(void)logEventBackwardMav10BBHwOther;
-(void)refreshBBMav13HwOther;
-(void)logEventBackwardMav13BBHwOther;
-(void)addToGroupPLBBMav13HwOther;
-(NSNumber *)bbSeqNum;
-(void)setBbSeqNum:(NSNumber *)arg1 ;
-(void)setBbHwMsgType:(NSNumber *)arg1 ;
-(NSArray *)bbHwModemAppMdmSpeed;
-(void)setBbHwModemAppMdmSpeed:(NSArray *)arg1 ;
-(NSArray *)bbHwModemAppQ6FwSpeed;
-(void)setBbHwModemAppQ6FwSpeed:(NSArray *)arg1 ;
-(NSArray *)bbHwModemAppQ6SwSpeed;
-(void)setBbHwModemAppQ6SwSpeed:(NSArray *)arg1 ;
-(void)setBbHwSleepVetoClientListArm:(NSArray *)arg1 ;
-(void)setPcieStateHistogram:(NSArray *)arg1 ;
-(NSArray *)bbActive;
-(void)setGroupDict:(NSMutableDictionary *)arg1 ;
@end

