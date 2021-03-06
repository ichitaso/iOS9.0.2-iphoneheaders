/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned numNodes; 
@property (retain) UIColor * labelColor; 
-(unsigned)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
-(UIColor *)labelColor;
-(id)init;
-(void)setLabelColor:(UIColor *)arg1 ;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(void)refresh;
@end

