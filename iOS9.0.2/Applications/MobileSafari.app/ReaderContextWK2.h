/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <libobjc.A.dylib/SFReaderEventsListener.h>
#import <libobjc.A.dylib/SFReaderContext.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>

@protocol SFReaderWebProcessControllerProtocol;
@class TabDocument, _WKRemoteObjectInterface, NSMutableDictionary, WBSReaderFontManager, NSString;

@interface ReaderContextWK2 : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate> {

	char _readerAvailable;
	TabDocument* _tabDocument;
	id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
	_WKRemoteObjectInterface* _eventsListenerInterface;
	NSMutableDictionary* _bookmarkIdentifierToReadingListItemInfoCompletionMap;
	/*^block*/id _readerMailContentComptionHandler;
	/*^block*/id _readerPrintContentCompletionHandler;
	WBSReaderFontManager* _fontManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareReaderPrintingIFrameWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTabDocument:(id)arg1 ;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1 ;
-(id)mailingAndPrintingFrame;
-(void)setReaderInitialTopScrollOffset:(int)arg1 configuration:(id)arg2 scrollOffsetDictionary:(id)arg3 userVisibleWidth:(double)arg4 ;
-(void)collectReadingListInfoWithBookmarkID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadNewArticle;
-(void)setReaderFont:(id)arg1 ;
-(void)setReaderTheme:(id)arg1 ;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)_setUpReaderActivityListener;
-(void)didDetermineReaderAvailability:(char)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2 ;
-(void)didCollectReaderContentForMail:(id)arg1 ;
-(void)didPrepareReaderContentForPrinting:(id)arg1 ;
-(void)didPrepareReaderContentForDisplay:(id)arg1 ;
-(void)setReaderUserVisibleWidth:(double)arg1 ;
-(id)readerControllerProxy;
-(void)createArticleFinder;
-(id)readerURL;
-(char)isReaderAvailable;
-(char)isLoadingNextPage;
-(void)stopLoadingNextPage;
-(char)hasMultiplePages;
-(void)clearReaderWebView;
-(char)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned)arg1 ;
-(id)scrollPositionInformation;
-(void)clearAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(id)fontManager;
-(void)setReaderLanguageTag:(id)arg1 ;
-(void)didCreateReaderWebView:(id)arg1 ;
-(void)dealloc;
-(id)webView;
-(id)configuration;
-(id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3 ;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
@end
