
@interface NSURLKeyValuePair : NSObject {

    id key;
    id value;
    Q hash;
}
 + (id) pairWithKey:(id)avalue:(id)b;
 + (id) pair;

 - (id) initWithKey:(id)avalue:(id)b;
 - (void) setKey:(id)a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) key;
 - (void) setValue:(id)a;
 - (id) value;


@end
