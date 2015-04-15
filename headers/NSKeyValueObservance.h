
@interface NSKeyValueObservance : NSWeakCallback {

    int _retainCountMinusOne;
    NSObject* _observer;
    NSKeyValueProperty* _property;
    unsigned long long _options;
    ^v _context;
    NSObject* _originalObservable;
    unsigned long long _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray* _observationInfos;
}

 - (id) _initWithObserver:(id)a property:(id)b options:(unsigned long long)c context:(^v)d originalObservable:(id)e ;
 - (void) observeValueForKeyPath:(id)a ofObject:(id)b change:(id)c context:(^v)d ;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;


@end
