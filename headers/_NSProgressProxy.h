
@interface _NSProgressProxy : NSProgress {

    <NSProgressPublisher> _forwarder;
    BOOL _isOld;
    @? _unpublishingHandler;
}

 - (void) setPausable:(BOOL)a;
 - (void) setCancellable:(BOOL)a;
 - (void) setPrioritizable:(BOOL)a;
 - (void) setUserInfoObject:(id)aforKey:(id)b;
 - (void) setPrioritizationHandler:(@?)a;
 - (void) setCompletedUnitCount:(long long)a;
 - (void) setTotalUnitCount:(long long)a;
 - (void) becomeCurrentWithPendingUnitCount:(long long)a;
 - (void) resignCurrent;
 - (void) setCancellationHandler:(@?)a;
 - (void) setPausingHandler:(@?)a;
 - (void) pause;
 - (void) prioritize;
 - (void) setLocalizedDescription:(id)a;
 - (void) setKind:(id)a;
 - (void) publish;
 - (void) unpublish;
 - (void) acknowledgeWithSuccess:(BOOL)a;
 - (BOOL) isOld;
 - (void) _acknowledgeWithSuccess:(BOOL)a;
 - (id) _initWithForwarder:(id)avalues:(id)bisOld:(BOOL)c;
 - (void) _invokePublishingHandler:(@?)a;
 - (void) _invokeUnpublishingHandler;
 - (void) dealloc;
 - (void) cancel;


@end
