
@interface NSKeyValueObservationInfo : NSObject {

    i _retainCountMinusOne;
    @"NSArray" _observances;
    Q _cachedHash;
    BOOL _cachedIsShareable;
    @"NSHashTable" _observables;
}

 - (id) _initWithObservances:(^@)acount:(Q)b;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;


@end
