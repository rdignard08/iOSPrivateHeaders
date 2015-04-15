
@protocol NSSecureCoding, NSCopying;
@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying> {

    @"NSURL" _baseURL;
    @"AFHTTPRequestSerializer<AFURLRequestSerialization>" _requestSerializer;
}
 + (BOOL) supportsSecureCoding;
 + (id) manager;

 - (void) setRequestSerializer:(id)a;
 - (void) setResponseSerializer:(id)a;
 - (id) requestSerializer;
 - (id) GET:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) HEAD:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) POST:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) POST:(id)aparameters:(id)bconstructingBodyWithBlock:(@?)csuccess:(@?)dfailure:(@?)e;
 - (id) PUT:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) PATCH:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) DELETE:(id)aparameters:(id)bsuccess:(@?)cfailure:(@?)d;
 - (id) initWithBaseURL:(id)asessionConfiguration:(id)b;
 - (id) initWithSessionConfiguration:(id)a;
 - (id) dataTaskWithHTTPMethod:(id)aURLString:(id)bparameters:(id)csuccess:(@?)dfailure:(@?)e;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) .cxx_destruct;
 - (id) baseURL;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithBaseURL:(id)a;
 - (void) setBaseURL:(id)a;


@end
