
@interface UITextViewPrintFormatter : UIViewPrintFormatter {

    {?="initializedUsedRects"b1} _textViewPrintFormatterFlags;
    @"NSArray" _pageData;
}

 - (void) dealloc;
 - (void) setTextAlignment:(long long)a;
 - (void) setAttributedText:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (id) attributedText;
 - (long long) textAlignment;
 - (id) _textView;
 - (long long) _recalcPageCount;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(long long)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(long long)b;
 - (id) _pageData;
 - (void) setColor:(id)a;
 - (id) color;
 - (id) font;
 - (id) text;


@end
