
@interface NSMetadataQueryAttributeValueTuple : NSObject {

    id _attr;
    id _value;
    unsigned long long _count;
    ^v _reserved;
}
@property (atomic, copy, readonly) NSString* attribute;
@property (atomic, retain, readonly) NSNumber* value;
@property (atomic, assign, readonly) NSNumber* count;

 - (id) _init:(id)aattribute:(id)bvalue:(id)ccount:(unsigned long long)d;
 - (id) attribute;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) value;


@end
