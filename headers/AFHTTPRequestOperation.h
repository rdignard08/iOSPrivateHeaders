
@interface AFHTTPRequestOperation : AFURLConnectionOperation {

    @"AFHTTPResponseSerializer<AFURLResponseSerialization>" _responseSerializer;
    id _responseObject;
    @"NSError" _responseSerializationError;
}
 + (BOOL) supportsSecureCoding;

 - (void) setResponseObject:(id)a;
 - (void) setResponseSerializationError:(id)a;
 - (id) responseObject;
 - (id) responseSerializationError;
 - (void) setResponseSerializer:(id)a;
 - (id) responseSerializer;
 - (void) setCompletionBlockWithSuccess:(@?)afailure:(@?)b;
 - (void) pause;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) .cxx_destruct;
 - (id) initWithRequest:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) error;


@end
