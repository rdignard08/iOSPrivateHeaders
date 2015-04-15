
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
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (long long) port;
 - (id) _monitors;
 - (id) delegate;
 - (id) addresses;
 - (^{__CFNetService=}) _internalNetService;
 - (void) _scheduleInDefaultRunLoopForMode:(id)a ;
 - (id) initWithDomain:(id)a type:(id)b name:(id)c port:(int)d ;
 - (id) type;
 - (id) normalizedType;
 - (BOOL) includesPeerToPeer;
 - (BOOL) _includesAWDL;
 - (void) _internal_publishWithOptions:(unsigned long long)a ;
 - (void) publishWithServer:(unsigned long long)a ;
 - (void) publishWithOptions:(unsigned long long)a ;
 - (void) resolveWithTimeout:(double)a ;
 - (id) initWithCFNetService:(^{__CFNetService=})a ;
 - (id) initWithDomain:(id)a type:(id)b name:(id)c ;
 - (void) setIncludesPeerToPeer:(BOOL)a ;
 - (void) _setIncludesAWDL:(BOOL)a ;
 - (void) _dispatchCallBackWithError:({?=qi})a ;
 - (BOOL) getInputStream:(o^@)a outputStream:(o^@)b ;
 - (void) resolve;
 - (void) startMonitoring;
 - (BOOL) setTXTRecordData:(id)a ;
 - (id) TXTRecordData;


@end
