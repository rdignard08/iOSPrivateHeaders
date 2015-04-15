
@interface _UIAlertControllerCollectionViewFlowLayout : UICollectionViewFlowLayout {

    d _alignedDescriptiveLabelTextWidth;
    BOOL _hideSeparators;
    @"UIAlertControllerVisualStyle" _visualStyle;
    BOOL _shouldRoundFirstCell;
    @"NSArray" _actionDelimiterIndices;
}
 + (Class) layoutAttributesClass;

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHideSeparators:(BOOL)a;
 - (id) visualStyle;
 - (void) setVisualStyle:(id)a;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (void) setAlignedDescriptiveLabelTextWidth:(d)a;
 - (d) alignedDescriptiveLabelTextWidth;
 - (BOOL) _collectionViewIsLayingOutHorizontallyWithCellHeight:(d)a;
 - (BOOL) shouldRoundFirstCell;
 - (id) _topDecorationViewLayoutAttributesAtIndexPath:(id)a;
 - (BOOL) _indexPathIsSectionDelimiter:(id)a;
 - (d) _decorationDimensionAtIndexPath:(id)a;
 - (d) _delimiterShiftForCellAtIndexPath:(id)a;
 - (id) actionDelimiterIndices;
 - (d) _delimiterShiftForDecorationViewAtIndexPath:(id)a;
 - (BOOL) hideSeparators;
 - (void) setShouldRoundFirstCell:(BOOL)a;
 - (void) setActionDelimiterIndices:(id)a;
 - (id) init;


@end
