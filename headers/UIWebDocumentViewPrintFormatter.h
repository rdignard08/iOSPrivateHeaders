
@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {

    @"UIWebPaginationInfo" _paginationInfo;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) _webDocumentView;
 - (q) _recalcPageCount;
 - (void) removeFromPrintPageRenderer;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(q)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(q)b;


@end
