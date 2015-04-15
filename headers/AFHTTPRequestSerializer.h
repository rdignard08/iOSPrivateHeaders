
@protocol AFURLRequestSerialization;
@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization> {

    BOOL _allowsCellularAccess;
    BOOL _HTTPShouldHandleCookies;
    BOOL _HTTPShouldUsePipelining;
    Q _stringEncoding;
    Q _cachePolicy;
    Q _networkServiceType;
    d _timeoutInterval;
    @"NSSet" _HTTPMethodsEncodingParametersInURI;
    @"NSMutableSet" _mutableObservedChangedKeyPaths;
    @"NSMutableDictionary" _mutableHTTPRequestHeaders;
    Q _queryStringSerializationStyle;
    @? _queryStringSerialization;
}
@property (nonatomic, assign, readwrite) NSNumber* stringEncoding;
@property (nonatomic, assign, readwrite) NSNumber* allowsCellularAccess;
@property (nonatomic, assign, readwrite) NSNumber* cachePolicy;
@property (nonatomic, assign, readwrite) NSNumber* HTTPShouldHandleCookies;
@property (nonatomic, assign, readwrite) NSNumber* HTTPShouldUsePipelining;
@property (nonatomic, assign, readwrite) NSNumber* networkServiceType;
@property (nonatomic, assign, readwrite) NSNumber* timeoutInterval;
@property (nonatomic, assign, readonly) NSDictionary* HTTPRequestHeaders;
@property (nonatomic, retain, readwrite) NSSet* HTTPMethodsEncodingParametersInURI;
@property (nonatomic, retain, readwrite) NSMutableSet* mutableObservedChangedKeyPaths;
@property (nonatomic, retain, readwrite) NSMutableDictionary* mutableHTTPRequestHeaders;
@property (nonatomic, assign, readwrite) NSNumber* queryStringSerializationStyle;
@property (nonatomic, copy, readwrite) NSNumber* queryStringSerialization;
 + (id) serializer;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (BOOL) supportsSecureCoding;

 - (id) requestWithMethod:(id)aURLString:(id)bparameters:(id)cerror:(^@)d;
 - (id) multipartFormRequestWithMethod:(id)aURLString:(id)bparameters:(id)cconstructingBodyWithBlock:(@?)derror:(^@)e;
 - (void) setStringEncoding:(Q)a;
 - (void) setMutableHTTPRequestHeaders:(id)a;
 - (void) setHTTPMethodsEncodingParametersInURI:(id)a;
 - (void) setMutableObservedChangedKeyPaths:(id)a;
 - (id) mutableHTTPRequestHeaders;
 - (void) setQueryStringSerializationStyle:(Q)a;
 - (void) setQueryStringSerialization:(@?)a;
 - (id) mutableObservedChangedKeyPaths;
 - (id) requestBySerializingRequest:(id)awithParameters:(id)berror:(^@)c;
 - (Q) stringEncoding;
 - (id) HTTPRequestHeaders;
 - (@?) queryStringSerialization;
 - (Q) queryStringSerializationStyle;
 - (id) HTTPMethodsEncodingParametersInURI;
 - (void) setAuthorizationHeaderFieldWithUsername:(id)apassword:(id)b;
 - (void) setAuthorizationHeaderFieldWithToken:(id)a;
 - (void) clearAuthorizationHeader;
 - (void) setQueryStringSerializationWithStyle:(Q)a;
 - (void) setQueryStringSerializationWithBlock:(@?)a;
 - (id) requestWithMethod:(id)aURLString:(id)bparameters:(id)c;
 - (id) multipartFormRequestWithMethod:(id)aURLString:(id)bparameters:(id)cconstructingBodyWithBlock:(@?)d;
 - (id) requestWithMultipartFormRequest:(id)awritingStreamContentsToFile:(id)bcompletionHandler:(@?)c;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (id) valueForHTTPHeaderField:(id)a;
 - (void) setValue:(id)aforHTTPHeaderField:(id)b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) cachePolicy;
 - (BOOL) HTTPShouldHandleCookies;
 - (d) timeoutInterval;
 - (Q) networkServiceType;
 - (BOOL) allowsCellularAccess;
 - (void) setCachePolicy:(Q)a;
 - (void) setTimeoutInterval:(d)a;
 - (void) setNetworkServiceType:(Q)a;
 - (void) setAllowsCellularAccess:(BOOL)a;
 - (BOOL) HTTPShouldUsePipelining;
 - (void) setHTTPShouldHandleCookies:(BOOL)a;
 - (void) setHTTPShouldUsePipelining:(BOOL)a;


@end
