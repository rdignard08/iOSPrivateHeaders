
@interface NSTextTable : NSTextBlock {

    unsigned long long _numCols;
    unsigned long long _tableFlags;
    id _lcache;
    ^v _tablePrimary;
    ^v _tableSecondary;
}
 + (void) initialize;

 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) numberOfColumns;
 - (void) _takeValuesFromTextBlock:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForBlock:(id)alayoutAtPoint:({CGPoint=dd})binRect:({CGRect={CGPoint=dd}{CGSize=dd}})ctextContainer:(id)dcharacterRange:({_NSRange=QQ})e;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForBlock:(id)acontentRect:({CGRect={CGPoint=dd}{CGSize=dd}})binRect:({CGRect={CGPoint=dd}{CGSize=dd}})ctextContainer:(id)dcharacterRange:({_NSRange=QQ})e;
 - (void) drawBackgroundForBlock:(id)awithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})binView:(id)ccharacterRange:({_NSRange=QQ})dlayoutManager:(id)e;
 - (BOOL) collapsesBorders;
 - (id) _rowArrayForBlock:(id)aatIndex:(unsigned long long)btext:(id)clayoutManager:(id)dcontainerWidth:(double)ewithRepetitions:(BOOL)fcollapseBorders:(BOOL)growCharRange:(^{_NSRange=QQ})hindexInRow:(^Q)istartingRow:(^q)jstartingColumn:(^q)kpreviousRowBlockHelper:(^@)l;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCharRange:({_NSRange=QQ})atextContainer:(id)b;
 - (BOOL) hidesEmptyCells;
 - (BOOL) _missingColumnsForRowRange:({_NSRange=QQ})ablockIndex:(unsigned long long)btext:(id)c;
 - (void) setNumberOfColumns:(unsigned long long)a;
 - (void) setCollapsesBorders:(BOOL)a;
 - (void) setHidesEmptyCells:(BOOL)a;
 - (unsigned long long) layoutAlgorithm;
 - (void) setLayoutAlgorithm:(unsigned long long)a;
 - (unsigned long long) _tableFlags;
 - (void) _setTableFlags:(unsigned long long)a;
 - (id) _descriptionAtIndex:(unsigned long long)atext:(id)b;


@end
