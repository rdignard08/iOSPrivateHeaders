
@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy {

    _UIViewServiceFencingController* _fencingController;
}
 + (id) proxyWithTarget:(id)afencingController:(id)bexportedProtocol:(id)c;

 - (void) dealloc;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (void) __endFencingMessagesForSendRight:(id)a ;
 - (void) __beginFencingMessagesWithSendRight:(id)a connectionCount:(unsigned long long)b ;


@end
