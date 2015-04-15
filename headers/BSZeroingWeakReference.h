
@interface BSZeroingWeakReference : NSObject {

    id _object;
    @"NSString" _debug;
    Q _objectAddress;
}
 + (id) referenceWithObject:(id)a;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) object;
 - (id) initWithObject:(id)a;
 - (id) init;


@end
