
@interface UIPrintPageRenderer : NSObject {

    double _headerHeight;
    double _footerHeight;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _paperRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _printableRect;
    NSMutableArray* _printFormatters;
    ^{CGContext=} _printContext;
}
@property (nonatomic, assign, readwrite) NSNumber* headerHeight;
@property (nonatomic, assign, readwrite) NSNumber* footerHeight;
@property (nonatomic, assign, readwrite) NSNumber* paperRect;
@property (nonatomic, assign, readwrite) NSNumber* printableRect;
@property (nonatomic, copy, readwrite) NSArray* printFormatters;

 - (void) dealloc;
 - (long long) numberOfPages;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) printableRect;
 - (void) _removePrintFormatter:(id)a ;
 - (double) headerHeight;
 - (double) footerHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paperRect;
 - (void) setPaperRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPrintableRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) addPrintFormatter:(id)a startingAtPageAtIndex:(long long)b ;
 - (void) prepareForDrawingPages:({_NSRange=QQ})a ;
 - (BOOL) _startPrintContext:(id)a printSettings:(id)b ;
 - (void) _drawPage:(long long)a ;
 - (void) _endPrintContext:(id)a success:(BOOL)b ;
 - (long long) _maxFormatterPage;
 - (void) drawHeaderForPageAtIndex:(long long)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) drawContentForPageAtIndex:(long long)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) drawPrintFormatter:(id)a forPageAtIndex:(long long)b ;
 - (void) drawFooterForPageAtIndex:(long long)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) drawPageAtIndex:(long long)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) setPrintFormatters:(id)a ;
 - (id) printFormattersForPageAtIndex:(long long)a ;
 - (void) setHeaderHeight:(double)a ;
 - (void) setFooterHeight:(double)a ;
 - (id) printFormatters;


@end
