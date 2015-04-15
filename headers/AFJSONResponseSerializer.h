
@interface AFJSONResponseSerializer : AFHTTPResponseSerializer {

    BOOL _removesKeysWithNullValues;
    unsigned long long _readingOptions;
}
 + (id) serializer;
 + (id) serializerWithReadingOptions:(unsigned long long)a;

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setReadingOptions:(unsigned long long)a;
 - (BOOL) removesKeysWithNullValues;
 - (void) setRemovesKeysWithNullValues:(BOOL)a;
 - (unsigned long long) readingOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
