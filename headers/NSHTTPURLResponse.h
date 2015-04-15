
@interface NSHTTPURLResponse : NSURLResponse {

    NSHTTPURLResponseInternal _httpInternal;
}
 + (id) localizedStringForStatusCode:(long long)a;
 + (BOOL) supportsSecureCoding;
 + (BOOL) isErrorStatusCode:(long long)a;

 - (long long) maxExpectedContentLength;
 - (id) _iTunesStore_valueForHTTPHeader:(id)a;
 - (double) expirationInterval;
 - (BOOL) _getCacheControlMaxAge:(^d)a;
 - (id) _dateFromExpires;
 - (id) expirationDate;
 - (id) description;
 - (void) dealloc;
 - (id) _initWithCFURLResponse:(^{_CFURLResponse=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) _peerCertificateChain;
 - (id) initWithURL:(id)astatusCode:(long long)bHTTPVersion:(id)cheaderFields:(id)d;
 - (long long) statusCode;
 - (id) allHeaderFields;
 - (id) initWithURL:(id)astatusCode:(long long)bheaderFields:(id)crequestTime:(double)d;
 - (id) _clientCertificateChain;
 - (id) _clientCertificateState;
 - (void) _setPeerTrust:(^{__SecTrust=})a;
 - (^{__SecTrust=}) _peerTrust;


@end
