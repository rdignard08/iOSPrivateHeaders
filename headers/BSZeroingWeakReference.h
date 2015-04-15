
@interface BSZeroingWeakReference : NSObject {

    id _object;
    NSString* _debug;
    unsigned long long _objectAddress;
}
 + (id) referenceWithObject:(id)a;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) object;
 - (id) initWithObject:(id)a ;
 - (id) init;


@end
