
@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

    NSMapTable* _invalidationContextTable;
}

 - (void) dealloc;
 - (void) _setInvalidationContextTable:(id)a;
 - (id) _invalidationContextTable;


@end
