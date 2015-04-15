
@protocol NSSecureCoding, NSCopying;
@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying> {

    NSURL* _baseURL;
    AFHTTPRequestSerializer<AFURLRequestSerialization>* _requestSerializer;
}
 + (BOOL) supportsSecureCoding;
 + (id) manager;

 - (void) setRequestSerializer:(id)a ;
 - (void) setResponseSerializer:(id)a ;
 - (id) requestSerializer;
 - (id) GET:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) HEAD:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) POST:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) POST:(id)a parameters:(id)b constructingBodyWithBlock:(@?)c success:(@?)d failure:(@?)e ;
 - (id) PUT:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) PATCH:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) DELETE:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) initWithBaseURL:(id)a sessionConfiguration:(id)b ;
 - (id) initWithSessionConfiguration:(id)a ;
 - (id) dataTaskWithHTTPMethod:(id)a URLString:(id)b parameters:(id)c success:(@?)d failure:(@?)e ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) .cxx_destruct;
 - (id) baseURL;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithBaseURL:(id)a ;
 - (void) setBaseURL:(id)a ;


@end
