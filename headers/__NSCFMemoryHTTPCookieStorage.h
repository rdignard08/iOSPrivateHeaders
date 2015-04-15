
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
 - (Q) cookieAcceptPolicy;
 - (void) setCookieAcceptPolicy:(Q)a;
 - (id) sortedCookiesUsingDescriptors:(id)a;


@end
