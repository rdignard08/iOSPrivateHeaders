
@interface UICollectionViewUpdate : NSObject {

    @"UICollectionView" _collectionView;
    @"NSArray" _updateItems;
    @"UICollectionViewData" _oldModel;
    @"UICollectionViewData" _newModel;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _oldVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _newVisibleBounds;
    @"NSMutableIndexSet" _movedItems;
    @"NSMutableIndexSet" _movedSections;
    @"NSMutableIndexSet" _deletedSections;
    @"NSMutableIndexSet" _insertedSections;
    ^q _oldSectionMap;
    ^q _newSectionMap;
    ^q _oldGlobalItemMap;
    ^q _newGlobalItemMap;
    @"NSMutableArray" _deletedSupplementaryIndexesSectionArray;
    @"NSMutableArray" _insertedSupplementaryIndexesSectionArray;
    @"NSMutableDictionary" _deletedSupplementaryTopLevelIndexesDict;
    @"NSMutableDictionary" _insertedSupplementaryTopLevelIndexesDict;
    ^@ _animatedItems;
    ^@ _animatedHeaders;
    ^@ _animatedFooters;
    @"NSMutableArray" _viewAnimations;
    @"NSMutableArray" _gaps;
}

 - (void) dealloc;
 - (void) _computeSectionUpdates;
 - (void) _computeGaps;
 - (void) _computeItemUpdates;
 - (id) initWithCollectionView:(id)aupdateItems:(id)boldModel:(id)cnewModel:(id)doldVisibleBounds:({CGRect={CGPoint=dd}{CGSize=dd}})enewVisibleBounds:({CGRect={CGPoint=dd}{CGSize=dd}})f;
 - (void) _computeSupplementaryUpdates;
 - (id) newIndexPathForSupplementaryElementOfKind:(id)aoldIndexPath:(id)b;
 - (id) oldIndexPathForSupplementaryElementOfKind:(id)anewIndexPath:(id)b;


@end
