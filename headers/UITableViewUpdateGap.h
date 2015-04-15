
@interface UITableViewUpdateGap : NSObject {

    @"UIUpdateItem" _firstUpdateItem;
    @"UIUpdateItem" _lastUpdateItem;
    @"NSMutableArray" _deleteItems;
    @"NSMutableArray" _insertItems;
    {?="hasAutomaticAnimationItems"b1} _gapFlags;
}
@property (nonatomic, retain, readwrite) UIUpdateItem* firstUpdateItem;
@property (nonatomic, retain, readwrite) UIUpdateItem* lastUpdateItem;
@property (nonatomic, assign, readonly) NSArray* updateItems;
@property (nonatomic, assign, readonly) NSArray* deleteItems;
@property (nonatomic, assign, readonly) NSArray* insertItems;
@property (nonatomic, assign, readonly) NSNumber* isDeleteBasedGap;
@property (nonatomic, assign, readonly) NSNumber* hasInserts;
@property (nonatomic, assign, readonly) NSNumber* isSectionBasedGap;
@property (nonatomic, assign, readonly) NSNumber* hasAutomaticAnimationItems;
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
 - (BOOL) hasAutomaticAnimationItems;
 - (id) firstUpdateItem;
 - (id) lastUpdateItem;
 - (id) deleteItems;
 - (id) insertItems;
 - (id) init;


@end
