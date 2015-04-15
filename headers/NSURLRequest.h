
@protocol NSSecureCoding, NSCopying, NSMutableCopying;
@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

    @"NSURLRequestInternal" _internal;
}
@property (atomic, copy, readonly) NSString* HTTPMethod;
@property (atomic, copy, readonly) NSDictionary* allHTTPHeaderFields;
@property (atomic, copy, readonly) NSData* HTTPBody;
@property (atomic, retain, readonly) NSInputStream* HTTPBodyStream;
@property (atomic, assign, readonly) NSNumber* HTTPShouldHandleCookies;
@property (atomic, assign, readonly) NSNumber* HTTPShouldUsePipelining;
@property (atomic, copy, readonly) NSURL* URL;
@property (atomic, assign, readonly) NSNumber* cachePolicy;
@property (atomic, assign, readonly) NSNumber* timeoutInterval;
@property (atomic, copy, readonly) NSURL* mainDocumentURL;
@property (atomic, assign, readonly) NSNumber* networkServiceType;
@property (atomic, assign, readonly) NSNumber* allowsCellularAccess;
 + (BOOL) supportsSecureCoding;
 + (id) requestWithURL:(id)acachePolicy:(Q)btimeoutInterval:(d)c;
 + (id) getObjectKeyWithIndex:(q)a;
 + (id) allowsSpecificHTTPSCertificateForHost:(id)a;
 + (BOOL) allowsAnyHTTPSCertificateForHost:(id)a;
 + (id) requestWithURL:(id)a;
 + (void) setDefaultTimeoutInterval:(d)a;
 + (d) defaultTimeoutInterval;
 + (void) setAllowsAnyHTTPSCertificate:(BOOL)aforHost:(id)b;
 + (void) setAllowsSpecificHTTPSCertificate:(id)aforHost:(id)b;

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (id) _web_HTTPReferrer;
 - (id) _web_HTTPContentType;
 - (BOOL) _web_isConditionalRequest;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithURL:(id)a;
 - (id) init;
 - (^{_CFURLRequest=}) _CFURLRequest;
 - (id) _initWithCFURLRequest:(^{_CFURLRequest=})a;
 - (id) HTTPBodyStream;
 - (id) HTTPBody;
 - (id) valueForHTTPHeaderField:(id)a;
 - (id) URL;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithURL:(id)acachePolicy:(Q)btimeoutInterval:(d)c;
 - (id) HTTPMethod;
 - (id) mainDocumentURL;
 - (BOOL) _URLHasScheme:(id)a;
 - (BOOL) _isSafeRequestForBackgroundDownload;
 - (id) _propertyForKey:(id)a;
 - (void) _setProperty:(id)aforKey:(id)b;
 - (void) _removePropertyForKey:(id)a;
 - (Q) cachePolicy;
 - (BOOL) HTTPShouldHandleCookies;
 - (id) allHTTPHeaderFields;
 - (d) _timeWindowDelay;
 - (d) _timeWindowDuration;
 - (d) timeoutInterval;
 - (id) _copyReplacingURLWithURL:(id)a;
 - (Q) networkServiceType;
 - (BOOL) allowsCellularAccess;
 - (id) boundInterfaceIdentifier;
 - (id) HTTPContentType;
 - (id) HTTPExtraCookies;
 - (id) HTTPReferrer;
 - (id) HTTPUserAgent;
 - (BOOL) HTTPShouldUsePipelining;
 - (id) contentDispositionEncodingFallbackArray;
 - (Q) expectedWorkload;


@end
