
@interface WAKClipView : WAKView {

    BOOL _copiesOnScroll;
    WAKView* _documentView;
}

 - (void) dealloc;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) documentView;
 - (void) setCopiesOnScroll:(BOOL)a ;
 - (BOOL) copiesOnScroll;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentVisibleRect;
 - (void) _setDocumentView:(id)a ;


@end
