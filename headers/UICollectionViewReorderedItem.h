
@interface UICollectionViewReorderedItem : NSObject {

    @"UICollectionViewCell" _cell;
    @"NSIndexPath" _originalIndexPath;
    @"NSIndexPath" _targetIndexPath;
}
@property (nonatomic, assign, readonly) UICollectionViewCell* cell;
@property (nonatomic, retain, readwrite) NSIndexPath* originalIndexPath;
@property (nonatomic, retain, readwrite) NSIndexPath* targetIndexPath;

 - (void) dealloc;
 - (id) cell;
 - (id) initWithCell:(id)aindexPath:(id)b;
 - (id) originalIndexPath;
 - (void) setOriginalIndexPath:(id)a;
 - (id) targetIndexPath;
 - (void) setTargetIndexPath:(id)a;


@end
