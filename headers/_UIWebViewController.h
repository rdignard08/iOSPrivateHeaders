
@interface _UIWebViewController : UIViewController {

    @"_UIAsyncInvocation" _cancelViewServiceRequest;
    @"_UIRemoteWebViewController" _remoteViewController;
    @"_UIQueueingServiceWebViewControllerProxy" _serviceProxy;
    BOOL _hasCalledBeginAppearanceTransition;
    BOOL _hasCalledEndAppearanceTransition;
    BOOL _canGoBack;
    BOOL _canGoForward;
    BOOL _loading;
    f _estimatedProgress;
    @"<_UIWebViewControllerDelegate>" _delegate;
    @"UIBarButtonItem" _backBarButtonItem;
    @"UIBarButtonItem" _forwardBarButtonItem;
    @"NSString" _pageTitle;
    @"NSString" _URLString;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) backBarButtonItem;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (BOOL) shouldAutomaticallyForwardAppearanceMethods;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (void) viewServiceDidTerminateWithError:(id)a;
 - (void) loadHTMLString:(id)abaseURL:(id)b;
 - (void) _setTitle:(id)a;
 - (BOOL) canGoBack;
 - (BOOL) canGoForward;
 - (void) configureWithSettings:(id)a;
 - (void) _webContentSizeWithReplyHandler:(@?)a;
 - (void) queueingServiceProxy:(id)awillQueueInvocation:(id)b;
 - (void) _setCanGoBack:(BOOL)acanGoForward:(BOOL)b;
 - (void) _setEstimatedProgress:(f)a;
 - (void) _setLoading:(BOOL)aerror:(id)b;
 - (void) _setURLString:(id)a;
 - (void) _decidePolicyForEncodedRequest:(id)ainMainFrame:(BOOL)bnavigationType:(id)creplyHandler:(@?)d;
 - (void) _dispatchWillPresentViewControllerWithCompletionHandler:(@?)a;
 - (void) _dispatchDidDismissViewController;
 - (void) _sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)a;
 - (void) _addRemoteView;
 - (void) _sendEndAppearanceTransitionIfReady;
 - (void) _updateBarButtonItems;
 - (void) _connectToService;
 - (void) setURLString:(id)a;
 - (id) forwardBarButtonItem;
 - (void) stopLoading;
 - (id) delegate;
 - (void) goBack;
 - (void) goForward;
 - (BOOL) isLoading;
 - (id) pageTitle;
 - (f) estimatedProgress;
 - (void) loadRequest:(id)a;
 - (void) reload;
 - (id) URLString;


@end