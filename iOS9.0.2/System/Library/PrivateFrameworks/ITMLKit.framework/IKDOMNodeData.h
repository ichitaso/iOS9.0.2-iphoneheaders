/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {

	char _updated;
	char _childrenUpdated;
	char _subtreeUpdated;
	IKDOMNode* _ownerJSNode;
	NSMutableDictionary* _featuresMap;

}

@property (assign,nonatomic,__weak) IKDOMNode * ownerJSNode;                             //@synthesize ownerJSNode=_ownerJSNode - In the implementation block
@property (assign,getter=isUpdated,nonatomic) char updated;                              //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isChildrenUpdated,nonatomic) char childrenUpdated;              //@synthesize childrenUpdated=_childrenUpdated - In the implementation block
@property (assign,getter=isSubtreeUpdated,nonatomic) char subtreeUpdated;                //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * featuresMap;                          //@synthesize featuresMap=_featuresMap - In the implementation block
+(id)jsNodeDataForNode:(xmlNode*)arg1 create:(char)arg2 ;
-(void)setUpdated:(char)arg1 ;
-(void)setSubtreeUpdated:(char)arg1 ;
-(char)isSubtreeUpdated;
-(char)isChildrenUpdated;
-(void)setChildrenUpdated:(char)arg1 ;
-(IKDOMNode *)ownerJSNode;
-(NSMutableDictionary *)featuresMap;
-(void)setFeaturesMap:(NSMutableDictionary *)arg1 ;
-(void)setFeature:(id)arg1 forName:(id)arg2 ;
-(id)featureForName:(id)arg1 ;
-(void)setOwnerJSNode:(IKDOMNode *)arg1 ;
-(char)isUpdated;
@end

