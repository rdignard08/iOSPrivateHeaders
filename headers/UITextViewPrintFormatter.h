
@interface UITextViewPrintFormatter : UIViewPrintFormatter {

    {?="initializedUsedRects"b1} _textViewPrintFormatterFlags;
    @"NSArray" _pageData;
}

 - (void) dealloc;
 - (void) setTextAlignment:(q)a;
 - (void) setAttributedText:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (id) attributedText;
 - (q) textAlignment;
 - (id) _textView;
 - (q) _recalcPageCount;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(q)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(q)b;
 - (id) _pageData;
 - (void) setColor:(id)a;
 - (id) color;
 - (id) font;
 - (id) text;


@end
