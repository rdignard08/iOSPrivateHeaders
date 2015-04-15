
@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

    unsigned long long _format;
    unsigned long long _readOptions;
}
 + (id) serializer;
 + (id) serializerWithFormat:(unsigned long long)areadOptions:(unsigned long long)b;

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setFormat:(unsigned long long)a;
 - (unsigned long long) format;
 - (void) setReadOptions:(unsigned long long)a;
 - (unsigned long long) readOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
