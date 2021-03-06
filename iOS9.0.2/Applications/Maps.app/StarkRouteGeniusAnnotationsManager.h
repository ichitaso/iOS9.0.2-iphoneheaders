/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class VKPolylineOverlay, VKPolylineOverlayPainter, StarkChromeViewController, GEOComposedRoute, GEORouteMatch, MKMapItem;

@interface StarkRouteGeniusAnnotationsManager : NSObject {

	VKPolylineOverlay* _routeLine;
	VKPolylineOverlayPainter* _routeLinePainter;
	StarkChromeViewController* _chrome;
	GEOComposedRoute* _route;
	GEORouteMatch* _match;
	MKMapItem* _destination;

}

@property (assign,nonatomic,__weak) StarkChromeViewController * chrome;              //@synthesize chrome=_chrome - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                               //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * match;                                  //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                //@synthesize destination=_destination - In the implementation block
-(void)_drawRoute:(id)arg1 ;
-(void)recenterCameraOnRouteAnimated:(char)arg1 ;
-(UIEdgeInsets)_mapViewInsets;
-(void)setChrome:(StarkChromeViewController *)arg1 ;
-(void)_eraseRoute:(id)arg1 ;
-(StarkChromeViewController *)chrome;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(id)mapView;
-(MKMapItem *)destination;
-(void)setDestination:(MKMapItem *)arg1 ;
-(void)clearAnnotations;
-(void)setMatch:(GEORouteMatch *)arg1 ;
-(GEORouteMatch *)match;
-(GEOComposedRoute *)route;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
@end

