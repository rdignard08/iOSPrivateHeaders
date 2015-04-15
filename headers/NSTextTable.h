
@interface NSTextTable : NSTextBlock {

    Q _numCols;
    Q _tableFlags;
    id _lcache;
    ^v _tablePrimary;
    ^v _tableSecondary;
}
 + (void) initialize;

 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) numberOfColumns;
 - (void) _takeValuesFromTextBlock:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForBlock:(id)alayoutAtPoint:({CGPoint=dd})binRect:({CGRect={CGPoint=dd}{CGSize=dd}})ctextContainer:(id)dcharacterRange:({_NSRange=QQ})e;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForBlock:(id)acontentRect:({CGRect={CGPoint=dd}{CGSize=dd}})binRect:({CGRect={CGPoint=dd}{CGSize=dd}})ctextContainer:(id)dcharacterRange:({_NSRange=QQ})e;
 - (void) drawBackgroundForBlock:(id)awithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})binView:(id)ccharacterRange:({_NSRange=QQ})dlayoutManager:(id)e;
 - (BOOL) collapsesBorders;
 - (id) _rowArrayForBlock:(id)aatIndex:(Q)btext:(id)clayoutManager:(id)dcontainerWidth:(d)ewithRepetitions:(BOOL)fcollapseBorders:(BOOL)growCharRange:(^{_NSRange=QQ})hindexInRow:(^Q)istartingRow:(^q)jstartingColumn:(^q)kpreviousRowBlockHelper:(^@)l;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCharRange:({_NSRange=QQ})atextContainer:(id)b;
 - (BOOL) hidesEmptyCells;
 - (BOOL) _missingColumnsForRowRange:({_NSRange=QQ})ablockIndex:(Q)btext:(id)c;
 - (void) setNumberOfColumns:(Q)a;
 - (void) setCollapsesBorders:(BOOL)a;
 - (void) setHidesEmptyCells:(BOOL)a;
 - (Q) layoutAlgorithm;
 - (void) setLayoutAlgorithm:(Q)a;
 - (Q) _tableFlags;
 - (void) _setTableFlags:(Q)a;
 - (id) _descriptionAtIndex:(Q)atext:(id)b;


@end
