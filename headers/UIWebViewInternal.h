
@interface UIWebViewInternal : NSObject {

    UIScrollView* scroller;
    UIWebBrowserView* browserView;
    UICheckeredPatternView* checkeredPatternView;
    <UIWebViewDelegate>* delegate;
    b1 scalesPageToFit;
    b1 isLoading;
    b1 hasOverriddenOrientationChangeEventHandling;
    b1 drawsCheckeredPattern;
    b1 webSelectionEnabled;
    b1 drawInWebThread;
    b1 inRotation;
    b1 didRotateEnclosingScrollView;
    NSURLRequest* request;
    long long clickedAlertButtonIndex;
    UIWebViewWebViewDelegate* webViewDelegate;
    UIWebPDFViewHandler* pdfHandler;
}



@end
