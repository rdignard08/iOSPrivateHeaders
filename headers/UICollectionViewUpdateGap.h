
@interface UICollectionViewUpdateGap : NSObject {

    UICollectionViewUpdateItem* _firstUpdateItem;
    UICollectionViewUpdateItem* _lastUpdateItem;
    NSMutableArray* _deleteItems;
    NSMutableArray* _insertItems;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _beginningRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endingRect;
}
@property (nonatomic, retain, readwrite) UICollectionViewUpdateItem* firstUpdateItem;
@property (nonatomic, retain, readwrite) UICollectionViewUpdateItem* lastUpdateItem;
@property (nonatomic, assign, readonly) NSArray* updateItems;
@property (nonatomic, assign, readonly) NSArray* deleteItems;
@property (nonatomic, assign, readonly) NSArray* insertItems;
@property (nonatomic, assign, readonly) NSNumber* isDeleteBasedGap;
@property (nonatomic, assign, readonly) NSNumber* hasInserts;
@property (nonatomic, assign, readonly) NSNumber* isSectionBasedGap;
@property (nonatomic, assign, readwrite) NSNumber* beginningRect;
@property (nonatomic, assign, readwrite) NSNumber* endingRect;
 + (id) gapWithUpdateItem:(id)a;

 - (id) description;
 - (void) dealloc;
 - (void) setFirstUpdateItem:(id)a;
 - (void) setLastUpdateItem:(id)a;
 - (void) addUpdateItem:(id)a;
 - (BOOL) isDeleteBasedGap;
 - (BOOL) hasInserts;
 - (id) updateItems;
 - (BOOL) isSectionBasedGap;
 - (id) firstUpdateItem;
 - (id) lastUpdateItem;
 - (id) deleteItems;
 - (id) insertItems;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginningRect;
 - (void) setBeginningRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endingRect;
 - (void) setEndingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) init;


@end
