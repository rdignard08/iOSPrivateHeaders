
@interface NSNetService : NSObject {

    id _netService;
    id _delegate;
    id _reserved;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* includesPeerToPeer;
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSString* type;
@property (atomic, copy, readonly) NSString* domain;
@property (atomic, copy, readonly) NSString* hostName;
@property (atomic, copy, readonly) NSArray* addresses;
@property (atomic, assign, readonly) NSNumber* port;
 + (id) dictionaryFromTXTRecordData:(id)a;
 + (id) dataFromTXTRecordDictionary:(id)a;

 - (void) stopMonitoring;
 - (id) hostName;
 - (void) stop;
 - (void) publish;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) domain;
 - (id) name;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (q) port;
 - (id) _monitors;
 - (id) delegate;
 - (id) addresses;
 - (^{__CFNetService=}) _internalNetService;
 - (void) _scheduleInDefaultRunLoopForMode:(id)a;
 - (id) initWithDomain:(id)atype:(id)bname:(id)cport:(i)d;
 - (id) type;
 - (id) normalizedType;
 - (BOOL) includesPeerToPeer;
 - (BOOL) _includesAWDL;
 - (void) _internal_publishWithOptions:(Q)a;
 - (void) publishWithServer:(Q)a;
 - (void) publishWithOptions:(Q)a;
 - (void) resolveWithTimeout:(d)a;
 - (id) initWithCFNetService:(^{__CFNetService=})a;
 - (id) initWithDomain:(id)atype:(id)bname:(id)c;
 - (void) setIncludesPeerToPeer:(BOOL)a;
 - (void) _setIncludesAWDL:(BOOL)a;
 - (void) _dispatchCallBackWithError:({?=qi})a;
 - (BOOL) getInputStream:(o^@)aoutputStream:(o^@)b;
 - (void) resolve;
 - (void) startMonitoring;
 - (BOOL) setTXTRecordData:(id)a;
 - (id) TXTRecordData;


@end
