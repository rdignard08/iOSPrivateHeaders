
@protocol WebPluginManualLoader, WebPluginContainerCheckController;
@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {

    @"WAKView" _documentView;
    @"WebDataSource" _dataSource;
    @"NSMutableArray" _views;
    BOOL _started;
    @"NSMutableSet" _checksInProgress;
}
 + (BOOL) isPlugInView:(id)a;
 + (void) addPlugInView:(id)a;

 - (void) dealloc;
 - (id) webFrame;
 - (id) webView;
 - (void) setDataSource:(id)a;
 - (id) plugInViewWithArguments:(id)afromPluginPackage:(id)b;
 - (void) pluginView:(id)areceivedResponse:(id)b;
 - (void) pluginView:(id)areceivedData:(id)b;
 - (void) pluginView:(id)areceivedError:(id)b;
 - (void) pluginViewFinishedLoading:(id)a;
 - (void) destroyAllPlugins;
 - (id) initWithDocumentView:(id)a;
 - (void) stopAllPlugins;
 - (void) startAllPlugins;
 - (void) addPlugin:(id)a;
 - (void) destroyPlugin:(id)a;
 - (void) _webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)a;
 - (void) stopOnePlugin:(id)a;
 - (void) stopOnePluginForPageCache:(id)a;
 - (void) destroyOnePlugin:(id)a;
 - (void) _cancelOutstandingChecks;
 - (void) webPlugInContainerShowStatus:(id)a;
 - (BOOL) plugInsAreRunning;
 - (id) superlayerForPluginView:(id)a;
 - (void) stopPluginsForPageCache;
 - (void) restorePluginsFromCache;
 - (BOOL) processingUserGesture;
 - (id) _webPluginContainerCheckIfAllowedToLoadRequest:(id)ainFrame:(id)bresultObject:(id)cselector:(SEL)d;
 - (void) webPlugInContainerLoadRequest:(id)ainFrame:(id)b;
 - (void) webPlugInContainerWillShowFullScreenForView:(id)a;
 - (void) webPlugInContainerDidHideFullScreenForView:(id)a;
 - (void) showStatus:(id)a;
 - (id) URLPolicyCheckReferrer;


@end
