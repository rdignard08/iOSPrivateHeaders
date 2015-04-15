
@interface NSKeyValueObservationInfo : NSObject {

    int _retainCountMinusOne;
    NSArray _observances;
    unsigned long long _cachedHash;
    BOOL _cachedIsShareable;
    NSHashTable _observables;
}

 - (id) _initWithObservances:(^@)acount:(unsigned long long)b;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;


@end
