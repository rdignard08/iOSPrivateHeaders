
@interface UIWebPlugInView : WAKView {

    UIWebDocumentView* _webView;
    CALayer* _hostingLayer;
    UIView* _uiView;
    ^{__CFRunLoopObserver=} _mainRunLoopDrawObserver;
    BOOL _isFullScreen;
    BOOL _parentedInLayer;
    BOOL _isQuickTimePlugIn;
    BOOL _isMapViewPlugIn;
    BOOL _isiAdPlugIn;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (void) reshape;
 - (void) _viewDidMoveToWindowOnMainThread;
 - (void) _reshapeOnMainThread;
 - (BOOL) isParented;
 - (BOOL) isParentedInLayer;
 - (void) setParentedInLayer:(BOOL)a;
 - (void) _connectPluginLayers;
 - (void) _disconnectPluginLayers;
 - (void) _attachPluginLayerOnMainThread;
 - (void) _detachPluginLayerOnMainThread;
 - (id) initWithWebView:(id)aplugInView:(id)b;
 - (id) plugInView;
 - (void) setWebView:(id)a;
 - (void) setIsQuickTimePlugIn:(BOOL)a;
 - (BOOL) isMapViewPlugIn;
 - (void) setIsMapViewPlugIn:(BOOL)a;
 - (BOOL) isiAdPlugIn;
 - (void) setIsiAdPlugIn:(BOOL)a;
 - (void) layout;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isQuickTimePlugIn;
 - (void) detachPluginLayer;
 - (void) attachPluginLayer;
 - (BOOL) willProvidePluginLayer;
 - (id) pluginLayer;
 - (void) webPlugInStop;
 - (void) webPlugInDestroy;
 - (void) webPlugInStart;
 - (void) webPlugInInitialize;
 - (void) mouseDown:(id)a;
 - (void) mouseUp:(id)a;
 - (id) objectForWebScript;
 - (void) setFrameSize:({CGSize=dd})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) viewDidMoveToWindow;
 - (void) invalidateGState;


@end
