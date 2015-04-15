
@interface NSHTTPCookie : NSObject {

    NSHTTPCookieInternal _cookiePrivate;
}
@property (atomic, copy, readonly) NSDictionary* properties;
@property (atomic, assign, readonly) NSNumber* version;
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSString* value;
@property (atomic, copy, readonly) NSDate* expiresDate;
@property (atomic, assign, readonly, getter=isSessionOnly) NSNumber* sessionOnly;
@property (atomic, copy, readonly) NSString* domain;
@property (atomic, copy, readonly) NSString* path;
@property (atomic, assign, readonly, getter=isSecure) NSNumber* secure;
@property (atomic, assign, readonly, getter=isHTTPOnly) NSNumber* HTTPOnly;
@property (atomic, copy, readonly) NSString* comment;
@property (atomic, copy, readonly) NSURL* commentURL;
@property (atomic, copy, readonly) NSArray* portList;
 + (id) cookiesWithResponseHeaderFields:(id)aforURL:(id)b;
 + (id) requestHeaderFieldsWithCookies:(id)a;
 + (id) cookieWithCFHTTPCookie:(^{OpaqueCFHTTPCookie=})a;
 + (^{__CFArray=}) _ns2cfCookies:(id)a;
 + (id) _cf2nsCookies:(^{__CFArray=})a;
 + (id) cookieWithProperties:(id)a;

 - (id) replacementObjectForPortCoder:(id)a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) domain;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithProperties:(id)a;
 - (id) initWithCFHTTPCookie:(^{OpaqueCFHTTPCookie=})a;
 - (BOOL) isSessionOnly;
 - (id) expiresDate;
 - (id) comment;
 - (id) commentURL;
 - (BOOL) isSecure;
 - (id) portList;
 - (id) properties;
 - (^{OpaqueCFHTTPCookie=}) _GetInternalCFHTTPCookie;
 - (^{OpaqueCFHTTPCookie=}) _CFHTTPCookie;
 - (BOOL) isHTTPOnly;
 - (id) Name;
 - (id) Value;
 - (id) Domain;
 - (id) Path;
 - (id) Expires;
 - (id) Comment;
 - (id) CommentURL;
 - (id) OriginURL;
 - (id) Version;
 - (id) Secure;
 - (id) Discard;
 - (id) Port;
 - (id) MaxAge;
 - (long long) _compareForHeaderOrder:(id)a;
 - (id) _key;
 - (BOOL) _isExpired;
 - (id) value;
 - (unsigned long long) version;
 - (id) path;


@end
