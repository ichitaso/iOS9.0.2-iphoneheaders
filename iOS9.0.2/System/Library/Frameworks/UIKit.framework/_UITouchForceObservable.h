/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>
#import <libobjc.A.dylib/NSObserver.h>

@class UIView, _UITouchesObservingGestureRecognizer, NSObservation, NSString;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {

	UIView* _view;
	int _observerCount;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	NSObservation* _touchesObservation;
	char _haveSeenAnyTouches;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)addObserver:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(float)_unclampedTouchForceForTouches:(id)arg1 ;
-(float)_maximumPossibleForceForTouches:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
-(char)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(void)removeObservation:(id)arg1 ;
-(void)_didEndHavingAnyObservers;
@end
