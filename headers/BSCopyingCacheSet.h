
@interface BSCopyingCacheSet : NSObject {

    @"NSMutableSet" _mutable;
    @"NSSet" _immutable;
}
@property (atomic, assign, readonly) NSNumber* count;

 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (void) addObject:(id)a;
 - (BOOL) containsObject:(id)a;
 - (void) removeObject:(id)a;
 - (id) immutableSet;


@end
