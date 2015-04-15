
@interface UIPrintPageRenderer : NSObject {

    d _headerHeight;
    d _footerHeight;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _paperRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _printableRect;
    @"NSMutableArray" _printFormatters;
    ^{CGContext=} _printContext;
}
@property (nonatomic, assign, readwrite) NSNumber* headerHeight;
@property (nonatomic, assign, readwrite) NSNumber* footerHeight;
@property (nonatomic, assign, readwrite) NSNumber* paperRect;
@property (nonatomic, assign, readwrite) NSNumber* printableRect;
@property (nonatomic, copy, readwrite) NSArray* printFormatters;

 - (void) dealloc;
 - (q) numberOfPages;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) printableRect;
 - (void) _removePrintFormatter:(id)a;
 - (d) headerHeight;
 - (d) footerHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) paperRect;
 - (void) setPaperRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPrintableRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) addPrintFormatter:(id)astartingAtPageAtIndex:(q)b;
 - (void) prepareForDrawingPages:({_NSRange=QQ})a;
 - (BOOL) _startPrintContext:(id)aprintSettings:(id)b;
 - (void) _drawPage:(q)a;
 - (void) _endPrintContext:(id)asuccess:(BOOL)b;
 - (q) _maxFormatterPage;
 - (void) drawHeaderForPageAtIndex:(q)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) drawContentForPageAtIndex:(q)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) drawPrintFormatter:(id)aforPageAtIndex:(q)b;
 - (void) drawFooterForPageAtIndex:(q)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) drawPageAtIndex:(q)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) setPrintFormatters:(id)a;
 - (id) printFormattersForPageAtIndex:(q)a;
 - (void) setHeaderHeight:(d)a;
 - (void) setFooterHeight:(d)a;
 - (id) printFormatters;


@end
