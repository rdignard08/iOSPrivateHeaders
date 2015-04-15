
@interface NSMutableURLRequest : NSURLRequest {

}

 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (void) _web_setHTTPContentType:(id)a;
 - (void) _web_setHTTPReferrer:(id)a;
 - (void) _web_setHTTPUserAgent:(id)a;
 - (void) setHTTPMethod:(id)a;
 - (void) addValue:(id)aforHTTPHeaderField:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setValue:(id)aforHTTPHeaderField:(id)b;
 - (void) setHTTPBody:(id)a;
 - (void) setHTTPBodyStream:(id)a;
 - (void) setAllHTTPHeaderFields:(id)a;
 - (void) setURL:(id)a;
 - (void) setCachePolicy:(Q)a;
 - (void) setTimeoutInterval:(d)a;
 - (void) setMainDocumentURL:(id)a;
 - (void) setNetworkServiceType:(Q)a;
 - (void) setAllowsCellularAccess:(BOOL)a;
 - (void) setBoundInterfaceIdentifier:(id)a;
 - (void) setHTTPContentType:(id)a;
 - (void) setHTTPExtraCookies:(id)a;
 - (void) setHTTPReferrer:(id)a;
 - (void) setHTTPUserAgent:(id)a;
 - (void) setHTTPShouldHandleCookies:(BOOL)a;
 - (void) setRequestPriority:(Q)a;
 - (Q) requestPriority;
 - (void) setHTTPShouldUsePipelining:(BOOL)a;
 - (void) setExpectedWorkload:(Q)a;
 - (void) _setTimeWindowDelay:(d)a;
 - (void) _setTimeWindowDuration:(d)a;
 - (void) setContentDispositionEncodingFallbackArray:(id)a;


@end
