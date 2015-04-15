
@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {

    UIWebPaginationInfo* _paginationInfo;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) _webDocumentView;
 - (long long) _recalcPageCount;
 - (void) removeFromPrintPageRenderer;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(long long)a ;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forPageAtIndex:(long long)b ;


@end
