
@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {

    Q _format;
    Q _writeOptions;
}
 + (id) serializer;
 + (id) serializerWithFormat:(Q)awriteOptions:(Q)b;

 - (id) requestBySerializingRequest:(id)awithParameters:(id)berror:(^@)c;
 - (void) setFormat:(Q)a;
 - (void) setWriteOptions:(Q)a;
 - (Q) format;
 - (Q) writeOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
