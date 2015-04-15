
@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {

    Q _writingOptions;
}
 + (id) serializer;
 + (id) serializerWithWritingOptions:(Q)a;

 - (id) requestBySerializingRequest:(id)awithParameters:(id)berror:(^@)c;
 - (void) setWritingOptions:(Q)a;
 - (Q) writingOptions;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
