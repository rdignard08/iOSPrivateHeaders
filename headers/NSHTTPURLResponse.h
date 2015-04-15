
@interface NSHTTPURLResponse : NSURLResponse {

    @"NSHTTPURLResponseInternal" _httpInternal;
}
 + (id) localizedStringForStatusCode:(q)a;
 + (BOOL) supportsSecureCoding;
 + (BOOL) isErrorStatusCode:(q)a;

 - (q) maxExpectedContentLength;
 - (id) _iTunesStore_valueForHTTPHeader:(id)a;
 - (d) expirationInterval;
 - (BOOL) _getCacheControlMaxAge:(^d)a;
 - (id) _dateFromExpires;
 - (id) expirationDate;
 - (id) description;
 - (void) dealloc;
 - (id) _initWithCFURLResponse:(^{_CFURLResponse=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) _peerCertificateChain;
 - (id) initWithURL:(id)astatusCode:(q)bHTTPVersion:(id)cheaderFields:(id)d;
 - (q) statusCode;
 - (id) allHeaderFields;
 - (id) initWithURL:(id)astatusCode:(q)bheaderFields:(id)crequestTime:(d)d;
 - (id) _clientCertificateChain;
 - (id) _clientCertificateState;
 - (void) _setPeerTrust:(^{__SecTrust=})a;
 - (^{__SecTrust=}) _peerTrust;


@end
