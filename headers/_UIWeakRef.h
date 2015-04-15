
@interface _UIWeakRef : NSObject {

    id _weakStorage;
    id _weakPointer;
    BOOL _useWeakStorage;
}
 + (id) weakRefWithObject:(id)a;

 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) object;


@end
