
@interface UICollectionViewData : NSObject {

    UICollectionView _collectionView;
    UICollectionViewLayout _layout;
    NSMapTable _screenPageMap;
    NSMutableIndexSet _globalIndexesOfItemsAwaitingValidation;
    ^@ _globalItems;
    NSMutableDictionary _supplementaryLayoutAttributes;
    NSMutableDictionary _decorationLayoutAttributes;
    NSMutableDictionary _invalidatedSupplementaryIndexPaths;
    NSMutableDictionary _invalidatedDecorationIndexPaths;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _validLayoutRect;
    long long _numItems;
    long long _numSections;
    ^q _sectionItemCounts;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    {CGSize="width"d"height"d} _contentSize;
    NSMutableArray _clonedCellAttributes;
    NSMutableArray _clonedSupplementaryAttributes;
    NSMutableArray _clonedDecorationAttributes;
    {?="contentSizeIsValid"b1"itemCountsAreValid"b1"layoutIsPrepared"b1"layoutLocked"b1} _collectionViewDataFlags;
}
@property (nonatomic, assign, readonly) NSNumber* layoutIsPrepared;
@property (nonatomic, assign, readwrite, getter=isLayoutLocked) NSNumber* layoutLocked;
@property (nonatomic, assign, readonly) NSArray* clonedCellAttributes;
@property (nonatomic, assign, readonly) NSArray* clonedSupplementaryAttributes;
@property (nonatomic, assign, readonly) NSArray* clonedDecorationAttributes;
 + (void) initialize;

 - (void) dealloc;
 - (long long) numberOfItemsInSection:(long long)a;
 - (long long) numberOfSections;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (void) invalidateItemsAtIndexPaths:(id)a;
 - (long long) numberOfItemsBeforeSection:(long long)a;
 - (long long) globalIndexForItemAtIndexPath:(id)a;
 - (id) knownSupplementaryElementKinds;
 - (id) layoutAttributesForGlobalItemIndex:(long long)a;
 - (id) layoutAttributesForElementsInSection:(long long)a;
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
 - (id) indexPathForItemAtGlobalIndex:(long long)a;
 - (id) existingSupplementaryLayoutAttributesInSection:(long long)a;
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
 - (void) _setupMutableIndexPath:(^@)aforGlobalItemIndex:(int)b;
 - (void) _setLayoutAttributes:(id)aatGlobalItemIndex:(int)b;
 - (void) validateSupplementaryViews;
 - (void) validateDecorationViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForItemAtIndexPath:(id)a;
 - (void) _loadEverything;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForGlobalItemIndex:(long long)a;
 - (BOOL) isLayoutLocked;
 - (long long) numberOfItems;


@end
