
@interface NSMetadataQueryResultGroup : NSObject {

    [9@] _private;
    [1Q] _private2;
    ^v _reserved;
}
@property (atomic, copy, readonly) NSString* attribute;
@property (atomic, retain, readonly) NSNumber* value;
@property (atomic, copy, readonly) NSArray* subgroups;
@property (atomic, assign, readonly) NSNumber* resultCount;
@property (atomic, copy, readonly) NSArray* results;

 - (unsigned long long) resultCount;
 - (id) _init:(id)aattributes:(id)bindex:(unsigned long long)cvalue:(id)d;
 - (void) _addResult:(unsigned long long)a;
 - (id) resultAtIndex:(unsigned long long)a;
 - (id) attribute;
 - (id) subgroups;
 - (void) _zapResultArray;
 - (void) dealloc;
 - (id) results;
 - (id) value;


@end
