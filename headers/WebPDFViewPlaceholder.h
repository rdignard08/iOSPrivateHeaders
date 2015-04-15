
@protocol WebPDFDocumentView, WebPDFDocumentRepresentation;
@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

    @"NSString" _title;
    @"NSArray" _pageRects;
    @"NSArray" _pageYOrigins;
    ^{CGPDFDocument=} _document;
    @"WebDataSource" _dataSource;
    @"NSObject<WebPDFViewPlaceholderDelegate>" _delegate;
    BOOL _didFinishLoadAndMemoryMap;
    {CGSize="width"d"height"d} _containerSize;
    BOOL _didCompleteLayout;
}
 + (void) setAsPDFDocRepAndView;
 + (Class) _representationClassForWebFrame:(id)a;
 + (id) supportedMIMETypes;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (Q) totalPages;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageNumber:(Q)a;
 - (^{CGPDFDocument=}) doc;
 - (void) didUnlockDocument;
 - (void) clearDocument;
 - (id) pageYOrigins;
 - (void) simulateClickOnLinkToURL:(id)a;
 - (id) delegate;
 - ({CGSize=dd}) containerSize;
 - (void) layout;
 - (void) setContainerSize:({CGSize=dd})a;
 - (void) setDocument:(^{CGPDFDocument=})a;
 - (^{CGPDFDocument=}) document;
 - (void) setPageRects:(id)a;
 - (void) setPageYOrigins:(id)a;
 - (void) dataSourceUpdated:(id)a;
 - (void) _updateTitleForURL:(id)a;
 - (BOOL) didCompleteLayout;
 - (void) _notifyDidCompleteLayout;
 - (id) pageRects;
 - ({CGSize=dd}) _computePageRects:(^{CGPDFDocument=})a;
 - (void) _doPostLoadOrUnlockTasks;
 - (void) dataSourceMemoryMapped;
 - (void) _updateTitleForDocumentIfAvailable;
 - (void) _evaluateJSForDocument:(^{CGPDFDocument=})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _getPDFPageBounds:(^{CGPDFPage=})a;
 - (void) setDataSource:(id)a;
 - (void) viewWillMoveToHostWindow:(id)a;
 - (void) viewDidMoveToHostWindow;
 - (void) receivedData:(id)awithDataSource:(id)b;
 - (void) receivedError:(id)awithDataSource:(id)b;
 - (void) finishedLoadingWithDataSource:(id)a;
 - (BOOL) canProvideDocumentSource;
 - (id) documentSource;
 - (void) dataSourceMemoryMapFailed;


@end
