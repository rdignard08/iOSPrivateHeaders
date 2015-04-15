
@interface UICollectionViewUpdateItem : NSObject {

    NSIndexPath* _initialIndexPath;
    NSIndexPath* _finalIndexPath;
    long long _updateAction;
    id _gap;
}
@property (nonatomic, assign, readonly) NSIndexPath* indexPathBeforeUpdate;
@property (nonatomic, assign, readonly) NSIndexPath* indexPathAfterUpdate;
@property (nonatomic, assign, readonly) NSNumber* updateAction;
@property (nonatomic, assign, readonly, getter=_action) NSNumber* action;
@property (nonatomic, assign, readonly, getter=_indexPath) NSIndexPath* indexPath;
@property (nonatomic, assign, readwrite, getter=_gap, setter=_setGap:) NSNumber* gap;
@property (nonatomic, assign, readonly, getter=_isSectionOperation) NSNumber* isSectionOperation;
@property (nonatomic, retain, readwrite, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath* newIndexPath;

 - (id) description;
 - (void) dealloc;
 - (long long) inverseCompareIndexPaths:(id)a ;
 - (long long) compareIndexPaths:(id)a ;
 - (id) _indexPath;
 - (id) initWithOldIndexPath:(id)a newIndexPath:(id)b ;
 - (long long) _action;
 - (id) _gap;
 - (id) _newIndexPath;
 - (BOOL) _isSectionOperation;
 - (void) _setGap:(id)a ;
 - (id) initWithAction:(long long)a forIndexPath:(id)b ;
 - (id) initWithInitialIndexPath:(id)a finalIndexPath:(id)b updateAction:(long long)c ;
 - (void) _setNewIndexPath:(id)a ;
 - (long long) updateAction;
 - (id) indexPathBeforeUpdate;
 - (id) indexPathAfterUpdate;


@end
