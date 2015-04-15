
@interface NSHTTPCookieStorage : NSObject {

    @"NSHTTPCookieStorageInternal" _internal;
}
@property (atomic, copy, readonly) NSArray* cookies;
@property (atomic, assign, readwrite) NSNumber* cookieAcceptPolicy;
 + (id) sharedHTTPCookieStorage;

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (^{OpaqueCFHTTPCookieStorage=}) _cookieStorage;
 - (void) setCookies:(id)aforURL:(id)bmainDocumentURL:(id)c;
 - (id) cookiesForURL:(id)a;
 - (void) _saveCookies;
 - (id) cookies;
 - (void) deleteCookie:(id)a;
 - (void) setCookie:(id)a;
 - (unsigned long long) cookieAcceptPolicy;
 - (void) setCookieAcceptPolicy:(unsigned long long)a;
 - (id) sortedCookiesUsingDescriptors:(id)a;
 - (void) removeCookiesSinceDate:(id)a;
 - (void) storeCookies:(id)aforTask:(id)b;
 - (void) getCookiesForTask:(id)acompletionHandler:(@?)b;
 - (id) _initWithIdentifier:(id)aprivate:(BOOL)b;
 - (void) _setPrivateBrowsingEnabled:(BOOL)a;
 - (id) _initWithCFHTTPCookieStorage:(^{OpaqueCFHTTPCookieStorage=})a;
 - (id) _cookiesForURL:(id)amainDocumentURL:(id)b;
 - (^{OpaqueCFHTTPCookieStorage=}) _CFHTTPCookieStorage;
 - (id) cookieRequestHeaderFieldsForURL:(id)a;
 - (void) setCookiesFromResponseHeader:(id)aforURL:(id)bpolicyBaseURL:(id)c;


@end
