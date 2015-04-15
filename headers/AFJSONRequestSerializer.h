
@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {

    unsigned long long _writingOptions;
}
 + (id) serializer;
 + (id) serializerWithWritingOptions:(unsigned long long)a;

 - (id) requestBySerializingRequest:(id)awithParameters:(id)berror:(^@)c;
 - (void) setWritingOptions:(unsigned long long)a;
 - (unsigned long long) writingOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
