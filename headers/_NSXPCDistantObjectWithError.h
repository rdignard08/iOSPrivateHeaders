
@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject {

    @? _errorBlock;
}

 - (@?) errorBlock;
 - (void) setErrorBlock:(@?)a ;
 - (id) _initWithConnection:(id)a proxyNumber:(unsigned long long)b generationCount:(unsigned long long)c interface:(id)d error:(@?)e ;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;


@end
