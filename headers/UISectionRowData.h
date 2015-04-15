
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
    NSMutableIndexSet* _forcedNegativeRows;
    ^d _rowOffsets;
    BOOL _estimatesRowHeights;
    double _sectionHeight;
    long long _headerAlignment;
    long long _footerAlignment;
    UITableViewRowData* _rowData;
    BOOL _sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) invalidate;
 - (double) heightForHeaderInSection:(long long)a canGuess:(BOOL)b ;
 - (double) heightForFooterInSection:(long long)a canGuess:(BOOL)b ;
 - (double) heightForRow:(long long)a inSection:(long long)b canGuess:(BOOL)c ;
 - (void) invalidateSectionOffset;
 - (void) updateSectionHeightWithDelta:(double)a section:(long long)b updateFooterOffset:(BOOL)c ;
 - (double) _headerOrFooterSizeForTable:(id)a title:(id)b detailText:(id)c isHeader:(BOOL)d stripPaddingForAbuttingView:(BOOL)e isTopHeader:(BOOL)f ;
 - (double) heightForEmptySection:(long long)a inTableView:(id)b rowData:(id)c ;
 - (double) _defaultSectionHeaderHeightForSection:(long long)a tableView:(id)b tableViewRowData:(id)c ;
 - (double) _defaultSectionFooterHeightForSection:(long long)a tableView:(id)b tableViewRowData:(id)c ;
 - (void) deleteRowAtIndex:(long long)a ;
 - (void) addOffset:(double)a fromRow:(long long)b ;
 - (double) offsetForRow:(long long)a ;
 - (long long) _rowForPoint:({CGPoint=dd})a beginningWithRow:(long long)b numberOfRows:(long long)c ;
 - (id) initWithRowData:(id)a ;
 - (void) setHeight:(double)a forRow:(long long)b ;
 - (void) refreshWithSection:(long long)a tableView:(id)b tableViewRowData:(id)c ;
 - (void) insertRowAtIndex:(long long)a inSection:(long long)b rowHeight:(double)c tableViewRowData:(id)d ;
 - (int) sectionLocationForRow:(long long)a ;
 - (int) sectionLocationForReorderedRow:(long long)a ;
 - (long long) rowForPoint:({CGPoint=dd})a ;


@end
