
@interface WebInspector : NSObject {

    @"WebView" _webView;
    @"WebInspectorFrontend" _frontend;
}

 - (void) dealloc;
 - (void) show:(id)a;
 - (void) detach:(id)a;
 - (void) showWindow;
 - (BOOL) isDebuggingJavaScript;
 - (BOOL) isTimelineProfilingEnabled;
 - (void) setTimelineProfilingEnabled:(BOOL)a;
 - (id) initWithWebView:(id)a;
 - (void) webViewClosed;
 - (void) showConsole:(id)a;
 - (void) toggleDebuggingJavaScript:(id)a;
 - (void) startDebuggingJavaScript:(id)a;
 - (void) stopDebuggingJavaScript:(id)a;
 - (BOOL) isProfilingJavaScript;
 - (void) toggleProfilingJavaScript:(id)a;
 - (void) startProfilingJavaScript:(id)a;
 - (void) stopProfilingJavaScript:(id)a;
 - (BOOL) isJavaScriptProfilingEnabled;
 - (void) setJavaScriptProfilingEnabled:(BOOL)a;
 - (void) close:(id)a;
 - (void) attach:(id)a;
 - (void) evaluateInFrontend:(id)ascript:(id)b;
 - (void) setFrontend:(id)a;
 - (void) releaseFrontend;


@end
