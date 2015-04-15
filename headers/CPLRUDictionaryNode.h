
@interface CPLRUDictionaryNode : NSObject {

    id _key;
    id _object;
    CPLRUDictionaryNode* next;
    CPLRUDictionaryNode* prev;
}
@property (nonatomic, assign, readonly) NSNumber* key;
@property (nonatomic, retain, readwrite) NSNumber* object;

 - (void) dealloc;
 - (id) object;
 - (void) setObject:(id)a;
 - (id) key;
 - (id) initWithKey:(id)aobject:(id)b;


@end
