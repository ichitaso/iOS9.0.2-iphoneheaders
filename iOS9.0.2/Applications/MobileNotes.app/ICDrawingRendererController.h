/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICDrawingInputControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, ICGLContext, CAEAGLLayer, ICDrawingInputController, ICDrawingRenderer, NSString;

@interface ICDrawingRendererController : NSObject <ICDrawingInputControllerDelegate> {

	NSObject*<OS_dispatch_queue> _renderQueue;
	unsigned _immutableCountProvided;
	NSObject*<OS_dispatch_semaphore> _queuedRendersSemaphore;
	ICGLContext* _context;
	unsigned _resolveFramebuffer;
	unsigned _resolveColorRenderbuffer;
	int renderbufferWidth;
	int renderbufferHeight;
	CAEAGLLayer* _presentationLayer;
	char _cancelRendering;
	char _drawingCommands;
	ICDrawingInputController* _inputController;
	int _renderCount;
	int _missedRenderCount;
	ICDrawingRenderer* _renderer;
	CGSize _renderSize;
	CGAffineTransform _transform;
	CGAffineTransform _renderTransform;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                //@synthesize renderQueue=_renderQueue - In the implementation block
@property (assign) CGAffineTransform transform;                                         //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGSize renderSize;                                         //@synthesize renderSize=_renderSize - In the implementation block
@property (nonatomic,readonly) ICDrawingInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,readonly) int renderCount;                                         //@synthesize renderCount=_renderCount - In the implementation block
@property (nonatomic,readonly) int missedRenderCount;                                   //@synthesize missedRenderCount=_missedRenderCount - In the implementation block
@property (assign) char cancelRendering;                                                //@synthesize cancelRendering=_cancelRendering - In the implementation block
@property (nonatomic,retain) ICDrawingRenderer * renderer;                              //@synthesize renderer=_renderer - In the implementation block
@property (assign) CGAffineTransform renderTransform;                                   //@synthesize renderTransform=_renderTransform - In the implementation block
@property (assign) char drawingCommands;                                                //@synthesize drawingCommands=_drawingCommands - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRendererController;
-(void)flushMemoryIfPossible;
-(void)setCancelRendering:(char)arg1 ;
-(void)setPresentationLayer:(id)arg1 ;
-(char)cancelRendering;
-(CGImageRef)newCGImage;
-(void)drawImage:(CGImageRef)arg1 ;
-(void)drawImage:(CGImageRef)arg1 clippedToCommandSpaceRect:(CGRect)arg2 ;
-(void)drawCommands:(id)arg1 clippedToCommandSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)drawCommands:(id)arg1 renderIntermediateSteps:(char)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)getContentsBoundsInCommandSpace;
-(void)drawCommandsAfterClear:(id)arg1 clippedToCommandSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderWithTransform:(CGAffineTransform)arg1 ;
-(void)changeRenderSize;
-(void)performAsyncBlockOnRenderQueue:(/*^block*/id)arg1 ;
-(void)_present;
-(void)_discard;
-(void)setRenderTransform:(CGAffineTransform)arg1 ;
-(char)drawingCommands;
-(void)_renderDrawPoints;
-(void)setDrawingCommands:(char)arg1 ;
-(void)resetRenderCounts;
-(int)renderCount;
-(int)missedRenderCount;
-(CGSize)renderSize;
-(void)setRenderSize:(CGSize)arg1 ;
-(CGAffineTransform)renderTransform;
-(void)_createFramebuffer;
-(void)setRenderer:(ICDrawingRenderer *)arg1 ;
-(void)_render;
-(void)_deleteFramebuffer;
-(void)dealloc;
-(id)init;
-(ICDrawingInputController *)inputController;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)clear;
-(void)drawingBeganWithCommand:(id)arg1 ;
-(void)drawingEnded;
-(void)drawingCancelled;
-(void)setup;
-(ICDrawingRenderer *)renderer;
-(NSObject*<OS_dispatch_queue>)renderQueue;
@end
