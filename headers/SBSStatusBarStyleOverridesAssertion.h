
@interface SBSStatusBarStyleOverridesAssertion : NSObject {

    @"SBSStatusBarStyleOverridesAssertionData" _assertionData;
    @? _invalidationHandler;
    @"NSObject<OS_dispatch_queue>" _invalidationQueue;
    @"NSRecursiveLock" _invalidationLock;
}
@property (nonatomic, assign, readonly) NSNumber* statusBarStyleOverrides;
@property (nonatomic, assign, readonly) NSNumber* pid;
@property (nonatomic, assign, readonly) NSNumber* isExclusive;
@property (nonatomic, copy, readonly) NSString* uniqueIdentifier;
@property (nonatomic, copy, readwrite) NSNumber* invalidationHandler;
@property (nonatomic, retain, readwrite) NSNumber* invalidationQueue;
@property (nonatomic, retain, readwrite) SBSStatusBarStyleOverridesAssertionData* assertionData;
@property (nonatomic, retain, readwrite) NSRecursiveLock* invalidationLock;
 + (id) assertionWithStatusBarStyleOverrides:(i)aforPID:(i)bexclusive:(BOOL)c;
 + (id) backgroundLocationAssertionForPID:(i)a;

 - (@?) invalidationHandler;
 - (void) dealloc;
 - (void) invalidate;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) uniqueIdentifier;
 - (void) setInvalidationHandler:(@?)a;
 - (i) pid;
 - (id) initWithStatusBarStyleOverrides:(i)aforPID:(i)bexclusive:(BOOL)c;
 - (id) initWithStatusBarStyleOverridesAssertionData:(id)a;
 - (i) statusBarStyleOverrides;
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
