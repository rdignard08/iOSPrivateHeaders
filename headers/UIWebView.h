
@protocol NSCoding, UIScrollViewDelegate;
@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {

    UIWebViewInternal* _internal;
}
 + (void) initialize;
 + (id) _relativePathFromAbsolutePath:(id)aremovingPathComponents:(unsigned long long)b;
 + (void) _updatePersistentStoragePaths;
 + (void) _fixPathsForSandboxDirectoryChange;

 - (void) setRequestSerializer:(id)a;
 - (void) setResponseSerializer:(id)a;
 - (id) requestSerializer;
 - (id) responseSerializer;
 - (void) loadRequest:(id)aMIMEType:(id)btextEncodingName:(id)cprogress:(@?)dsuccess:(@?)efailure:(@?)f;
 - (void) loadRequest:(id)aprogress:(@?)bsuccess:(@?)cfailure:(@?)d;
 - (id) af_HTTPRequestOperation;
 - (void) af_setHTTPRequestOperation:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (void) scrollViewDidScroll:(id)a;
 - (void) scrollViewDidZoom:(id)a;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (void) scrollViewDidEndDragging:(id)awillDecelerate:(BOOL)b;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - (id) viewForZoomingInScrollView:(id)a;
 - (void) scrollViewWillBeginZooming:(id)awithView:(id)b;
 - (void) scrollViewDidEndZooming:(id)awithView:(id)batScale:(double)c;
 - (void) scrollViewDidScrollToTop:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) alertView:(id)adidDismissWithButtonIndex:(long long)b;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (^{CGImage=}) newSnapshotWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (^{CGImage=}) createSnapshotWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _appliesExclusiveTouchToSubviewTree;
 - (id) scrollView;
 - (void) setDataDetectorTypes:(unsigned long long)a;
 - (unsigned long long) dataDetectorTypes;
 - (void) selectAll:(id)a;
 - (void) copy:(id)a;
 - (void) _define:(id)a;
 - (void) _addShortcut:(id)a;
 - (void) select:(id)a;
 - (Class) _printFormatterClass;
 - (void) loadHTMLString:(id)abaseURL:(id)b;
 - (void) view:(id)adidSetFrame:({CGRect={CGPoint=dd}{CGSize=dd}})boldFrame:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) webViewMainFrameDidFinishLoad:(id)a;
 - (void) webViewMainFrameDidFailLoad:(id)awithError:(id)b;
 - (void) webViewMainFrameDidCommitLoad:(id)a;
 - (void) saveStateToHistoryItem:(id)aforWebView:(id)b;
 - (void) restoreStateFromHistoryItem:(id)aforWebView:(id)b;
 - (void) setMediaPlaybackAllowsAirPlay:(BOOL)a;
 - (void) setDetectsPhoneNumbers:(BOOL)a;
 - (BOOL) detectsPhoneNumbers;
 - (void) setSuppressesIncrementalRendering:(BOOL)a;
 - (unsigned long long) pageCount;
 - (id) _documentView;
 - (void) scrollViewWasRemoved:(id)a;
 - (BOOL) scalesPageToFit;
 - (void) _updateViewSettings;
 - (id) _browserView;
 - (void) _setScalesPageToFitViewportSettings;
 - (void) _setRichTextReaderViewportSettings;
 - (void) _updateBrowserViewExposedScrollViewRect;
 - (void) _updateCheckeredPattern;
 - (void) _setDrawInWebThread:(BOOL)a;
 - (void) _updateOpaqueAndBackgroundColor;
 - (void) _didRotate:(id)a;
 - (void) setScalesPageToFit:(BOOL)a;
 - (void) _webViewCommonInitWithWebView:(id)ascalesPageToFit:(BOOL)b;
 - (id) stringByEvaluatingJavaScriptFromString:(id)a;
 - (void) setAllowsInlineMediaPlayback:(BOOL)a;
 - (BOOL) allowsInlineMediaPlayback;
 - (void) setMediaPlaybackRequiresUserAction:(BOOL)a;
 - (BOOL) mediaPlaybackRequiresUserAction;
 - (BOOL) canGoBack;
 - (BOOL) canGoForward;
 - (void) _rescaleDocument;
 - (void) _frameOrBoundsChanged;
 - (void) _updateScrollerViewForInputView:(id)a;
 - (void) _didCompleteScrolling;
 - (void) _reportError:(id)a;
 - (void) _updateRequest;
 - (id) _makeAlertView;
 - (long long) paginationMode;
 - (long long) _paginationMode;
 - (void) setPaginationMode:(long long)a;
 - (void) _setPaginationMode:(long long)a;
 - (long long) paginationBreakingMode;
 - (BOOL) _paginationBehavesLikeColumns;
 - (void) setPaginationBreakingMode:(long long)a;
 - (void) _setPaginationBehavesLikeColumns:(BOOL)a;
 - (double) pageLength;
 - (double) _pageLength;
 - (void) setPageLength:(double)a;
 - (void) _setPageLength:(double)a;
 - (double) gapBetweenPages;
 - (double) _gapBetweenPages;
 - (void) setGapBetweenPages:(double)a;
 - (void) _setGapBetweenPages:(double)a;
 - (unsigned long long) _pageCount;
 - (BOOL) keyboardDisplayRequiresUserAction;
 - (void) setKeyboardDisplayRequiresUserAction:(BOOL)a;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aenableReachability:(BOOL)b;
 - (void) _beginRotation;
 - (void) _finishRotation;
 - (void) webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)a;
 - (id) _initWithWebView:(id)a;
 - (id) _pdfViewHandler;
 - (void) _setOverridesOrientationChangeEventHandling:(BOOL)a;
 - (void) _setDrawsCheckeredPattern:(BOOL)a;
 - (void) _setWebSelectionEnabled:(BOOL)a;
 - (void) _setAlwaysDispatchesScrollEvents:(BOOL)a;
 - (BOOL) _alwaysDispatchesScrollEvents;
 - (void) _setAudioSessionCategoryOverride:(unsigned long long)a;
 - (unsigned long long) _audioSessionCategoryOverride;
 - (void) _setNetworkInterfaceName:(id)a;
 - (id) _networkInterfaceName;
 - (void) configureWithSettings:(id)a;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) stopLoading;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) request;
 - (id) delegate;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) loadData:(id)aMIMEType:(id)btextEncodingName:(id)cbaseURL:(id)d;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) goBack;
 - (void) goForward;
 - (void) webView:(id)arunJavaScriptAlertPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (BOOL) webView:(id)arunJavaScriptConfirmPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (id) webView:(id)arunJavaScriptTextInputPanelWithPrompt:(id)bdefaultText:(id)cinitiatedByFrame:(id)d;
 - (void) webView:(id)aprintFrameView:(id)b;
 - (void) webView:(id)aframe:(id)bexceededDatabaseQuotaForSecurityOrigin:(id)cdatabase:(id)d;
 - (void) webView:(id)aexceededApplicationCacheOriginQuotaForSecurityOrigin:(id)btotalSpaceNeeded:(unsigned long long)c;
 - (BOOL) isLoading;
 - (void) webView:(id)aunableToImplementPolicyWithError:(id)bframe:(id)c;
 - (void) webView:(id)adecidePolicyForMIMEType:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNewWindowAction:(id)brequest:(id)cnewFrameName:(id)ddecisionListener:(id)e;
 - (void) webViewClose:(id)a;
 - (void) webViewSupportedOrientationsUpdated:(id)a;
 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveServerRedirectForProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidFailProvisionalLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidCommitLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveTitle:(id)bforFrame:(id)c;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidChangeLocationWithinPageForFrame:(id)b;
 - (void) webView:(id)adidClearWindowObject:(id)bforFrame:(id)c;
 - (void) webView:(id)adidFirstLayoutInFrame:(id)b;
 - (id) _scrollView;
 - (void) loadRequest:(id)a;
 - (void) reload;
 - (id) webView:(id)aidentifierForInitialRequest:(id)bfromDataSource:(id)c;
 - (id) webThreadWebView:(id)aresource:(id)bwillSendRequest:(id)credirectResponse:(id)dfromDataSource:(id)e;
 - (void) webView:(id)aresource:(id)bdidReceiveAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (BOOL) webView:(id)aresource:(id)bcanAuthenticateAgainstProtectionSpace:(id)cforDataSource:(id)d;
 - (id) webView:(id)aconnectionPropertiesForResource:(id)bdataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidCancelAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidFinishLoadingFromDataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidFailLoadingWithError:(id)cfromDataSource:(id)d;
 - (void) webView:(id)adecidePolicyForGeolocationRequestFromOrigin:(id)bframe:(id)clistener:(id)d;
 - (BOOL) suppressesIncrementalRendering;
 - (BOOL) mediaPlaybackAllowsAirPlay;
 - (void) setOpaque:(BOOL)a;


@end
