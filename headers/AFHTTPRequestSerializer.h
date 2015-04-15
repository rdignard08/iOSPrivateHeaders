
@protocol AFURLRequestSerialization;
@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization> {

    BOOL _allowsCellularAccess;
    BOOL _HTTPShouldHandleCookies;
    BOOL _HTTPShouldUsePipelining;
    unsigned long long _stringEncoding;
    unsigned long long _cachePolicy;
    unsigned long long _networkServiceType;
    double _timeoutInterval;
    NSSet* _HTTPMethodsEncodingParametersInURI;
    NSMutableSet* _mutableObservedChangedKeyPaths;
    NSMutableDictionary* _mutableHTTPRequestHeaders;
    unsigned long long _queryStringSerializationStyle;
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

 - (id) requestWithMethod:(id)a URLString:(id)b parameters:(id)c error:(^@)d ;
 - (id) multipartFormRequestWithMethod:(id)a URLString:(id)b parameters:(id)c constructingBodyWithBlock:(@?)d error:(^@)e ;
 - (void) setStringEncoding:(unsigned long long)a ;
 - (void) setMutableHTTPRequestHeaders:(id)a ;
 - (void) setHTTPMethodsEncodingParametersInURI:(id)a ;
 - (void) setMutableObservedChangedKeyPaths:(id)a ;
 - (id) mutableHTTPRequestHeaders;
 - (void) setQueryStringSerializationStyle:(unsigned long long)a ;
 - (void) setQueryStringSerialization:(@?)a ;
 - (id) mutableObservedChangedKeyPaths;
 - (id) requestBySerializingRequest:(id)a withParameters:(id)b error:(^@)c ;
 - (unsigned long long) stringEncoding;
 - (id) HTTPRequestHeaders;
 - (@?) queryStringSerialization;
 - (unsigned long long) queryStringSerializationStyle;
 - (id) HTTPMethodsEncodingParametersInURI;
 - (void) setAuthorizationHeaderFieldWithUsername:(id)a password:(id)b ;
 - (void) setAuthorizationHeaderFieldWithToken:(id)a ;
 - (void) clearAuthorizationHeader;
 - (void) setQueryStringSerializationWithStyle:(unsigned long long)a ;
 - (void) setQueryStringSerializationWithBlock:(@?)a ;
 - (id) requestWithMethod:(id)a URLString:(id)b parameters:(id)c ;
 - (id) multipartFormRequestWithMethod:(id)a URLString:(id)b parameters:(id)c constructingBodyWithBlock:(@?)d ;
 - (id) requestWithMultipartFormRequest:(id)a writingStreamContentsToFile:(id)b completionHandler:(@?)c ;
 - (void) observeValueForKeyPath:(id)a ofObject:(id)b change:(id)c context:(^v)d ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (id) valueForHTTPHeaderField:(id)a ;
 - (void) setValue:(id)a forHTTPHeaderField:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) cachePolicy;
 - (BOOL) HTTPShouldHandleCookies;
 - (double) timeoutInterval;
 - (unsigned long long) networkServiceType;
 - (BOOL) allowsCellularAccess;
 - (void) setCachePolicy:(unsigned long long)a ;
 - (void) setTimeoutInterval:(double)a ;
 - (void) setNetworkServiceType:(unsigned long long)a ;
 - (void) setAllowsCellularAccess:(BOOL)a ;
 - (BOOL) HTTPShouldUsePipelining;
 - (void) setHTTPShouldHandleCookies:(BOOL)a ;
 - (void) setHTTPShouldUsePipelining:(BOOL)a ;


@end
