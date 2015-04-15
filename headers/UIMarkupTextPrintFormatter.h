
@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

    UIWebDocumentView* _webDocumentView;
    UIWebPaginationInfo* _paginationInfo;
    NSString* _markupText;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (long long) _recalcPageCount;
 - (void) removeFromPrintPageRenderer;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(long long)a ;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forPageAtIndex:(long long)b ;
 - (void) setMarkupText:(id)a ;
 - (id) initWithMarkupText:(id)a ;
 - (id) markupText;


@end
