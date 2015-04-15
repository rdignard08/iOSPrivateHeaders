
@interface NSSocketPort : NSPort {

    ^v _receiver;
    id _connectors;
    ^v _loops;
    ^v _data;
    id _signature;
    id _delegate;
    id _lock;
    Q _maxSize;
    Q _useCount;
    Q _reserved;
}
 + (BOOL) sendBeforeTime:(d)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(I)freserved:(Q)g;
 + (void) _fixNSSocketPortLeak;
 + (void) initialize;

 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(Q)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(Q)bcomponents:(id)cfrom:(id)dreserved:(Q)e;
 - (void) addConnection:(id)atoRunLoop:(id)bforMode:(id)c;
 - (void) handlePortMessage:(id)a;
 - (BOOL) sendBeforeTime:(d)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(I)e;
 - (id) address;
 - (id) initWithTCPPort:(S)a;
 - (id) initWithProtocolFamily:(i)asocketType:(i)bprotocol:(i)caddress:(id)d;
 - (id) initRemoteWithProtocolFamily:(i)asocketType:(i)bprotocol:(i)caddress:(id)d;
 - (void) _incrementUseCount;
 - (void) handleConnDeath:(id)a;
 - (id) _initRemoteWithSignature:(id)a;
 - (id) _initWithRetainedCFSocket:(^{__CFSocket=})aprotocolFamily:(i)bsocketType:(i)cprotocol:(i)d;
 - (id) signature;
 - (^{__CFSocket=}) _sendingSocketForPort:(id)abeforeTime:(d)b;
 - (i) protocolFamily;
 - (i) socketType;
 - (i) socket;
 - (id) initRemoteWithTCPPort:(S)ahost:(id)b;
 - (id) initWithProtocolFamily:(i)asocketType:(i)bprotocol:(i)csocket:(i)d;
 - (void) _handleMessage:(^{__CFData=})afrom:(^{__CFData=})bsocket:(^{__CFSocket=})c;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) invalidate;
 - (BOOL) isValid;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (id) init;
 - (id) delegate;
 - (i) protocol;


@end
