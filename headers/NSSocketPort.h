
@interface NSSocketPort : NSPort {

    ^v _receiver;
    id _connectors;
    ^v _loops;
    ^v _data;
    id _signature;
    id _delegate;
    id _lock;
    unsigned long long _maxSize;
    unsigned long long _useCount;
    unsigned long long _reserved;
}
 + (BOOL) sendBeforeTime:(double)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(unsigned int)freserved:(unsigned long long)g;
 + (void) _fixNSSocketPortLeak;
 + (void) initialize;

 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(unsigned long long)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(unsigned long long)bcomponents:(id)cfrom:(id)dreserved:(unsigned long long)e;
 - (void) addConnection:(id)atoRunLoop:(id)bforMode:(id)c;
 - (void) handlePortMessage:(id)a;
 - (BOOL) sendBeforeTime:(double)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(unsigned int)e;
 - (id) address;
 - (id) initWithTCPPort:(unsigned short)a;
 - (id) initWithProtocolFamily:(int)asocketType:(int)bprotocol:(int)caddress:(id)d;
 - (id) initRemoteWithProtocolFamily:(int)asocketType:(int)bprotocol:(int)caddress:(id)d;
 - (void) _incrementUseCount;
 - (void) handleConnDeath:(id)a;
 - (id) _initRemoteWithSignature:(id)a;
 - (id) _initWithRetainedCFSocket:(^{__CFSocket=})aprotocolFamily:(int)bsocketType:(int)cprotocol:(int)d;
 - (id) signature;
 - (^{__CFSocket=}) _sendingSocketForPort:(id)abeforeTime:(double)b;
 - (int) protocolFamily;
 - (int) socketType;
 - (int) socket;
 - (id) initRemoteWithTCPPort:(unsigned short)ahost:(id)b;
 - (id) initWithProtocolFamily:(int)asocketType:(int)bprotocol:(int)csocket:(int)d;
 - (void) _handleMessage:(^{__CFData=})afrom:(^{__CFData=})bsocket:(^{__CFSocket=})c;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
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
 - (int) protocol;


@end
