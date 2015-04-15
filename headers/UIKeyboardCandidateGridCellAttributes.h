
@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {

    BOOL _dummy;
    BOOL _groupHeader;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _groupShowsAlternativeText;
    BOOL _secondaryCandidateAppearance;
    BOOL _emphasizedAppearance;
    i _candidatesVisualStyle;
    @"NSIndexPath" _candidateIndexPath;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    Q _candidateNumber;
    Q _rowIndex;
    Q _edges;
    {CGSize="width"d"height"d} _rowSize;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setEdges:(Q)a;
 - (Q) representedElementCategory;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) setCandidatesVisualStyle:(i)a;
 - (i) candidatesVisualStyle;
 - (Q) rowIndex;
 - (BOOL) dummy;
 - (BOOL) groupHeader;
 - (id) candidateIndexPath;
 - (void) setNeedsPaddingForIndexScrubber:(BOOL)a;
 - (Q) candidateNumber;
 - (void) setDummy:(BOOL)a;
 - ({CGSize=dd}) rowSize;
 - (Q) edges;
 - (BOOL) needsPaddingForIndexScrubber;
 - (BOOL) groupShowsAlternativeText;
 - (void) setCandidateNumber:(Q)a;
 - (BOOL) secondaryCandidateAppearance;
 - (void) setSecondaryCandidateAppearance:(BOOL)a;
 - (BOOL) emphasizedAppearance;
 - (void) setEmphasizedAppearance:(BOOL)a;
 - (void) setCandidateIndexPath:(id)a;
 - (void) setGroupHeader:(BOOL)a;
 - (void) setRowIndex:(Q)a;
 - (void) setRowSize:({CGSize=dd})a;
 - (void) setGroupShowsAlternativeText:(BOOL)a;
 - (id) init;


@end
