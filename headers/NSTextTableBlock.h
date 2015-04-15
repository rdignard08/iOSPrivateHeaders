
@interface NSTextTableBlock : NSTextBlock {

    @"NSTextTable" _table;
    q _rowNum;
    q _colNum;
    q _rowSpan;
    q _colSpan;
    ^v _tableBlockPrimary;
    ^v _tableBlockSecondary;
}
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) table;
 - (void) drawBackgroundWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bcharacterRange:({_NSRange=QQ})clayoutManager:(id)d;
 - (q) startingRow;
 - (q) columnSpan;
 - (q) rowSpan;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForLayoutAtPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - (id) initWithTable:(id)astartingRow:(q)browSpan:(q)cstartingColumn:(q)dcolumnSpan:(q)e;
 - (q) startingColumn;
 - (void) _setRowSpan:(q)a;
 - (void) _setColumnSpan:(q)a;


@end
