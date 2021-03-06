/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MRShaderArguments, NSMutableDictionary;

@interface MRContextState : NSObject {

	float modelViewMatrix[16];
	float textureMatrix[4][16];
	float normal[3];
	unsigned vbo;
	const float* vertexPointer;
	const float* colorsPointer;
	const float* normalsPointer;
	float* textureCoordinatesPointer[4];
	const float* inSpriteCoordinatesPointer;
	int vertexStride;
	unsigned short vertexFlags;
	char vertexArrayIsEnabled;
	char foreColorArrayIsEnabled;
	char normalArrayIsEnabled;
	char textureCoordinatesArrayIsEnabled[4];
	char inSpriteCoordinatesArrayIsEnabled;
	float foreColor[4];
	float backColor[4];
	unsigned textureTargetOnUnit[4];
	unsigned textureNameOnUnit[4];
	double textureTimestampOnUnit[4];
	char blendingIsEnabled;
	int blendingType;
	char cullingIsEnabled;
	char cullFrontfacing;
	char depthTestIsEnabled;
	NSString* _shaderID;
	MRShaderArguments* _shaderArguments;
	NSMutableDictionary* _vertexAttributes;
	NSMutableDictionary* _temporaryUniforms;

}

@property (copy) NSString * shaderID;                                      //@synthesize shaderID=_shaderID - In the implementation block
@property (retain) MRShaderArguments * shaderArguments;                    //@synthesize shaderArguments=_shaderArguments - In the implementation block
@property (readonly) NSMutableDictionary * vertexAttributes;               //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (readonly) NSMutableDictionary * temporaryUniforms;              //@synthesize temporaryUniforms=_temporaryUniforms - In the implementation block
-(MRShaderArguments *)shaderArguments;
-(void)setShaderID:(NSString *)arg1 ;
-(NSString *)shaderID;
-(void)setShaderArguments:(MRShaderArguments *)arg1 ;
-(NSMutableDictionary *)temporaryUniforms;
-(NSMutableDictionary *)vertexAttributes;
-(void)dealloc;
-(id)init;
@end

