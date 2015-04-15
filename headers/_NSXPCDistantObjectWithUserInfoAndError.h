
@interface _NSXPCDistantObjectWithUserInfoAndError : _NSXPCDistantObjectWithError {

    NSDictionary* _userInfo;
}

 - (id) _initWithConnection:(id)a proxyNumber:(unsigned long long)b generationCount:(unsigned long long)c interface:(id)d userInfo:(id)e error:(@?)f ;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;


@end
