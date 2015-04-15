
@interface __NSCFMemoryHTTPCookieStorage : NSHTTPCookieStorage {

}
 + (void) initialize;

 - (id) description;
 - (id) init;
 - (void) setCookies:(id)aforURL:(id)bmainDocumentURL:(id)c;
 - (id) cookiesForURL:(id)a;
 - (id) cookies;
 - (void) deleteCookie:(id)a;
 - (void) setCookie:(id)a;
 - (unsigned long long) cookieAcceptPolicy;
 - (void) setCookieAcceptPolicy:(unsigned long long)a;
 - (id) sortedCookiesUsingDescriptors:(id)a;


@end
