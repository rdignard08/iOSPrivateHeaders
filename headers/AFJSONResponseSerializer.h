
@interface AFJSONResponseSerializer : AFHTTPResponseSerializer {

    BOOL _removesKeysWithNullValues;
    Q _readingOptions;
}
 + (id) serializer;
 + (id) serializerWithReadingOptions:(Q)a;

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setReadingOptions:(Q)a;
 - (BOOL) removesKeysWithNullValues;
 - (void) setRemovesKeysWithNullValues:(BOOL)a;
 - (Q) readingOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
