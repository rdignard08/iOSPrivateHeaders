
@interface NSMetadataItem : NSObject {

    id _item;
    ^v _reserved;
}
@property (atomic, copy, readonly) NSArray* attributes;

 - (void) _setQuery:(id)a;
 - (id) _item;
 - (id) _init:((?=@@))a;
 - (id) valueForAttribute:(id)a;
 - (id) valuesForAttributes:(id)a;
 - (void) dealloc;
 - (id) valueForKey:(id)a;
 - (id) attributes;


@end
