
@interface UICollectionViewUpdate : NSObject {

    UICollectionView* _collectionView;
    NSArray* _updateItems;
    UICollectionViewData* _oldModel;
    UICollectionViewData* _newModel;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _oldVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _newVisibleBounds;
    NSMutableIndexSet* _movedItems;
    NSMutableIndexSet* _movedSections;
    NSMutableIndexSet* _deletedSections;
    NSMutableIndexSet* _insertedSections;
    ^q _oldSectionMap;
    ^q _newSectionMap;
    ^q _oldGlobalItemMap;
    ^q _newGlobalItemMap;
    NSMutableArray* _deletedSupplementaryIndexesSectionArray;
    NSMutableArray* _insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary* _deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary* _insertedSupplementaryTopLevelIndexesDict;
    ^@ _animatedItems;
    ^@ _animatedHeaders;
    ^@ _animatedFooters;
    NSMutableArray* _viewAnimations;
    NSMutableArray* _gaps;
}

 - (void) dealloc;
 - (void) _computeSectionUpdates;
 - (void) _computeGaps;
 - (void) _computeItemUpdates;
 - (id) initWithCollectionView:(id)a updateItems:(id)b oldModel:(id)c newModel:(id)d oldVisibleBounds:({CGRect={CGPoint=dd}{CGSize=dd}})e newVisibleBounds:({CGRect={CGPoint=dd}{CGSize=dd}})f ;
 - (void) _computeSupplementaryUpdates;
 - (id) newIndexPathForSupplementaryElementOfKind:(id)a oldIndexPath:(id)b ;
 - (id) oldIndexPathForSupplementaryElementOfKind:(id)a newIndexPath:(id)b ;


@end
