
@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer {

    NSArray* _responseSerializers;
}
 + (id) compoundSerializerWithResponseSerializers:(id)a;

 - (id) responseObjectForResponse:(id)a data:(id)b error:(^@)c ;
 - (void) setResponseSerializers:(id)a ;
 - (id) responseSerializers;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) .cxx_destruct;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
