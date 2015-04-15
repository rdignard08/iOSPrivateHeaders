
@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {

    BOOL _dummy;
    BOOL _groupHeader;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _groupShowsAlternativeText;
    BOOL _secondaryCandidateAppearance;
    BOOL _emphasizedAppearance;
    int _candidatesVisualStyle;
    NSIndexPath* _candidateIndexPath;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    unsigned long long _candidateNumber;
    unsigned long long _rowIndex;
    unsigned long long _edges;
    {CGSize="width"d"height"d} _rowSize;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) setEdges:(unsigned long long)a ;
 - (unsigned long long) representedElementCategory;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a ;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) setCandidatesVisualStyle:(int)a ;
 - (int) candidatesVisualStyle;
 - (unsigned long long) rowIndex;
 - (BOOL) dummy;
 - (BOOL) groupHeader;
 - (id) candidateIndexPath;
 - (void) setNeedsPaddingForIndexScrubber:(BOOL)a ;
 - (unsigned long long) candidateNumber;
 - (void) setDummy:(BOOL)a ;
 - ({CGSize=dd}) rowSize;
 - (unsigned long long) edges;
 - (BOOL) needsPaddingForIndexScrubber;
 - (BOOL) groupShowsAlternativeText;
 - (void) setCandidateNumber:(unsigned long long)a ;
 - (BOOL) secondaryCandidateAppearance;
 - (void) setSecondaryCandidateAppearance:(BOOL)a ;
 - (BOOL) emphasizedAppearance;
 - (void) setEmphasizedAppearance:(BOOL)a ;
 - (void) setCandidateIndexPath:(id)a ;
 - (void) setGroupHeader:(BOOL)a ;
 - (void) setRowIndex:(unsigned long long)a ;
 - (void) setRowSize:({CGSize=dd})a ;
 - (void) setGroupShowsAlternativeText:(BOOL)a ;
 - (id) init;


@end
