
@interface NSURLKeyValuePair : NSObject {

    id key;
    id value;
    unsigned long long hash;
}
 + (id) pairWithKey:(id)avalue:(id)b;
 + (id) pair;

 - (id) initWithKey:(id)a value:(id)b ;
 - (void) setKey:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) key;
 - (void) setValue:(id)a ;
 - (id) value;


@end
