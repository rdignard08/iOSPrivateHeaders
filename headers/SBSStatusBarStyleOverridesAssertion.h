
@interface SBSStatusBarStyleOverridesAssertion : NSObject {

    SBSStatusBarStyleOverridesAssertionData* _assertionData;
    @? _invalidationHandler;
    NSObject<OS_dispatch_queue>* _invalidationQueue;
    NSRecursiveLock* _invalidationLock;
}
@property (nonatomic, assign, readonly) NSNumber* statusBarStyleOverrides;
@property (nonatomic, assign, readonly) NSNumber* pid;
@property (nonatomic, assign, readonly) NSNumber* isExclusive;
@property (nonatomic, copy, readonly) NSString* uniqueIdentifier;
@property (nonatomic, copy, readwrite) NSNumber* invalidationHandler;
@property (nonatomic, retain, readwrite) NSNumber* invalidationQueue;
@property (nonatomic, retain, readwrite) SBSStatusBarStyleOverridesAssertionData* assertionData;
@property (nonatomic, retain, readwrite) NSRecursiveLock* invalidationLock;
 + (id) assertionWithStatusBarStyleOverrides:(int)aforPID:(int)bexclusive:(BOOL)c;
 + (id) backgroundLocationAssertionForPID:(int)a;

 - (@?) invalidationHandler;
 - (void) dealloc;
 - (void) invalidate;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) uniqueIdentifier;
 - (void) setInvalidationHandler:(@?)a;
 - (int) pid;
 - (id) initWithStatusBarStyleOverrides:(int)aforPID:(int)bexclusive:(BOOL)c;
 - (id) initWithStatusBarStyleOverridesAssertionData:(id)a;
 - (int) statusBarStyleOverrides;
 - (BOOL) isExclusive;
 - (void) _callInvalidationHandler;
 - (id) assertionData;
 - (void) acquireWithHandler:(@?)aonQueue:(id)b;
 - (id) invalidationQueue;
 - (void) setInvalidationQueue:(id)a;
 - (void) invalidateFromServer;
 - (void) setAssertionData:(id)a;
 - (id) invalidationLock;
 - (void) setInvalidationLock:(id)a;


@end
