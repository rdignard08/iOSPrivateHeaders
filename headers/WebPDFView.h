
@protocol WebPDFDocumentView, WebPDFDocumentRepresentation;
@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

    BOOL dataSourceHasBeenSet;
    ^{CGPDFDocument=} _PDFDocument;
    NSString* _title;
    ^{CGRect={CGPoint=dd}{CGSize=dd}} _pageRects;
}
 + (^{CGColor=}) shadowColor;
 + (^{CGColor=}) backgroundColor;
 + (Class) _representationClassForWebFrame:(id)a;
 + (id) supportedMIMETypes;

 - (id) title;
 - (void) dealloc;
 - (unsigned int) totalPages;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageNumber:(unsigned int)a ;
 - (^{CGPDFDocument=}) doc;
 - (void) layout;
 - (void) dataSourceUpdated:(id)a ;
 - (void) setDataSource:(id)a ;
 - (void) setNeedsLayout:(BOOL)a ;
 - (void) viewWillMoveToHostWindow:(id)a ;
 - (void) viewDidMoveToHostWindow;
 - (void) receivedData:(id)a withDataSource:(id)b ;
 - (void) receivedError:(id)a withDataSource:(id)b ;
 - (void) finishedLoadingWithDataSource:(id)a ;
 - (BOOL) canProvideDocumentSource;
 - (id) documentSource;
 - (id) _pagesInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawPage:(^{CGPDFPage=})a ;
 - (void) _checkPDFTitle;
 - (void) _computePageRects;
 - (unsigned int) pageNumberForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
