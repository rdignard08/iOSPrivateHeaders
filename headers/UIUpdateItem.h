
@interface UIUpdateItem : NSObject {

    int _action;
    NSIndexPath _indexPath;
    long long _animation;
    double _offset;
    UITableViewUpdateGap _gap;
    BOOL _headerFooterOnly;
    BOOL _skipAnimation;
}
@property (nonatomic, assign, readonly) NSNumber* action;
@property (nonatomic, assign, readonly) NSIndexPath* indexPath;
@property (nonatomic, assign, readwrite) NSNumber* animation;
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readwrite) NSNumber* headerFooterOnly;
@property (nonatomic, assign, readwrite) NSNumber* skipAnimation;
@property (nonatomic, assign, readwrite) UITableViewUpdateGap* gap;

 - (void) dealloc;
 - (id) indexPath;
 - (int) action;
 - (long long) inverseCompareIndexPaths:(id)a;
 - (long long) compareIndexPaths:(id)a;
 - (BOOL) isSectionOperation;
 - (id) initWithAction:(int)aforIndexPath:(id)banimation:(long long)c;
 - (BOOL) headerFooterOnly;
 - (void) setHeaderFooterOnly:(BOOL)a;
 - (void) setGap:(id)a;
 - (id) _actionDescription;
 - (id) gap;
 - (BOOL) skipAnimation;
 - (void) setSkipAnimation:(BOOL)a;
 - (long long) animation;
 - (void) setAnimation:(long long)a;
 - (double) offset;
 - (void) setOffset:(double)a;


@end
