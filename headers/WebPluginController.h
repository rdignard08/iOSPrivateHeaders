
@protocol WebPluginManualLoader, WebPluginContainerCheckController;
@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {

    WAKView* _documentView;
    WebDataSource* _dataSource;
    NSMutableArray* _views;
    BOOL _started;
    NSMutableSet* _checksInProgress;
}
 + (BOOL) isPlugInView:(id)a;
 + (void) addPlugInView:(id)a;

 - (void) dealloc;
 - (id) webFrame;
 - (id) webView;
 - (void) setDataSource:(id)a ;
 - (id) plugInViewWithArguments:(id)a fromPluginPackage:(id)b ;
 - (void) pluginView:(id)a receivedResponse:(id)b ;
 - (void) pluginView:(id)a receivedData:(id)b ;
 - (void) pluginView:(id)a receivedError:(id)b ;
 - (void) pluginViewFinishedLoading:(id)a ;
 - (void) destroyAllPlugins;
 - (id) initWithDocumentView:(id)a ;
 - (void) stopAllPlugins;
 - (void) startAllPlugins;
 - (void) addPlugin:(id)a ;
 - (void) destroyPlugin:(id)a ;
 - (void) _webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)a ;
 - (void) stopOnePlugin:(id)a ;
 - (void) stopOnePluginForPageCache:(id)a ;
 - (void) destroyOnePlugin:(id)a ;
 - (void) _cancelOutstandingChecks;
 - (void) webPlugInContainerShowStatus:(id)a ;
 - (BOOL) plugInsAreRunning;
 - (id) superlayerForPluginView:(id)a ;
 - (void) stopPluginsForPageCache;
 - (void) restorePluginsFromCache;
 - (BOOL) processingUserGesture;
 - (id) _webPluginContainerCheckIfAllowedToLoadRequest:(id)a inFrame:(id)b resultObject:(id)c selector:(SEL)d ;
 - (void) webPlugInContainerLoadRequest:(id)a inFrame:(id)b ;
 - (void) webPlugInContainerWillShowFullScreenForView:(id)a ;
 - (void) webPlugInContainerDidHideFullScreenForView:(id)a ;
 - (void) showStatus:(id)a ;
 - (id) URLPolicyCheckReferrer;


@end
