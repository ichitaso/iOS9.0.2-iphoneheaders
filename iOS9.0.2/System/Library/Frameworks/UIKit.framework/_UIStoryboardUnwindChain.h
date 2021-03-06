/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, UIViewController;

@interface _UIStoryboardUnwindChain : NSObject {

	NSMutableArray* _viewControllers;
	unsigned _commonAncestorIdx;
	unsigned _modalAncestorContainingSourceIdx;

}

@property (nonatomic,readonly) UIViewController * commonAncestorViewController; 
@property (nonatomic,readonly) UIViewController * modalAncestorContainingSourceViewController; 
-(id)debugDescription;
-(id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2 ;
-(UIViewController *)commonAncestorViewController;
-(UIViewController *)modalAncestorContainingSourceViewController;
-(void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(/*^block*/id)arg1 ;
@end

