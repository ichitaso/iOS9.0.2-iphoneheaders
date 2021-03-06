/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleMIDIBluetoothDriver/AppleMIDIBluetoothDriver-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_dispatch_queue;
@class CBPeripheralManager, CBCentralManager, CBCentral, CBPeripheral, BLEMIDIDevice, CBMutableService, CBMutableCharacteristic, NSMutableArray, NSObject, NSString;

@interface BLEMIDILocalPeripheral : NSObject <CBPeripheralManagerDelegate, CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBPeripheralManager* peripheralManager;
	CBCentralManager* centralManager;
	CBCentral* connectedCentral;
	CBPeripheral* connectedPeripheral;
	BLEMIDIDevice* bleDevice;
	CBMutableService* midiService;
	CBMutableCharacteristic* midiChar;
	NSMutableArray* outgoingPackets;
	MIDIDriverInterface* driver;
	NSObject*<OS_dispatch_queue> commandQueue;
	char readyToSend;
	char leCapable;
	char midiServiceAdded;
	char centralManufacturerOutstanding;
	char centralModelOutstanding;

}

@property (nonatomic,readonly) CBPeripheralManager * peripheralManager; 
@property (nonatomic,readonly) BLEMIDIDevice * bleDevice; 
@property (nonatomic,readonly) CBMutableService * midiService; 
@property (nonatomic,readonly) CBMutableCharacteristic * midiChar; 
@property (nonatomic,readonly) MIDIDriverInterface* driver; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)connectedCentralUUID;
-(void)resetDevice:(unsigned long)arg1 ;
-(void)removeMIDIService;
-(BLEMIDIDevice *)bleDevice;
-(void)checkAddMIDIService;
-(void)activateConnectedUUID;
-(char)isAlreadyConnectedAsPeripheral:(id)arg1 ;
-(void)peripheralManager:(id)arg1 _didReceiveWriteRequests:(id)arg2 ;
-(void)sendIfReady;
-(CBMutableCharacteristic *)midiChar;
-(CBMutableService *)midiService;
-(id)subscribedCentral;
-(void)activateUUID:(id)arg1 ;
-(CBPeripheralManager *)peripheralManager;
-(id)peripheralWithUUID:(id)arg1 ;
-(char)isLECapableHardware;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)disconnectDevice:(unsigned long)arg1 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)connectDevice:(unsigned long)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didUpdateConnectionParameters:(id)arg2 interval:(id)arg3 latency:(id)arg4 supervisionTimeout:(id)arg5 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(MIDIDriverInterface*)driver;
-(id)initWithDriver:(MIDIDriverInterface*)arg1 ;
@end

