/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {

	CFMachPortRef _machPort;
	int _styleOverrides;
	NSMutableSet* _statusBarItems;

}
-(void)dealloc;
-(int)addStyleOverrides:(int)arg1 ;
-(int)removeStyleOverrides:(int)arg1 ;
-(void)addStatusBarItem:(int)arg1 ;
-(void)removeStatusBarItem:(int)arg1 ;
-(unsigned)publisherPort;
-(id)initWithCFMachPort:(CFMachPortRef)arg1 ;
-(id)statusBarItems;
-(int)styleOverrides;
@end

