
@interface _UIAlertControllerCollectionViewFlowLayout : UICollectionViewFlowLayout {

    double _alignedDescriptiveLabelTextWidth;
    BOOL _hideSeparators;
    UIAlertControllerVisualStyle* _visualStyle;
    BOOL _shouldRoundFirstCell;
    NSArray* _actionDelimiterIndices;
}
 + (Class) layoutAttributesClass;

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHideSeparators:(BOOL)a;
 - (id) visualStyle;
 - (void) setVisualStyle:(id)a;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (void) setAlignedDescriptiveLabelTextWidth:(double)a;
 - (double) alignedDescriptiveLabelTextWidth;
 - (BOOL) _collectionViewIsLayingOutHorizontallyWithCellHeight:(double)a;
 - (BOOL) shouldRoundFirstCell;
 - (id) _topDecorationViewLayoutAttributesAtIndexPath:(id)a;
 - (BOOL) _indexPathIsSectionDelimiter:(id)a;
 - (double) _decorationDimensionAtIndexPath:(id)a;
 - (double) _delimiterShiftForCellAtIndexPath:(id)a;
 - (id) actionDelimiterIndices;
 - (double) _delimiterShiftForDecorationViewAtIndexPath:(id)a;
 - (BOOL) hideSeparators;
 - (void) setShouldRoundFirstCell:(BOOL)a;
 - (void) setActionDelimiterIndices:(id)a;
 - (id) init;


@end
