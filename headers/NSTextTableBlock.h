
@interface NSTextTableBlock : NSTextBlock {

    NSTextTable _table;
    long long _rowNum;
    long long _colNum;
    long long _rowSpan;
    long long _colSpan;
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
 - (long long) startingRow;
 - (long long) columnSpan;
 - (long long) rowSpan;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForLayoutAtPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - (id) initWithTable:(id)astartingRow:(long long)browSpan:(long long)cstartingColumn:(long long)dcolumnSpan:(long long)e;
 - (long long) startingColumn;
 - (void) _setRowSpan:(long long)a;
 - (void) _setColumnSpan:(long long)a;


@end
