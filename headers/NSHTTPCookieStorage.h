
@interface NSHTTPCookieStorage : NSObject {

    NSHTTPCookieStorageInternal* _internal;
}
@property (atomic, copy, readonly) NSArray* cookies;
@property (atomic, assign, readwrite) NSNumber* cookieAcceptPolicy;
 + (id) sharedHTTPCookieStorage;

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (^{OpaqueCFHTTPCookieStorage=}) _cookieStorage;
 - (void) setCookies:(id)a forURL:(id)b mainDocumentURL:(id)c ;
 - (id) cookiesForURL:(id)a ;
 - (void) _saveCookies;
 - (id) cookies;
 - (void) deleteCookie:(id)a ;
 - (void) setCookie:(id)a ;
 - (unsigned long long) cookieAcceptPolicy;
 - (void) setCookieAcceptPolicy:(unsigned long long)a ;
 - (id) sortedCookiesUsingDescriptors:(id)a ;
 - (void) removeCookiesSinceDate:(id)a ;
 - (void) storeCookies:(id)a forTask:(id)b ;
 - (void) getCookiesForTask:(id)a completionHandler:(@?)b ;
 - (id) _initWithIdentifier:(id)a private:(BOOL)b ;
 - (void) _setPrivateBrowsingEnabled:(BOOL)a ;
 - (id) _initWithCFHTTPCookieStorage:(^{OpaqueCFHTTPCookieStorage=})a ;
 - (id) _cookiesForURL:(id)a mainDocumentURL:(id)b ;
 - (^{OpaqueCFHTTPCookieStorage=}) _CFHTTPCookieStorage;
 - (id) cookieRequestHeaderFieldsForURL:(id)a ;
 - (void) setCookiesFromResponseHeader:(id)a forURL:(id)b policyBaseURL:(id)c ;


@end
