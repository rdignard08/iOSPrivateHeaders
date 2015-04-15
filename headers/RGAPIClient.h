
@interface RGAPIClient : AFHTTPSessionManager {

    NSURLSessionConfiguration* _sessionConfiguration;
    <RGSerializationDelegate>* _serializationDelegate;
}

 - (id) initWithBaseURL:(id)a sessionConfiguration:(id)b ;
 - (id) sessionConfiguration;
 - (id) serializationDelegate;
 - (id) parseResponse:(id)a atPath:(id)b intoClass:(Class)c context:(N^@)d ;
 - (id) responseObjectFromBody:(id)a keypath:(id)b class:(Class)c context:(id)d error:(id)e ;
 - (void) GET:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e completion:(@?)f ;
 - (void) GET:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e delegate:(id)f ;
 - (void) request:(id)a url:(id)b parameters:(id)c keyPath:(id)d class:(Class)e completion:(@?)f delegate:(id)g context:(id)h ;
 - (void) POST:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e completion:(@?)f ;
 - (void) POST:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e delegate:(id)f ;
 - (void) PUT:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e completion:(@?)f ;
 - (void) PUT:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e delegate:(id)f ;
 - (void) DELETE:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e completion:(@?)f ;
 - (void) DELETE:(id)a parameters:(id)b keyPath:(id)c class:(Class)d context:(id)e delegate:(id)f ;
 - (void) GET:(id)a parameters:(id)b keyPath:(id)c class:(Class)d completion:(@?)e ;
 - (void) GET:(id)a parameters:(id)b keyPath:(id)c class:(Class)d delegate:(id)e ;
 - (void) POST:(id)a parameters:(id)b keyPath:(id)c class:(Class)d completion:(@?)e ;
 - (void) POST:(id)a parameters:(id)b keyPath:(id)c class:(Class)d delegate:(id)e ;
 - (void) PUT:(id)a parameters:(id)b keyPath:(id)c class:(Class)d completion:(@?)e ;
 - (void) PUT:(id)a parameters:(id)b keyPath:(id)c class:(Class)d delegate:(id)e ;
 - (void) DELETE:(id)a parameters:(id)b keyPath:(id)c class:(Class)d completion:(@?)e ;
 - (void) DELETE:(id)a parameters:(id)b keyPath:(id)c class:(Class)d delegate:(id)e ;
 - (void) setSerializationDelegate:(id)a ;
 - (void) GET:(id)a parameters:(id)b class:(Class)c completion:(@?)d ;
 - (void) GET:(id)a keyPath:(id)b class:(Class)c completion:(@?)d ;
 - (void) GET:(id)a class:(Class)b completion:(@?)c ;
 - (void) POST:(id)a parameters:(id)b class:(Class)c completion:(@?)d ;
 - (void) POST:(id)a keyPath:(id)b class:(Class)c completion:(@?)d ;
 - (void) POST:(id)a class:(Class)b completion:(@?)c ;
 - (void) PUT:(id)a parameters:(id)b class:(Class)c completion:(@?)d ;
 - (void) PUT:(id)a keyPath:(id)b class:(Class)c completion:(@?)d ;
 - (void) PUT:(id)a class:(Class)b completion:(@?)c ;
 - (void) DELETE:(id)a parameters:(id)b class:(Class)c completion:(@?)d ;
 - (void) DELETE:(id)a keyPath:(id)b class:(Class)c completion:(@?)d ;
 - (void) DELETE:(id)a class:(Class)b completion:(@?)c ;
 - (void) GET:(id)a completion:(@?)b ;
 - (void) GET:(id)a delegate:(id)b ;
 - (void) POST:(id)a completion:(@?)b ;
 - (void) POST:(id)a delegate:(id)b ;
 - (void) PUT:(id)a completion:(@?)b ;
 - (void) PUT:(id)a delegate:(id)b ;
 - (void) DELETE:(id)a completion:(@?)b ;
 - (void) DELETE:(id)a delegate:(id)b ;
 - (void) .cxx_destruct;
 - (id) init;
 - (id) initWithBaseURL:(id)a ;


@end
