
@protocol WebDocumentRepresentation, WebDocumentDOM;
@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {

    WebHTMLRepresentationPrivate* _private;
}
 + (id) supportedMIMETypes;
 + (id) supportedNonImageMIMETypes;
 + (id) supportedImageMIMETypes;
 + (id) unsupportedTextMIMETypes;

 - (id) title;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (id) DOMDocument;
 - (void) setDataSource:(id)a ;
 - (void) receivedData:(id)a withDataSource:(id)b ;
 - (void) receivedError:(id)a withDataSource:(id)b ;
 - (void) finishedLoadingWithDataSource:(id)a ;
 - (BOOL) canProvideDocumentSource;
 - (id) documentSource;
 - (void) _redirectDataToManualLoader:(id)a forPluginView:(id)b ;
 - (BOOL) _isDisplayingWebArchive;
 - (id) searchForLabels:(id)a beforeElement:(id)b resultDistance:(^Q)c resultIsInCellAbove:(^B)d ;
 - (BOOL) canSaveAsWebArchive;
 - (id) elementWithName:(id)a inForm:(id)b ;
 - (BOOL) elementDoesAutoComplete:(id)a ;
 - (BOOL) elementIsPassword:(id)a ;
 - (id) formForElement:(id)a ;
 - (id) currentForm;
 - (id) controlsInForm:(id)a ;
 - (id) searchForLabels:(id)a beforeElement:(id)b ;
 - (id) matchLabels:(id)a againstElement:(id)b ;


@end
