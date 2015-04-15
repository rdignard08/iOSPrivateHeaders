
@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout {

    {CGSize="width"d"height"d} _contentSize;
    BOOL _expanded;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _supportsNumberKeySelection;
    BOOL _hasSecondaryCandidates;
    BOOL _needsLayout;
    int _candidatesVisualStyle;
    NSArray _candidateGroups;
    unsigned long long _columnsCount;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    double _headerViewHeight;
    NSSet _emphasizedCandidates;
    NSMutableArray _cellAttributes;
    NSMutableDictionary _supplementaryAttributes;
}
 + (Class) layoutAttributesClass;
 + (void) deemphasizeLastItemIfNeeded:(id)a;
 + (id) layout;

 - (void) dealloc;
 - (unsigned long long) numberOfItemsInSection:(long long)a;
 - (unsigned long long) numberOfSections;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (BOOL) needsLayout;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - ({CGSize=dd}) collectionViewContentSize;
 - (void) setCandidatesVisualStyle:(int)a;
 - (BOOL) hasSecondaryCandidates;
 - (int) candidatesVisualStyle;
 - (void) setEmphasizedCandidates:(id)a;
 - (id) candidateGroups;
 - (id) layoutAttributesForCandidateIndexPath:(id)a;
 - (BOOL) supportsNumberKeySelection;
 - (void) setSupportsNumberKeySelection:(BOOL)a;
 - (void) setExpanded:(BOOL)a;
 - (void) setColumnsCount:(unsigned long long)a;
 - (void) setCandidateGroups:(id)a;
 - (void) setHeaderViewHeight:(double)a;
 - (void) setNeedsPaddingForIndexScrubber:(BOOL)a;
 - (void) setHasSecondaryCandidates:(BOOL)a;
 - (void) invalidateLayout;
 - (double) groupBarWidth;
 - (BOOL) expanded;
 - (id) emphasizedCandidates;
 - (id) nextCandidateIndexPathFromIndexPath:(id)a;
 - (id) previousCandidateIndexPathFromIndexPath:(id)a;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (void) prepareLayout;
 - ({CGSize=dd}) rowSize;
 - (BOOL) needsPaddingForIndexScrubber;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) cellAttributes;
 - (id) supplementaryAttributes;
 - (void) getGroupBarWidth:(^d)aheaderAttributes:(^@)b;
 - (id) attributesWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (unsigned long long) columnsCount;
 - (double) headerViewHeight;
 - (void) finishLayoutForRowWithAttributes:(id)aminimumCellWidth:(double)bremainingWidth:(double)crowOrigin:({CGPoint=dd})disFirstRow:(BOOL)eisLastRow:(BOOL)fzIndex:(long long)g;
 - (unsigned long long) numberOfCandidateSections;
 - (void) setCellAttributes:(id)a;
 - (void) setSupplementaryAttributes:(id)a;
 - (id) init;
 - (void) setNeedsLayout:(BOOL)a;


@end
