/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMultiSectionFeatureAccessibilityElement.h>

@class NSMutableArray, NSArray, NSString;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement {

	NSMutableArray* _expandedPaths;
	NSMutableArray* _gutterPaths;
	NSMutableArray* _originalPaths;
	char _lastHitTestNearBorder;
	NSArray* _allPoints;
	NSString* _roadDirection;
	int _roadType;
	NSArray* _intersectingRoads;
	int _travelDirection;

}

@property (assign) int roadType;                                       //@synthesize roadType=_roadType - In the implementation block
@property (nonatomic,retain) NSArray * intersectingRoads;              //@synthesize intersectingRoads=_intersectingRoads - In the implementation block
@property (nonatomic,readonly) NSArray * originalPaths;                //@synthesize originalPaths=_originalPaths - In the implementation block
@property (assign,nonatomic) int travelDirection;                      //@synthesize travelDirection=_travelDirection - In the implementation block
@property (nonatomic,retain) NSString * roadDirection;                 //@synthesize roadDirection=_roadDirection - In the implementation block
-(id)trueLabel;
-(NSString *)roadDirection;
-(id)_axRoadPrefix;
-(id)_axRoadSuffix;
-(void)setRoadType:(int)arg1 ;
-(NSArray *)originalPaths;
-(id)_roadLength;
-(NSArray *)intersectingRoads;
-(void)setIntersectingRoads:(NSArray *)arg1 ;
-(id)accessibilityPaths;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapRoadType;
-(id)_roadDirectionDescription;
-(void)_combineRoadPaths:(id)arg1 ;
-(id)_nearestIntersectionForPoint:(CGPoint)arg1 ;
-(id)_nearestPOIsForPoint:(CGPoint)arg1 ;
-(void)setRoadDirection:(NSString *)arg1 ;
-(int)roadType;
-(char)pointInside:(CGPoint)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(int)travelDirection;
-(void)setTravelDirection:(int)arg1 ;
-(float)_accessibilityDistance:(CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3 ;
-(id)_accessibilityUpcomingRoadsForPoint:(CGPoint)arg1 forAngle:(float)arg2 ;
-(float)_accessibilityDistanceFromEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 ;
-(char)_accessibilityRoadContainsTrackingPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(char)_accessibilityLastHitTestNearBorder;
@end
