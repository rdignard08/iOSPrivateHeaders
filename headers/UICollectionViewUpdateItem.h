
@interface UICollectionViewUpdateItem : NSObject {

    @"NSIndexPath" _initialIndexPath;
    @"NSIndexPath" _finalIndexPath;
    long long _updateAction;
    id _gap;
}
@property (nonatomic, assign, readonly) NSIndexPath* indexPathBeforeUpdate;
@property (nonatomic, assign, readonly) NSIndexPath* indexPathAfterUpdate;
@property (nonatomic, assign, readonly) NSNumber* updateAction;
@property (nonatomic, assign, readonly, _action) NSNumber* action;
@property (nonatomic, assign, readonly, _indexPath) NSIndexPath* indexPath;
@property (nonatomic, assign, readwrite, _gap, _setGap:) NSNumber* gap;
@property (nonatomic, assign, readonly, _isSectionOperation) NSNumber* isSectionOperation;
@property (nonatomic, retain, readwrite, _newIndexPath, _setNewIndexPath:) NSIndexPath* newIndexPath;

 - (id) description;
 - (void) dealloc;
 - (long long) inverseCompareIndexPaths:(id)a;
 - (long long) compareIndexPaths:(id)a;
 - (id) _indexPath;
 - (id) initWithOldIndexPath:(id)anewIndexPath:(id)b;
 - (long long) _action;
 - (id) _gap;
 - (id) _newIndexPath;
 - (BOOL) _isSectionOperation;
 - (void) _setGap:(id)a;
 - (id) initWithAction:(long long)aforIndexPath:(id)b;
 - (id) initWithInitialIndexPath:(id)afinalIndexPath:(id)bupdateAction:(long long)c;
 - (void) _setNewIndexPath:(id)a;
 - (long long) updateAction;
 - (id) indexPathBeforeUpdate;
 - (id) indexPathAfterUpdate;


@end
