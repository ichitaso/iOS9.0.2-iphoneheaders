/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigator.h>

@interface MNDriveNavigator : MNNavigator {

	char _exitedVehicle;
	int _vehicleExitConfidence;
	SCD_Struct_RA7 _vehicleExitCoordinate;

}
+(char)matchedToEndOfLeg:(id)arg1 onRoute:(id)arg2 withRouteMatch:(id)arg3 andLocation:(id)arg4 ;
-(char)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2 ;
-(void)_updateDetectedMotionAtLocation:(id)arg1 ;
-(Class)_guidanceManagerClass;
-(id)_newMapMatcher;
-(int)_checkForArrivalState:(id)arg1 ;
-(int)_transportType;
@end
