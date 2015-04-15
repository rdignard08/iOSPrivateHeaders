
@interface UIViewPrintFormatter : UIPrintFormatter {

    UIView _view;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (long long) _recalcPageCount;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(long long)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(long long)b;
 - (id) _initWithView:(id)a;
 - (id) view;


@end
