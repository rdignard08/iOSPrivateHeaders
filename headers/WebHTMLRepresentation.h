
@protocol WebDocumentRepresentation, WebDocumentDOM;
@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {

    WebHTMLRepresentationPrivate _private;
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
 - (void) setDataSource:(id)a;
 - (void) receivedData:(id)awithDataSource:(id)b;
 - (void) receivedError:(id)awithDataSource:(id)b;
 - (void) finishedLoadingWithDataSource:(id)a;
 - (BOOL) canProvideDocumentSource;
 - (id) documentSource;
 - (void) _redirectDataToManualLoader:(id)aforPluginView:(id)b;
 - (BOOL) _isDisplayingWebArchive;
 - (id) searchForLabels:(id)abeforeElement:(id)bresultDistance:(^Q)cresultIsInCellAbove:(^B)d;
 - (BOOL) canSaveAsWebArchive;
 - (id) elementWithName:(id)ainForm:(id)b;
 - (BOOL) elementDoesAutoComplete:(id)a;
 - (BOOL) elementIsPassword:(id)a;
 - (id) formForElement:(id)a;
 - (id) currentForm;
 - (id) controlsInForm:(id)a;
 - (id) searchForLabels:(id)abeforeElement:(id)b;
 - (id) matchLabels:(id)aagainstElement:(id)b;


@end
