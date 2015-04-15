
@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout {

    {CGSize="width"d"height"d} _contentSize;
    BOOL _expanded;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _supportsNumberKeySelection;
    BOOL _hasSecondaryCandidates;
    BOOL _needsLayout;
    i _candidatesVisualStyle;
    @"NSArray" _candidateGroups;
    Q _columnsCount;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    d _headerViewHeight;
    @"NSSet" _emphasizedCandidates;
    @"NSMutableArray" _cellAttributes;
    @"NSMutableDictionary" _supplementaryAttributes;
}
 + (Class) layoutAttributesClass;
 + (void) deemphasizeLastItemIfNeeded:(id)a;
 + (id) layout;

 - (void) dealloc;
 - (Q) numberOfItemsInSection:(q)a;
 - (Q) numberOfSections;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (BOOL) needsLayout;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - ({CGSize=dd}) collectionViewContentSize;
 - (void) setCandidatesVisualStyle:(i)a;
 - (BOOL) hasSecondaryCandidates;
 - (i) candidatesVisualStyle;
 - (void) setEmphasizedCandidates:(id)a;
 - (id) candidateGroups;
 - (id) layoutAttributesForCandidateIndexPath:(id)a;
 - (BOOL) supportsNumberKeySelection;
 - (void) setSupportsNumberKeySelection:(BOOL)a;
 - (void) setExpanded:(BOOL)a;
 - (void) setColumnsCount:(Q)a;
 - (void) setCandidateGroups:(id)a;
 - (void) setHeaderViewHeight:(d)a;
 - (void) setNeedsPaddingForIndexScrubber:(BOOL)a;
 - (void) setHasSecondaryCandidates:(BOOL)a;
 - (void) invalidateLayout;
 - (d) groupBarWidth;
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
 - (Q) columnsCount;
 - (d) headerViewHeight;
 - (void) finishLayoutForRowWithAttributes:(id)aminimumCellWidth:(d)bremainingWidth:(d)crowOrigin:({CGPoint=dd})disFirstRow:(BOOL)eisLastRow:(BOOL)fzIndex:(q)g;
 - (Q) numberOfCandidateSections;
 - (void) setCellAttributes:(id)a;
 - (void) setSupplementaryAttributes:(id)a;
 - (id) init;
 - (void) setNeedsLayout:(BOOL)a;


@end
