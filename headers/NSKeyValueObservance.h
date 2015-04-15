
@interface NSKeyValueObservance : NSWeakCallback {

    i _retainCountMinusOne;
    @"NSObject" _observer;
    @"NSKeyValueProperty" _property;
    Q _options;
    ^v _context;
    @"NSObject" _originalObservable;
    Q _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    @"NSPointerArray" _observationInfos;
}

 - (id) _initWithObserver:(id)aproperty:(id)boptions:(Q)ccontext:(^v)doriginalObservable:(id)e;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
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
