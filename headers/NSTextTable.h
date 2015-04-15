
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
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) numberOfColumns;
 - (void) _takeValuesFromTextBlock:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForBlock:(id)a layoutAtPoint:({CGPoint=dd})b inRect:({CGRect={CGPoint=dd}{CGSize=dd}})c textContainer:(id)d characterRange:({_NSRange=QQ})e ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForBlock:(id)a contentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b inRect:({CGRect={CGPoint=dd}{CGSize=dd}})c textContainer:(id)d characterRange:({_NSRange=QQ})e ;
 - (void) drawBackgroundForBlock:(id)a withFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b inView:(id)c characterRange:({_NSRange=QQ})d layoutManager:(id)e ;
 - (BOOL) collapsesBorders;
 - (id) _rowArrayForBlock:(id)a atIndex:(unsigned long long)b text:(id)c layoutManager:(id)d containerWidth:(double)e withRepetitions:(BOOL)f collapseBorders:(BOOL)g rowCharRange:(^{_NSRange=QQ})h indexInRow:(^Q)i startingRow:(^q)j startingColumn:(^q)k previousRowBlockHelper:(^@)l ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCharRange:({_NSRange=QQ})a textContainer:(id)b ;
 - (BOOL) hidesEmptyCells;
 - (BOOL) _missingColumnsForRowRange:({_NSRange=QQ})a blockIndex:(unsigned long long)b text:(id)c ;
 - (void) setNumberOfColumns:(unsigned long long)a ;
 - (void) setCollapsesBorders:(BOOL)a ;
 - (void) setHidesEmptyCells:(BOOL)a ;
 - (unsigned long long) layoutAlgorithm;
 - (void) setLayoutAlgorithm:(unsigned long long)a ;
 - (unsigned long long) _tableFlags;
 - (void) _setTableFlags:(unsigned long long)a ;
 - (id) _descriptionAtIndex:(unsigned long long)a text:(id)b ;


@end
