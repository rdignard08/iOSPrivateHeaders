
@protocol NSSecureCoding, NSCopying;
@interface AFHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying> {

    BOOL _shouldUseCredentialStorage;
    NSURL* _baseURL;
    AFHTTPRequestSerializer<AFURLRequestSerialization>* _requestSerializer;
    AFHTTPResponseSerializer<AFURLResponseSerialization>* _responseSerializer;
    NSOperationQueue* _operationQueue;
    NSURLCredential* _credential;
    AFSecurityPolicy* _securityPolicy;
    AFNetworkReachabilityManager* _reachabilityManager;
    NSObject<OS_dispatch_queue>* _completionQueue;
    NSObject<OS_dispatch_group>* _completionGroup;
}
@property (nonatomic, retain, readwrite) NSURL* baseURL;
@property (nonatomic, retain, readwrite) NSNumber* requestSerializer;
@property (nonatomic, retain, readwrite) NSNumber* responseSerializer;
@property (nonatomic, retain, readwrite) NSOperationQueue* operationQueue;
@property (nonatomic, assign, readwrite) NSNumber* shouldUseCredentialStorage;
@property (nonatomic, retain, readwrite) NSURLCredential* credential;
@property (nonatomic, retain, readwrite) AFSecurityPolicy* securityPolicy;
@property (nonatomic, retain, readwrite) AFNetworkReachabilityManager* reachabilityManager;
@property (nonatomic, retain, readwrite) NSNumber* completionQueue;
@property (nonatomic, retain, readwrite) NSNumber* completionGroup;
 + (BOOL) supportsSecureCoding;
 + (id) manager;

 - (void) setRequestSerializer:(id)a ;
 - (void) setResponseSerializer:(id)a ;
 - (void) setSecurityPolicy:(id)a ;
 - (void) setReachabilityManager:(id)a ;
 - (void) setShouldUseCredentialStorage:(BOOL)a ;
 - (id) requestSerializer;
 - (id) completionQueue;
 - (id) HTTPRequestOperationWithRequest:(id)a success:(@?)b failure:(@?)c ;
 - (id) responseSerializer;
 - (BOOL) shouldUseCredentialStorage;
 - (id) credential;
 - (void) setCredential:(id)a ;
 - (id) securityPolicy;
 - (void) setCompletionQueue:(id)a ;
 - (id) completionGroup;
 - (void) setCompletionGroup:(id)a ;
 - (id) HTTPRequestOperationWithHTTPMethod:(id)a URLString:(id)b parameters:(id)c success:(@?)d failure:(@?)e ;
 - (id) GET:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) HEAD:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) POST:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) POST:(id)a parameters:(id)b constructingBodyWithBlock:(@?)c success:(@?)d failure:(@?)e ;
 - (id) PUT:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) PATCH:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) DELETE:(id)a parameters:(id)b success:(@?)c failure:(@?)d ;
 - (id) reachabilityManager;
 - (id) operationQueue;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) .cxx_destruct;
 - (id) baseURL;
 - (void) setOperationQueue:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithBaseURL:(id)a ;
 - (void) setBaseURL:(id)a ;


@end
