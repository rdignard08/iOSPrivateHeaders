
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

 - (BOOL) sendBeforeDate:(id)a components:(id)b from:(id)c reserved:(unsigned long long)d ;
 - (BOOL) sendBeforeDate:(id)a msgid:(unsigned long long)b components:(id)c from:(id)d reserved:(unsigned long long)e ;
 - (void) addConnection:(id)a toRunLoop:(id)b forMode:(id)c ;
 - (void) handlePortMessage:(id)a ;
 - (BOOL) sendBeforeTime:(double)a streamData:(^v)b components:(id)c from:(id)d msgid:(unsigned int)e ;
 - (id) address;
 - (id) initWithTCPPort:(unsigned short)a ;
 - (id) initWithProtocolFamily:(int)a socketType:(int)b protocol:(int)c address:(id)d ;
 - (id) initRemoteWithProtocolFamily:(int)a socketType:(int)b protocol:(int)c address:(id)d ;
 - (void) _incrementUseCount;
 - (void) handleConnDeath:(id)a ;
 - (id) _initRemoteWithSignature:(id)a ;
 - (id) _initWithRetainedCFSocket:(^{__CFSocket=})a protocolFamily:(int)b socketType:(int)c protocol:(int)d ;
 - (id) signature;
 - (^{__CFSocket=}) _sendingSocketForPort:(id)a beforeTime:(double)b ;
 - (int) protocolFamily;
 - (int) socketType;
 - (int) socket;
 - (id) initRemoteWithTCPPort:(unsigned short)a host:(id)b ;
 - (id) initWithProtocolFamily:(int)a socketType:(int)b protocol:(int)c socket:(int)d ;
 - (void) _handleMessage:(^{__CFData=})a from:(^{__CFData=})b socket:(^{__CFSocket=})c ;
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
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (id) init;
 - (id) delegate;
 - (int) protocol;


@end
