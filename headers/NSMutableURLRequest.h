
@interface NSMutableURLRequest : NSURLRequest {

}

 - (id) initWithXPCEncoding:(id)a ;
 - (id) copyXPCEncoding;
 - (void) _web_setHTTPContentType:(id)a ;
 - (void) _web_setHTTPReferrer:(id)a ;
 - (void) _web_setHTTPUserAgent:(id)a ;
 - (void) setHTTPMethod:(id)a ;
 - (void) addValue:(id)a forHTTPHeaderField:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) setValue:(id)a forHTTPHeaderField:(id)b ;
 - (void) setHTTPBody:(id)a ;
 - (void) setHTTPBodyStream:(id)a ;
 - (void) setAllHTTPHeaderFields:(id)a ;
 - (void) setURL:(id)a ;
 - (void) setCachePolicy:(unsigned long long)a ;
 - (void) setTimeoutInterval:(double)a ;
 - (void) setMainDocumentURL:(id)a ;
 - (void) setNetworkServiceType:(unsigned long long)a ;
 - (void) setAllowsCellularAccess:(BOOL)a ;
 - (void) setBoundInterfaceIdentifier:(id)a ;
 - (void) setHTTPContentType:(id)a ;
 - (void) setHTTPExtraCookies:(id)a ;
 - (void) setHTTPReferrer:(id)a ;
 - (void) setHTTPUserAgent:(id)a ;
 - (void) setHTTPShouldHandleCookies:(BOOL)a ;
 - (void) setRequestPriority:(unsigned long long)a ;
 - (unsigned long long) requestPriority;
 - (void) setHTTPShouldUsePipelining:(BOOL)a ;
 - (void) setExpectedWorkload:(unsigned long long)a ;
 - (void) _setTimeWindowDelay:(double)a ;
 - (void) _setTimeWindowDuration:(double)a ;
 - (void) setContentDispositionEncodingFallbackArray:(id)a ;


@end
