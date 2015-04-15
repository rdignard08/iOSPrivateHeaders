
@interface UIViewPrintFormatter : UIPrintFormatter {

    @"UIView" _view;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (q) _recalcPageCount;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(q)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(q)b;
 - (id) _initWithView:(id)a;
 - (id) view;


@end
