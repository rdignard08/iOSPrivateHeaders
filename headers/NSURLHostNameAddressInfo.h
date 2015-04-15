
@interface NSURLHostNameAddressInfo : NSObject {

    double timestamp;
    ^{addrinfo=iiiiI*^{sockaddr}^{addrinfo}} addressInfo;
}
 + (id) addressInfoForHost:(id)a;
 + (void) asyncResolveWithCallbackClient:(id)a;

 - (double) _timestamp;
 - (id) _initWithAddressInfo:(^{addrinfo=iiiiI*^{sockaddr}^{addrinfo}})a ;
 - (^{addrinfo=iiiiI*^{sockaddr}^{addrinfo}}) addrinfo;
 - (void) dealloc;
 - (void) finalize;


@end
