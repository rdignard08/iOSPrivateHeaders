
@interface UIUpdateItem : NSObject {

    i _action;
    @"NSIndexPath" _indexPath;
    q _animation;
    d _offset;
    @"UITableViewUpdateGap" _gap;
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
 - (i) action;
 - (q) inverseCompareIndexPaths:(id)a;
 - (q) compareIndexPaths:(id)a;
 - (BOOL) isSectionOperation;
 - (id) initWithAction:(i)aforIndexPath:(id)banimation:(q)c;
 - (BOOL) headerFooterOnly;
 - (void) setHeaderFooterOnly:(BOOL)a;
 - (void) setGap:(id)a;
 - (id) _actionDescription;
 - (id) gap;
 - (BOOL) skipAnimation;
 - (void) setSkipAnimation:(BOOL)a;
 - (q) animation;
 - (void) setAnimation:(q)a;
 - (d) offset;
 - (void) setOffset:(d)a;


@end
