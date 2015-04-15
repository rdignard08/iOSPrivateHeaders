
@protocol NSCopying;
@interface UISectionRowData : NSObject <NSCopying> {

    BOOL _valid;
    d _headerHeight;
    d _maxHeaderTitleWidth;
    d _footerHeight;
    d _maxFooterTitleWidth;
    d _headerOffset;
    d _footerOffset;
    Q _numRows;
    Q _arrayLength;
    ^f _rowHeights;
    @"NSMutableIndexSet" _forcedNegativeRows;
    ^d _rowOffsets;
    BOOL _estimatesRowHeights;
    d _sectionHeight;
    q _headerAlignment;
    q _footerAlignment;
    @"UITableViewRowData" _rowData;
    BOOL _sectionOffsetValid;
    d _sectionOffset;
    q _sectionRowOffset;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) invalidate;
 - (d) heightForHeaderInSection:(q)acanGuess:(BOOL)b;
 - (d) heightForFooterInSection:(q)acanGuess:(BOOL)b;
 - (d) heightForRow:(q)ainSection:(q)bcanGuess:(BOOL)c;
 - (void) invalidateSectionOffset;
 - (void) updateSectionHeightWithDelta:(d)asection:(q)bupdateFooterOffset:(BOOL)c;
 - (d) _headerOrFooterSizeForTable:(id)atitle:(id)bdetailText:(id)cisHeader:(BOOL)dstripPaddingForAbuttingView:(BOOL)eisTopHeader:(BOOL)f;
 - (d) heightForEmptySection:(q)ainTableView:(id)browData:(id)c;
 - (d) _defaultSectionHeaderHeightForSection:(q)atableView:(id)btableViewRowData:(id)c;
 - (d) _defaultSectionFooterHeightForSection:(q)atableView:(id)btableViewRowData:(id)c;
 - (void) deleteRowAtIndex:(q)a;
 - (void) addOffset:(d)afromRow:(q)b;
 - (d) offsetForRow:(q)a;
 - (q) _rowForPoint:({CGPoint=dd})abeginningWithRow:(q)bnumberOfRows:(q)c;
 - (id) initWithRowData:(id)a;
 - (void) setHeight:(d)aforRow:(q)b;
 - (void) refreshWithSection:(q)atableView:(id)btableViewRowData:(id)c;
 - (void) insertRowAtIndex:(q)ainSection:(q)browHeight:(d)ctableViewRowData:(id)d;
 - (i) sectionLocationForRow:(q)a;
 - (i) sectionLocationForReorderedRow:(q)a;
 - (q) rowForPoint:({CGPoint=dd})a;


@end
