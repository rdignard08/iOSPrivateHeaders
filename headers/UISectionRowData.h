
@protocol NSCopying;
@interface UISectionRowData : NSObject <NSCopying> {

    BOOL _valid;
    double _headerHeight;
    double _maxHeaderTitleWidth;
    double _footerHeight;
    double _maxFooterTitleWidth;
    double _headerOffset;
    double _footerOffset;
    unsigned long long _numRows;
    unsigned long long _arrayLength;
    ^f _rowHeights;
    NSMutableIndexSet _forcedNegativeRows;
    ^d _rowOffsets;
    BOOL _estimatesRowHeights;
    double _sectionHeight;
    long long _headerAlignment;
    long long _footerAlignment;
    UITableViewRowData _rowData;
    BOOL _sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) invalidate;
 - (double) heightForHeaderInSection:(long long)acanGuess:(BOOL)b;
 - (double) heightForFooterInSection:(long long)acanGuess:(BOOL)b;
 - (double) heightForRow:(long long)ainSection:(long long)bcanGuess:(BOOL)c;
 - (void) invalidateSectionOffset;
 - (void) updateSectionHeightWithDelta:(double)asection:(long long)bupdateFooterOffset:(BOOL)c;
 - (double) _headerOrFooterSizeForTable:(id)atitle:(id)bdetailText:(id)cisHeader:(BOOL)dstripPaddingForAbuttingView:(BOOL)eisTopHeader:(BOOL)f;
 - (double) heightForEmptySection:(long long)ainTableView:(id)browData:(id)c;
 - (double) _defaultSectionHeaderHeightForSection:(long long)atableView:(id)btableViewRowData:(id)c;
 - (double) _defaultSectionFooterHeightForSection:(long long)atableView:(id)btableViewRowData:(id)c;
 - (void) deleteRowAtIndex:(long long)a;
 - (void) addOffset:(double)afromRow:(long long)b;
 - (double) offsetForRow:(long long)a;
 - (long long) _rowForPoint:({CGPoint=dd})abeginningWithRow:(long long)bnumberOfRows:(long long)c;
 - (id) initWithRowData:(id)a;
 - (void) setHeight:(double)aforRow:(long long)b;
 - (void) refreshWithSection:(long long)atableView:(id)btableViewRowData:(id)c;
 - (void) insertRowAtIndex:(long long)ainSection:(long long)browHeight:(double)ctableViewRowData:(id)d;
 - (int) sectionLocationForRow:(long long)a;
 - (int) sectionLocationForReorderedRow:(long long)a;
 - (long long) rowForPoint:({CGPoint=dd})a;


@end
