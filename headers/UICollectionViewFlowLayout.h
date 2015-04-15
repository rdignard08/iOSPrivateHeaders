
@interface UICollectionViewFlowLayout : UICollectionViewLayout {

    {?="delegateSizeForItem"b1"delegateReferenceSizeForHeader"b1"delegateReferenceSizeForFooter"b1"delegateInsetForSection"b1"delegateInteritemSpacingForSection"b1"delegateLineSpacingForSection"b1"delegateAlignmentOptions"b1"layoutDataIsValid"b1"delegateInfoIsValid"b1"roundsToScreenScale"b1} _gridLayoutFlags;
    d _interitemSpacing;
    d _lineSpacing;
    {CGSize="width"d"height"d} _itemSize;
    {CGSize="width"d"height"d} _estimatedItemSize;
    {CGSize="width"d"height"d} _headerReferenceSize;
    {CGSize="width"d"height"d} _footerReferenceSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _sectionInset;
    @"_UIFlowLayoutInfo" _data;
    {CGSize="width"d"height"d} _currentLayoutSize;
    @"NSMutableDictionary" _insertedItemsAttributesDict;
    @"NSMutableDictionary" _insertedSectionHeadersAttributesDict;
    @"NSMutableDictionary" _insertedSectionFootersAttributesDict;
    @"NSMutableDictionary" _deletedItemsAttributesDict;
    @"NSMutableDictionary" _deletedSectionHeadersAttributesDict;
    @"NSMutableDictionary" _deletedSectionFootersAttributesDict;
    q _scrollDirection;
    @"NSDictionary" _rowAlignmentsOptionsDictionary;
    {CGPoint="x"d"y"d} _contentOffsetAdjustment;
    {CGSize="width"d"height"d} _contentSizeAdjustment;
    @"NSMutableArray" _indexPathsToValidate;
}
 + (Class) invalidationContextClass;

 - (void) dealloc;
 - (void) setScrollDirection:(q)a;
 - (void) setItemSize:({CGSize=dd})a;
 - (void) setMinimumInteritemSpacing:(d)a;
 - (void) setMinimumLineSpacing:(d)a;
 - (d) minimumLineSpacing;
 - (d) minimumInteritemSpacing;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (id) indexPathForItemAtPoint:({CGPoint=dd})a;
 - ({CGSize=dd}) collectionViewContentSize;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (void) prepareLayout;
 - (void) invalidateLayoutWithContext:(id)a;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (q) scrollDirection;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSectionInset:({UIEdgeInsets=dddd})a;
 - (void) finalizeCollectionViewUpdates;
 - (BOOL) _estimatesSizes;
 - (void) _fetchItemsInfoForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForHeaderInSection:(q)ausingData:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForFooterInSection:(q)ausingData:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForItem:(q)ainSection:(q)busingData:(id)c;
 - (id) layoutAttributesForHeaderInSection:(q)ausingData:(id)b;
 - (id) layoutAttributesForFooterInSection:(q)ausingData:(id)b;
 - (q) _sectionArrayIndexForIndexPath:(id)a;
 - (id) layoutAttributesForItemAtIndexPath:(id)ausingData:(id)b;
 - ({CGSize=dd}) itemSize;
 - (id) _layoutAttributesForItemsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) indexesForSectionHeadersInRect:({CGRect={CGPoint=dd}{CGSize=dd}})ausingData:(id)b;
 - (id) indexesForSectionFootersInRect:({CGRect={CGPoint=dd}{CGSize=dd}})ausingData:(id)b;
 - (void) _updateDelegateFlags;
 - (void) _getSizingInfos;
 - (void) _updateItemsLayoutForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setEstimatedItemSize:({CGSize=dd})a;
 - ({CGSize=dd}) _estimatedItemSize;
 - (id) indexesForSectionHeadersInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) indexesForSectionFootersInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForHeaderInSection:(q)a;
 - (id) layoutAttributesForFooterInSection:(q)a;
 - (void) setHeaderReferenceSize:({CGSize=dd})a;
 - (void) setFooterReferenceSize:({CGSize=dd})a;
 - (void) _setNeedsLayoutComputationWithoutInvalidation;
 - (id) initialLayoutAttributesForInsertedItemAtIndexPath:(id)a;
 - (id) initialLayoutAttributesForHeaderInInsertedSection:(q)a;
 - (id) initialLayoutAttributesForFooterInInsertedSection:(q)a;
 - (id) finalLayoutAttributesForDeletedItemAtIndexPath:(id)a;
 - (id) finalLayoutAttributesForHeaderInDeletedSection:(q)a;
 - (id) finalLayoutAttributesForFooterInDeletedSection:(q)a;
 - ({CGSize=dd}) synchronizeLayout;
 - (void) _invalidateButKeepDelegateInfo;
 - (void) _invalidateButKeepAllInfo;
 - (void) _setRowAlignmentsOptions:(id)a;
 - (id) _rowAlignmentOptions;
 - (void) _updateContentSizeScrollingDimensionWithDelta:(d)a;
 - (void) _setRoundsToScreenScale:(BOOL)a;
 - (BOOL) _roundsToScreenScale;
 - ({CGSize=dd}) headerReferenceSize;
 - ({CGSize=dd}) footerReferenceSize;
 - ({UIEdgeInsets=dddd}) sectionInset;
 - ({CGSize=dd}) estimatedItemSize;
 - (void) setEstimatedItemSize:({CGSize=dd})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
