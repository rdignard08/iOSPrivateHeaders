
@interface UIRowMoveUpdateItem : UIUpdateItem {

    NSIndexPath* _newIndexPath;
}

 - (void) dealloc;
 - (id) newIndexPath;
 - (id) initWithOldIndexPath:(id)a newIndexPath:(id)b ;


@end
