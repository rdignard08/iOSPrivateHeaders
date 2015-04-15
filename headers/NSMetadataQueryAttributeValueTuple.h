
@interface NSMetadataQueryAttributeValueTuple : NSObject {

    id _attr;
    id _value;
    Q _count;
    ^v _reserved;
}
@property (atomic, copy, readonly) NSString* attribute;
@property (atomic, retain, readonly) NSNumber* value;
@property (atomic, assign, readonly) NSNumber* count;

 - (id) _init:(id)aattribute:(id)bvalue:(id)ccount:(Q)d;
 - (id) attribute;
 - (void) dealloc;
 - (Q) count;
 - (id) value;


@end
