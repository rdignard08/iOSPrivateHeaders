
@interface _UIDocumentContainerObserver : NSObject {

    NSMutableSet* _added;
    NSMutableSet* _removed;
    NSMutableDictionary* _moved;
    NSArray* _descriptors;
    NSOrderedSet* _lastSnapshot;
    NSDate* _lastSnapshotDate;
    @? _handler;
    NSPredicate* _predicate;
}
@property (nonatomic, copy, readwrite) NSArray* descriptors;
@property (nonatomic, retain, readwrite) NSOrderedSet* lastSnapshot;
@property (nonatomic, retain, readwrite) NSDate* lastSnapshotDate;
@property (nonatomic, copy, readwrite) NSNumber* handler;
@property (nonatomic, retain, readwrite) NSPredicate* predicate;
 + (id) _observerForDirectories:(id)asortedWithDescriptors:(id)bupdateHandler:(@?)c;

 - (void) setPredicate:(id)a ;
 - (void) dealloc;
 - (id) lastSnapshotDate;
 - (void) setLastSnapshot:(id)a ;
 - (void) setLastSnapshotDate:(id)a ;
 - (id) lastSnapshot;
 - (void) processResults:(id)a ;
 - (void) addURL:(id)a ;
 - (void) removeURL:(id)a ;
 - (void) moveURL:(id)a toURL:(id)b ;
 - (id) initWithDirectories:(id)a sortDescriptors:(id)b handler:(@?)c ;
 - (id) _predicateForItemsInDirectory:(id)a ;
 - (id) descriptors;
 - (id) _computeUpdatesFromOld:(id)a toNew:(id)b ;
 - (void) setDescriptors:(id)a ;
 - (id) predicate;
 - (@?) handler;
 - (void) setHandler:(@?)a ;


@end
