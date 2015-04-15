
@protocol WebDocumentView, WebDocumentElement;
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement> {

}

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (void) layout;
 - (void) dataSourceUpdated:(id)a;
 - (void) setDataSource:(id)a;
 - (void) setNeedsLayout:(BOOL)a;
 - (void) viewWillMoveToHostWindow:(id)a;
 - (void) viewDidMoveToHostWindow;
 - (id) elementAtPoint:({CGPoint=dd})a;
 - (id) elementAtPoint:({CGPoint=dd})aallowShadowContent:(BOOL)b;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
