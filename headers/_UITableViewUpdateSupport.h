
@interface _UITableViewUpdateSupport : NSObject {

    q oldSection;
    q newSection;
    q oldGlobalRow;
    q newGlobalRow;
    @"UITableView" tableView;
    {_NSRange="location"Q"length"Q} visibleRows;
    @"NSArray" updateItems;
    @"UITableViewRowData" oldRowData;
    @"UITableViewRowData" newRowData;
    {_NSRange="location"Q"length"Q} oldRowRange;
    {_NSRange="location"Q"length"Q} newRowRange;
    @"NSMutableIndexSet" rows;
    @"NSMutableIndexSet" movedRows;
    @"NSMutableIndexSet" movedSections;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} oldTableViewVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} newTableViewVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} tableViewVisibleBoundsUnion;
    d tableViewVisibleBoundsOffset;
    q oldSectionCount;
    q newSectionCount;
    ^q oldSectionMap;
    ^q newSectionMap;
    q oldGlobalRowCount;
    q newGlobalRowCount;
    ^q oldGlobalRowMap;
    ^q newGlobalRowMap;
    ^@ animatedCells;
    ^@ animatedHeaders;
    ^@ animatedFooters;
    q globalReorderingRow;
    id _context;
    @"NSMutableArray" viewAnimations;
    @"NSMutableArray" deletedSections;
    @"NSMutableArray" insertedSections;
    @"NSMutableArray" gaps;
}

 - (void) dealloc;
 - (id) initWithTableView:(id)aupdateItems:(id)boldRowData:(id)cnewRowData:(id)doldRowRange:({_NSRange=QQ})enewRowRange:({_NSRange=QQ})fcontext:(id)g;
 - (void) _setupAnimations;
 - (void) _setupInsertAnimationForHeaderInSection:(q)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _setupInsertAnimationForFooterInSection:(q)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _addBottomShadowViewViewForViewAnimation:(id)a;
 - (void) _setupDeleteAnimationForHeaderInSection:(q)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _setupDeleteAnimationForFooterInSection:(q)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (BOOL) _isReloadSectionUpdate;
 - (id) _imageViewForView:(id)a;
 - (void) _validateAnimatedCells;
 - (void) _computeVisibleBounds;
 - (void) _faultInRealHeightsOfNeededCells;
 - (void) _computeSectionUpdates;
 - (void) _computeRowUpdates;
 - (void) _setupAnimationStructures;
 - (void) _computeGaps;
 - (void) _computeAutomaticAnimationTypes;
 - (void) _setupAnimationsForExistingVisibleCells;
 - (void) _setupAnimationForReorderingRow;
 - (void) _setupAnimationsForNewlyInsertedCells;
 - (void) _setupAnimationsForInsertedHeadersAndFooters;
 - (void) _setupAnimationsForDeletedCells;
 - (void) _setupAnimationsForDeletedHeadersAndFooters;
 - (void) _setupAnimationsForExistingOffscreenCells;
 - (void) _setupAnimationsForExistingHeadersAndFooters;
 - (void) _setupAnimationForTableHeader;
 - (void) _setupAnimationForTableFooter;


@end
