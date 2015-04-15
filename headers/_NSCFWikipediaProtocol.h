
@interface _NSCFWikipediaProtocol : NSURLProtocol {

    r^v _instance;
    r^{CFURLProtocolInstanceCallbacks=q^?^?^?^?^?^?^?^?^?^?^?^?^v} _callbacks;
}
 + (id) canonicalRequestForRequest:(id)a;
 + (BOOL) requestIsCacheEquivalent:(id)atoRequest:(id)b;
 + (BOOL) canInitWithRequest:(id)a;

 - (void) dealloc;
 - (void) startLoading;
 - (void) stopLoading;
 - (id) initWithRequest:(id)acachedResponse:(id)bclient:(id)c;
 - (void) scheduleOnRunloop:(^{__CFRunLoop=})amode:(^{__CFString=})b;
 - (void) unscheduleOnRunloop:(^{__CFRunLoop=})amode:(^{__CFString=})b;


@end
