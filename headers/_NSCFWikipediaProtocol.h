
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
 - (id) initWithRequest:(id)a cachedResponse:(id)b client:(id)c ;
 - (void) scheduleOnRunloop:(^{__CFRunLoop=})a mode:(^{__CFString=})b ;
 - (void) unscheduleOnRunloop:(^{__CFRunLoop=})a mode:(^{__CFString=})b ;


@end
