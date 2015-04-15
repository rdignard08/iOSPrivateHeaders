
@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

    Q _format;
    Q _readOptions;
}
 + (id) serializer;
 + (id) serializerWithFormat:(Q)areadOptions:(Q)b;

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setFormat:(Q)a;
 - (Q) format;
 - (void) setReadOptions:(Q)a;
 - (Q) readOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
