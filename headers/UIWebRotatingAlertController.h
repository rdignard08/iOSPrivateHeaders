
@interface UIWebRotatingAlertController : _UIRotatingAlertController {

    BOOL _wasDeferringCallbacks;
    UIWebDocumentView _webBrowserView;
}

 - (void) dealloc;
 - (void) doneWithSheet;
 - (id) initWithUIWebDocumentView:(id)a;
 - (BOOL) presentSheet;
 - (void) _enableWebView;
 - (void) _disableWebView;


@end
