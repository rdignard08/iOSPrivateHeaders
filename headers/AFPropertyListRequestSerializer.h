
@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {

    unsigned long long _format;
    unsigned long long _writeOptions;
}
 + (id) serializer;
 + (id) serializerWithFormat:(unsigned long long)awriteOptions:(unsigned long long)b;

 - (id) requestBySerializingRequest:(id)awithParameters:(id)berror:(^@)c;
 - (void) setFormat:(unsigned long long)a;
 - (void) setWriteOptions:(unsigned long long)a;
 - (unsigned long long) format;
 - (unsigned long long) writeOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
