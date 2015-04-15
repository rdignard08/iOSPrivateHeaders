
@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

    {?="invalidateDelegateMetrics"b1"invalidateAttributes"b1} _flowLayoutInvalidationFlags;
}

 - (void) setInvalidateFlowLayoutAttributes:(BOOL)a;
 - (BOOL) invalidateFlowLayoutAttributes;
 - (void) setInvalidateFlowLayoutDelegateMetrics:(BOOL)a;
 - (BOOL) invalidateFlowLayoutDelegateMetrics;
 - (id) init;


@end
