
@interface UIRowMoveUpdateItem : UIUpdateItem {

    @"NSIndexPath" _newIndexPath;
}

 - (void) dealloc;
 - (id) newIndexPath;
 - (id) initWithOldIndexPath:(id)anewIndexPath:(id)b;


@end
