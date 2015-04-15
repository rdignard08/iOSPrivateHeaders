
@interface UICollectionViewLayoutInvalidationContext : NSObject {

    @"NSMutableSet" _invalidatedItemIndexPaths;
    @"NSMutableDictionary" _invalidatedSupplementaryIndexPaths;
    @"NSMutableDictionary" _invalidatedDecorationIndexPaths;
    @"NSArray" _updateItems;
    {CGPoint="x"d"y"d} _contentOffsetAdjustment;
    {CGSize="width"d"height"d} _contentSizeAdjustment;
    {?="invalidateDataSource"b1"invalidateEverything"b1} _invalidationContextFlags;
}
@property (nonatomic, assign, readwrite) NSNumber* invalidateEverything;
@property (nonatomic, assign, readwrite) NSNumber* invalidateDataSourceCounts;
@property (nonatomic, assign, readonly) NSArray* invalidatedItemIndexPaths;
@property (nonatomic, assign, readonly) NSDictionary* invalidatedSupplementaryIndexPaths;
@property (nonatomic, assign, readonly) NSDictionary* invalidatedDecorationIndexPaths;
@property (nonatomic, assign, readwrite) NSNumber* contentOffsetAdjustment;
@property (nonatomic, assign, readwrite) NSNumber* contentSizeAdjustment;
@property (nonatomic, assign, readwrite, _updateItems, _setUpdateItems:) NSArray* updateItems;

 - (void) dealloc;
 - (BOOL) invalidateEverything;
 - (void) _setInvalidateEverything:(BOOL)a;
 - (BOOL) invalidateDataSourceCounts;
 - (void) _setInvalidateDataSourceCounts:(BOOL)a;
 - (id) invalidatedItemIndexPaths;
 - (void) invalidateItemsAtIndexPaths:(id)a;
 - (id) _updateItems;
 - (id) _invalidatedSupplementaryViews;
 - (void) _setUpdateItems:(id)a;
 - (id) invalidatedSupplementaryIndexPaths;
 - (id) invalidatedDecorationIndexPaths;
 - ({CGPoint=dd}) contentOffsetAdjustment;
 - ({CGSize=dd}) contentSizeAdjustment;
 - (void) _invalidateSupplementaryElementsOfKind:(id)aatIndexPaths:(id)b;
 - (void) _setInvalidatedSupplementaryViews:(id)a;
 - (void) invalidateSupplementaryElementsOfKind:(id)aatIndexPaths:(id)b;
 - (void) invalidateDecorationElementsOfKind:(id)aatIndexPaths:(id)b;
 - (void) setContentOffsetAdjustment:({CGPoint=dd})a;
 - (void) setContentSizeAdjustment:({CGSize=dd})a;


@end
