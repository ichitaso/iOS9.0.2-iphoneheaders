/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTGestureKeyboardDelegate;
#import <vot/vot-Structs.h>
@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;

@interface VOTDirectInteractionKeyboardManager : NSObject {

	AXAccessQueue* _dispatchAccessQueue;
	AXAccessQueueTimer* _dispatchTimer;
	NSMutableDictionary* _dispatchTable;
	char _inDirectInteractionTypingMode;
	char _inGestureMode;
	id<VOTGestureKeyboardDelegate> _delegate;
	VOTElement* _keyboardElement;

}

@property (assign,nonatomic) id<VOTGestureKeyboardDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VOTElement * keyboardElement;                         //@synthesize keyboardElement=_keyboardElement - In the implementation block
@property (assign,nonatomic) char inDirectInteractionTypingMode;                   //@synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode - In the implementation block
@property (assign,nonatomic) char inGestureMode;                                   //@synthesize inGestureMode=_inGestureMode - In the implementation block
@property (nonatomic,readonly) CGRect gestureKeyboardRegion; 
-(void)updateTypingMode;
-(char)processEvent:(id)arg1 ;
-(char)inDirectInteractionTypingMode;
-(CGRect)gestureKeyboardRegion;
-(void)updateKeyboardElement;
-(char)inGestureMode;
-(void)_initializeDispatchTable;
-(void)screenChange:(id)arg1 ;
-(void)_handleShiftLock:(id)arg1 ;
-(void)_handleShift:(id)arg1 ;
-(void)_handleTypingEnter:(id)arg1 ;
-(void)_handleTypingPeriod:(id)arg1 ;
-(void)_handleCommitTyping:(id)arg1 ;
-(void)_handleDelete:(id)arg1 ;
-(void)_handleSuggestionSelection:(id)arg1 ;
-(void)_handleKeyplaneSelection:(id)arg1 ;
-(void)_handleKeyboardSelection:(id)arg1 ;
-(void)_updateTypingMode;
-(void)_updateKeyboardElement;
-(void)setInDirectInteractionTypingMode:(char)arg1 ;
-(VOTElement *)keyboardElement;
-(char)inGestureTypingMode;
-(void)_processEvent:(id)arg1 ;
-(void)setKeyboardElement:(VOTElement *)arg1 ;
-(void)setInGestureMode:(char)arg1 ;
-(void)setDelegate:(id<VOTGestureKeyboardDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<VOTGestureKeyboardDelegate>)delegate;
@end

