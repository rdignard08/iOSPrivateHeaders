
@interface _UITableViewUpdateSupport : NSObject {

    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView tableView;
    {_NSRange="location"Q"length"Q} visibleRows;
    NSArray updateItems;
    UITableViewRowData oldRowData;
    UITableViewRowData newRowData;
    {_NSRange="location"Q"length"Q} oldRowRange;
    {_NSRange="location"Q"length"Q} newRowRange;
    NSMutableIndexSet rows;
    NSMutableIndexSet movedRows;
    NSMutableIndexSet movedSections;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} oldTableViewVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} newTableViewVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    ^q oldSectionMap;
    ^q newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    ^q oldGlobalRowMap;
    ^q newGlobalRowMap;
    ^@ animatedCells;
    ^@ animatedHeaders;
    ^@ animatedFooters;
    long long globalReorderingRow;
    id _context;
    NSMutableArray viewAnimations;
    NSMutableArray deletedSections;
    NSMutableArray insertedSections;
    NSMutableArray gaps;
}

 - (void) dealloc;
 - (id) initWithTableView:(id)aupdateItems:(id)boldRowData:(id)cnewRowData:(id)doldRowRange:({_NSRange=QQ})enewRowRange:({_NSRange=QQ})fcontext:(id)g;
 - (void) _setupAnimations;
 - (void) _setupInsertAnimationForHeaderInSection:(long long)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _setupInsertAnimationForFooterInSection:(long long)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _addBottomShadowViewViewForViewAnimation:(id)a;
 - (void) _setupDeleteAnimationForHeaderInSection:(long long)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
 - (void) _setupDeleteAnimationForFooterInSection:(long long)awithTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})bforUpdateItem:(id)c;
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
