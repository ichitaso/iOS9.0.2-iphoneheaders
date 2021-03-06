/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTBrailleGestureManagerDelegate.h>
#import <vot/VOTGesturedTextInputManagerDelegate.h>
#import <vot/VOTElementUpdateProtocol.h>
#import <vot/VOTGestureKeyboardDelegate.h>

@protocol VOTElementManagementProtocol, VOTRotorManagementProtocol, VOTDirectTouchManagementProtocol, VOTEventFactoryCallbackProtocol;
@class NSObject, SCRCGestureFactory, VOTGestureEvent, NSRecursiveLock, VOTElement, SCRCTargetSelectorTimer, NSMutableArray, NSArray, NSString, VOTBrailleGestureManager, AXAccessQueueTimer, VOTDirectInteractionKeyboardManager, AXEventProcessor, VOTHandwritingManager;

@interface VOTEventFactory : NSObject <VOTBrailleGestureManagerDelegate, VOTGesturedTextInputManagerDelegate, VOTElementUpdateProtocol, VOTGestureKeyboardDelegate> {

	NSObject*<VOTElementManagementProtocol> _elementManager;
	NSObject*<VOTRotorManagementProtocol> _rotorManager;
	NSObject*<VOTDirectTouchManagementProtocol> _directTouchManager;
	id<VOTEventFactoryCallbackProtocol> _delegate;
	SCRCGestureFactory* _gestureFactory;
	int _state;
	int _direction;
	int _rotorSoundZone;
	int _continuityZone;
	float _startPinchDistance;
	int _fingerCount;
	float _travelDistance;
	CGPoint _tapHoldOffset;
	VOTGestureEvent* _lastDownEvent;
	NSRecursiveLock* _currentElementLock;
	VOTElement* _currentElement;
	double _lastEchoTime;
	double _rotateStartTime;
	int _rotateDirection;
	SCRCTargetSelectorTimer* _tapHoldTimer;
	SCRCTargetSelectorTimer* _scrollStatusTimer;
	SCRCTargetSelectorTimer* _twoFingerHoldTimer;
	SCRCTargetSelectorTimer* _memorizeSoundTimer;
	SCRCTargetSelectorTimer* _systemControlLocationTimer;
	float _currentTouchForce;
	float _previewFingerStartingForce;
	CGPoint _previewFingerLocation;
	NSMutableArray* _previewFingerContextId;
	char _isInPreview;
	double _previewStartTime;
	char _isPreviewPinned;
	CGPoint _nativeSlidingOffset;
	CGPoint _nativeSlidingCenter;
	double _lastTwoFingerSlideTime;
	float _oldVolumeChangeDistance;
	float _volumeChangeDistance;
	SCRCTargetSelectorTimer* _volumeChangeTimer;
	AXObserverRef _axEventObserver;
	VOTGestureEvent* _currentGestureEvent;
	NSArray* _directInteractionElements;
	NSString* _zoomListenerIdentifier;
	SCD_Struct_VO17 _zigzag;
	double _lastNativeSlideCancel;
	NSMutableArray* _tapAndHoldContextIds;
	CGPoint _systemControlStartPoint;
	int _systemControlPosition;
	char _systemControlActivated;
	double _systemControlStartSwipeTime;
	double _systemControlFingerDownFollowupTime;
	unsigned long long _lastScrollEventTime;
	long long _currentAccumulatedScroll;
	char _scrollWheelIsActive;
	struct {
		char tapAndHoldMode;
		char orbMode;
		char firedScrollStatus;
		char rotating;
		char memorizingData;
		char twoFingerTapAndSlide;
		char didPlayStartLabelSound;
		char sendingToDirectTouch;
		char sendingToNativeSlide;
		char gestureSawDownEvent;
		char allowingSystemGesturePassthrough;
		char hasSentFirstTrackingEventForGesture;
	}  _flags;
	double _gestureKeyboardShiftLockStartTime;
	VOTBrailleGestureManager* _brailleGestureManager;
	AXAccessQueueTimer* _handwritingCaptureTimer;
	VOTDirectInteractionKeyboardManager* _directInteractionKeyboardManager;
	AXEventProcessor* _eventProcessor;
	VOTElement* _lastTouchedDirectTouchElement;

}

@property (nonatomic,readonly) char tapAndHoldMode; 
@property (assign,nonatomic) id<VOTElementManagementProtocol> elementManager;                                                //@synthesize elementManager=_elementManager - In the implementation block
@property (assign,nonatomic) id<VOTRotorManagementProtocol> rotorManager;                                                    //@synthesize rotorManager=_rotorManager - In the implementation block
@property (assign,nonatomic) id<VOTDirectTouchManagementProtocol> directTouchManager;                                        //@synthesize directTouchManager=_directTouchManager - In the implementation block
@property (assign,nonatomic) id<VOTEventFactoryCallbackProtocol> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGPoint fingerPosition; 
@property (nonatomic,readonly) unsigned fingerCount; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,readonly) VOTHandwritingManager * handwritingManager; 
@property (nonatomic,readonly) char brailleInputActive; 
@property (nonatomic,readonly) VOTDirectInteractionKeyboardManager * directInteractionKeyboardManager;                       //@synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager - In the implementation block
@property (setter=_setHandwritingCaptureTimer:,nonatomic,retain) AXAccessQueueTimer * _handwritingCaptureTimer;              //@synthesize handwritingCaptureTimer=_handwritingCaptureTimer - In the implementation block
@property (nonatomic,retain) AXEventProcessor * eventProcessor;                                                              //@synthesize eventProcessor=_eventProcessor - In the implementation block
@property (nonatomic,retain) VOTElement * lastTouchedDirectTouchElement;                                                     //@synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGPoint)convertDevicePointToZoomedPoint:(CGPoint)arg1 ;
+(void)_updateZoomFrame:(CGRect)arg1 ;
+(void)initialize;
-(void)_handleIOHIDEvent:(id)arg1 ;
-(id)currentElement;
-(void)setRotorManager:(id<VOTRotorManagementProtocol>)arg1 ;
-(void)setDirectTouchManager:(id<VOTDirectTouchManagementProtocol>)arg1 ;
-(void)resetEventFactory;
-(void)unregisterForEvents;
-(char)registerForEvents;
-(VOTDirectInteractionKeyboardManager *)directInteractionKeyboardManager;
-(char)processEventAsGesturedTextInput:(id)arg1 ;
-(char)brailleInputActive;
-(char)directTouchElementsPresent;
-(void)startTapAndHoldMode;
-(void)cancelTapAndHold:(CGPoint)arg1 ;
-(CGPoint)fingerPosition;
-(char)tapAndHoldMode;
-(void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(/*^block*/id)arg2 ;
-(void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(int)arg2 inDirection:(int)arg3 ;
-(void)processEvent:(id)arg1 ;
-(void)directInteractionElementsUpdated:(id)arg1 ;
-(void)currentElementDidUpdate:(id)arg1 ;
-(void)_setHandwritingCaptureTimer:(id)arg1 ;
-(void)_updateTapSpeedFromPreferences;
-(void)_tapHoldFired;
-(void)_scrollStatusFired;
-(void)_twoFingerHoldFired;
-(void)_startLabelElementSoundPlay;
-(void)_systemControlLocationTimer;
-(void)_volumeChangeTimer;
-(void)_beginNativeSliding:(id)arg1 ;
-(void)_handleRotorChangedNotification:(id)arg1 ;
-(void)_registerForIOHIDUsage;
-(void)_convertZoomRecordToDeviceRecord:(id)arg1 ;
-(void)_processGestureEvent:(id)arg1 ;
-(id)_currentGesturedTextInputManager;
-(char)_eventFilter:(id)arg1 ;
-(VOTHandwritingManager *)handwritingManager;
-(id)_brailleGestureManager;
-(void)_registerForZoomListener;
-(id<VOTRotorManagementProtocol>)rotorManager;
-(void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(char)arg2 ;
-(char)_isTapAndHoldPending;
-(char)_shouldUseGesturedTextInputManager;
-(void)_switchToTapAndHoldMode;
-(void)_simulatePop;
-(void)_reducePreviewFingerStartingForce:(float)arg1 ;
-(char)_shouldAttemptTracking;
-(void)_updateFirstnessOfTrackingEvent:(id)arg1 ;
-(void)_cancelTapAndHold:(CGPoint)arg1 ;
-(int)_systemControlPosition:(CGPoint)arg1 fingerCount:(unsigned)arg2 ;
-(void)_sendSystemControlEvent:(id)arg1 ;
-(void)_resetSystemControlStatus;
-(CGPoint)_averagePointForLastDownEvent;
-(id)_handleGestureKeyboardTappingCallback:(unsigned)arg1 fingerCount:(unsigned)arg2 isDown:(char)arg3 location:(CGPoint)arg4 ;
-(void)_stopMemorizingSession;
-(void)_processIdle:(CGPoint)arg1 ;
-(AXAccessQueueTimer *)_handwritingCaptureTimer;
-(void)setLastTouchedDirectTouchElement:(VOTElement *)arg1 ;
-(VOTElement *)lastTouchedDirectTouchElement;
-(char)_handleDirectInteractionEvent:(id)arg1 ;
-(char)_gestureEventIsInvalid:(id)arg1 ;
-(char)_handleOrbEvent:(id)arg1 ;
-(void)_feedEventToHandwritingRecognition:(id)arg1 ;
-(id)_touchLocationsForGestureEvent:(id)arg1 ;
-(void)_processTapAndHoldMode:(id)arg1 ;
-(char)_updateFingersInSystemControlLocation:(CGPoint)arg1 fingerCount:(unsigned)arg2 isLift:(char)arg3 ;
-(void)_cancelTapAndHoldWithValue:(id)arg1 ;
-(char)_shouldDismissPreviewOnLift;
-(char)_isPreviewElementSelected;
-(void)_liftFromTapAndHoldAndResetFingers:(char)arg1 ;
-(void)_switchToTrackingMode;
-(void)_liftPreviewFinger;
-(CGPoint)_convertZoomPointToDevicePoint:(CGPoint)arg1 ;
-(void)brailleGestureManager:(id)arg1 setForcedOrientation:(int)arg2 shouldAnnounce:(char)arg3 ;
-(void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(char)arg2 ;
-(void)directInteractionModeStatus:(char)arg1 ;
-(id)_preprocessEventForSimulator:(id)arg1 ;
-(void)updateOrientation;
-(void)_handleElementPreviewNotification:(id)arg1 ;
-(void)_handleKeyboardVisibilityChanged:(id)arg1 ;
-(void)_handleEventWithData:(id)arg1 ;
-(void)_simulatePreviewActionGesture;
-(id<VOTDirectTouchManagementProtocol>)directTouchManager;
-(AXEventProcessor *)eventProcessor;
-(void)setEventProcessor:(AXEventProcessor *)arg1 ;
-(id<VOTElementManagementProtocol>)elementManager;
-(void)setElementManager:(id<VOTElementManagementProtocol>)arg1 ;
-(void)setDelegate:(id<VOTEventFactoryCallbackProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<VOTEventFactoryCallbackProtocol>)delegate;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(long)_registerForAXNotifications:(char)arg1 ;
-(unsigned)fingerCount;
-(void)shutdown;
-(void)gestureTrackingCallbackWithFactory:(id)arg1 ;
-(void)gestureTappingCallbackWithFactory:(id)arg1 ;
-(void)gestureSplitTappingCallbackWithFactory:(id)arg1 ;
-(char)shouldBlockSplitTapGestureWithFactory:(id)arg1 ;
@end

