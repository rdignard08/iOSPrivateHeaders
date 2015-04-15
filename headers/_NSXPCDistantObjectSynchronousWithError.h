
@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {

    double _timeout;
}

 - (id) _initWithConnection:(id)a proxyNumber:(unsigned long long)b generationCount:(unsigned long long)c interface:(id)d error:(@?)e timeout:(double)f ;
 - (void) setTimeout:(double)a ;
 - (void) forwardInvocation:(id)a ;
 - (double) timeout;


@end
