
@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

    @"UIWebDocumentView" _webDocumentView;
    @"UIWebPaginationInfo" _paginationInfo;
    @"NSString" _markupText;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (q) _recalcPageCount;
 - (void) removeFromPrintPageRenderer;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(q)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(q)b;
 - (void) setMarkupText:(id)a;
 - (id) initWithMarkupText:(id)a;
 - (id) markupText;


@end
