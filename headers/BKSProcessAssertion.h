
@protocol BKSProcessAssertionClientHandler;
@interface BKSProcessAssertion : NSObject <BKSProcessAssertionClientHandler> {

    BSSignal* _invalidationSignal;
    BOOL _acquiring;
    BOOL _acquired;
    int _pid;
    NSString* _identifier;
    NSString* _bundleIdentifier;
    NSString* _name;
    unsigned int _flags;
    unsigned int _reason;
    @? _invalidationHandler;
    @? _acquisitionHandler;
    BKSProcessAssertionClient* _client;
    NSObject<OS_dispatch_queue>* _clientQueue;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, assign, readwrite) NSNumber* flags;
@property (nonatomic, assign, readonly) NSNumber* reason;
@property (nonatomic, assign, readonly) NSNumber* valid;
@property (nonatomic, copy, readwrite) NSNumber* invalidationHandler;
 + (id) NameForReason:(unsigned int)a;

 - (unsigned int) flags;
 - (@?) invalidationHandler;
 - (void) dealloc;
 - (void) invalidate;
 - (id) name;
 - (unsigned int) reason;
 - (id) init;
 - (void) setInvalidationHandler:(@?)a;
 - (void) setName:(id)a;
 - (BOOL) valid;
 - (void) setFlags:(unsigned int)a;
 - (id) initWithPID:(int)aflags:(unsigned int)breason:(unsigned int)cname:(id)dwithHandler:(@?)e;
 - (void) _clientQueue_setAcquisitionHandler:(@?)a;
 - (void) _clientQueue_acquireAssertion;
 - (void) _clientQueue_updateAssertion;
 - (void) _clientQueue_invalidate:(BOOL)a;
 - (void) setReason:(unsigned int)a;
 - (void) _clientQueue_notifyAssertionAcquired:(BOOL)a;
 - (void) assertionDidInvalidate;
 - (id) initWithBundleIdentifier:(id)aflags:(unsigned int)breason:(unsigned int)cname:(id)dwithHandler:(@?)e;
 - (@?) acquisitionHandler;
 - (void) setAcquisitionHandler:(@?)a;


@end
