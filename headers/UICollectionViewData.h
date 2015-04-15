
@interface UICollectionViewData : NSObject {

    @"UICollectionView" _collectionView;
    @"UICollectionViewLayout" _layout;
    @"NSMapTable" _screenPageMap;
    @"NSMutableIndexSet" _globalIndexesOfItemsAwaitingValidation;
    ^@ _globalItems;
    @"NSMutableDictionary" _supplementaryLayoutAttributes;
    @"NSMutableDictionary" _decorationLayoutAttributes;
    @"NSMutableDictionary" _invalidatedSupplementaryIndexPaths;
    @"NSMutableDictionary" _invalidatedDecorationIndexPaths;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _validLayoutRect;
    q _numItems;
    q _numSections;
    ^q _sectionItemCounts;
    q _lastSectionTestedForNumberOfItemsBeforeSection;
    q _lastResultForNumberOfItemsBeforeSection;
    {CGSize="width"d"height"d} _contentSize;
    @"NSMutableArray" _clonedCellAttributes;
    @"NSMutableArray" _clonedSupplementaryAttributes;
    @"NSMutableArray" _clonedDecorationAttributes;
    {?="contentSizeIsValid"b1"itemCountsAreValid"b1"layoutIsPrepared"b1"layoutLocked"b1} _collectionViewDataFlags;
}
@property (nonatomic, assign, readonly) NSNumber* layoutIsPrepared;
@property (nonatomic, assign, readwrite, isLayoutLocked) NSNumber* layoutLocked;
@property (nonatomic, assign, readonly) NSArray* clonedCellAttributes;
@property (nonatomic, assign, readonly) NSArray* clonedSupplementaryAttributes;
@property (nonatomic, assign, readonly) NSArray* clonedDecorationAttributes;
 + (void) initialize;

 - (void) dealloc;
 - (q) numberOfItemsInSection:(q)a;
 - (q) numberOfSections;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (void) invalidateItemsAtIndexPaths:(id)a;
 - (q) numberOfItemsBeforeSection:(q)a;
 - (q) globalIndexForItemAtIndexPath:(id)a;
 - (id) knownSupplementaryElementKinds;
 - (id) layoutAttributesForGlobalItemIndex:(q)a;
 - (id) layoutAttributesForElementsInSection:(q)a;
 - (void) invalidate:(BOOL)a;
 - (BOOL) layoutIsPrepared;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) collectionViewContentRect;
 - (id) layoutAttributesForSupplementaryElementOfKind:(id)aatIndexPath:(id)b;
 - (id) clonedCellAttributes;
 - (id) clonedSupplementaryAttributes;
 - (id) clonedDecorationAttributes;
 - (void) validateLayoutInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) initWithCollectionView:(id)alayout:(id)b;
 - (void) _prepareToLoadData;
 - (void) setLayoutLocked:(BOOL)a;
 - (id) indexPathForItemAtGlobalIndex:(q)a;
 - (id) existingSupplementaryLayoutAttributesInSection:(q)a;
 - (id) existingSupplementaryLayoutAttributes;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForDecorationElementOfKind:(id)aatIndexPath:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForSupplementaryElementOfKind:(id)aatIndexPath:(id)b;
 - (id) knownDecorationElementKinds;
 - (void) invalidateSupplementaryIndexPaths:(id)a;
 - (void) invalidateDecorationIndexPaths:(id)a;
 - (void) shimMoveForItemAtIndexPath:(id)atoIndexPath:(id)b;
 - (void) _updateItemCounts;
 - (void) _validateItemCounts;
 - (void) _validateContentSize;
 - (id) _screenPageForPoint:({CGPoint=dd})a;
 - (void) _setupMutableIndexPath:(^@)aforGlobalItemIndex:(i)b;
 - (void) _setLayoutAttributes:(id)aatGlobalItemIndex:(i)b;
 - (void) validateSupplementaryViews;
 - (void) validateDecorationViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForItemAtIndexPath:(id)a;
 - (void) _loadEverything;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForGlobalItemIndex:(q)a;
 - (BOOL) isLayoutLocked;
 - (q) numberOfItems;


@end
