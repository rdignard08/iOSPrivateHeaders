
@interface NSCache : NSObject {

    id _delegate;
    [5^v] _private;
    ^v _reserved;
}
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* totalCostLimit;
@property (atomic, assign, readwrite) NSNumber* countLimit;
@property (atomic, assign, readwrite) NSNumber* evictsObjectsWithDiscardedContent;

 - (void) dealloc;
 - (void) finalize;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) name;
 - (void) setDelegate:(id)a;
 - (id) allObjects;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a;
 - (BOOL) evictsObjectsWithDiscardedContent;
 - (void) setObject:(id)aforKey:(id)bcost:(unsigned long long)c;
 - (unsigned long long) totalCostLimit;
 - (BOOL) evictsObjectsWhenApplicationEntersBackground;
 - (id) init;
 - (id) delegate;
 - (void) setName:(id)a;
 - (void) setEvictsObjectsWithDiscardedContent:(BOOL)a;
 - (void) setTotalCostLimit:(unsigned long long)a;
 - (void) setCountLimit:(unsigned long long)a;
 - (unsigned long long) countLimit;


@end
