
@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {

    @"UILongPressGestureRecognizer" _editingGestureRecognizer;
    @"NSIndexPath" _indexPathForDraggedItem;
    d _evaluatedHorizontalItemOffset;
    @"NSArray" _preparedLayoutAttributes;
    @"NSArray" _preparedUpdateItems;
    @"_UIActivityGroupActivityCell" _draggingView;
    {CGSize="width"d"height"d} _evaluatedItemSize;
    {CGSize="width"d"height"d} _evaluatedContentSize;
    {UIOffset="horizontal"d"vertical"d} _draggingOffset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _evaluatedInset;
}

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - ({CGSize=dd}) collectionViewContentSize;
 - (void) prepareLayout;
 - (void) handleEditingGesture:(id)a;
 - (void) setEditingGestureRecognizer:(id)a;
 - (id) editingGestureRecognizer;
 - (id) indexPathForItemRecognizedByGesture:(id)a;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) draggingView;
 - (id) finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a;
 - (id) initialLayoutAttributesForAppearingItemAtIndexPath:(id)a;
 - (void) prepareForCollectionViewUpdates:(id)a;
 - (void) finalizeCollectionViewUpdates;
 - (void) setDraggingView:(id)a;
 - (void) setIndexPathForDraggedItem:(id)a;
 - (void) setPreparedLayoutAttributes:(id)a;
 - (void) setPreparedUpdateItems:(id)a;
 - (id) _indexPathsForItemsInSection:(q)a;
 - ({CGSize=dd}) _evaluatePreferredItemSizeForItemsAtIndexPaths:(id)a;
 - ({UIEdgeInsets=dddd}) _evaluateInsetForSectionAtIndex:(q)a;
 - (d) _evaluateHorizontalItemOffsetForItemSize:({CGSize=dd})ainset:({UIEdgeInsets=dddd})b;
 - (void) setEvaluatedHorizontalItemOffset:(d)a;
 - (void) setEvaluatedInset:({UIEdgeInsets=dddd})a;
 - (void) setEvaluatedItemSize:({CGSize=dd})a;
 - (void) setEvaluatedContentSize:({CGSize=dd})a;
 - (id) _layoutAttributesForItemAtIndexPath:(id)a;
 - ({CGSize=dd}) evaluatedContentSize;
 - (id) preparedLayoutAttributes;
 - (id) adjustLayoutAttributesForDraggingIfNeeded:(id)a;
 - (id) preparedUpdateItems;
 - ({CGSize=dd}) evaluatedItemSize;
 - (d) evaluatedHorizontalItemOffset;
 - ({UIEdgeInsets=dddd}) evaluatedInset;
 - (id) indexPathForDraggedItem;
 - (void) setDraggingOffset:({UIOffset=dd})a;
 - (void) beginDraggingForGesture:(id)a;
 - (void) updateDraggingViewForGesture:(id)a;
 - (BOOL) shouldCancelDraggingForGesture:(id)a;
 - (void) cancelDraggingForGesture:(id)a;
 - (id) draggingViewForItemAtIndexPath:(id)a;
 - (void) invalidateGroupViewLayoutAnimated:(BOOL)a;
 - ({UIOffset=dd}) draggingOffset;


@end
