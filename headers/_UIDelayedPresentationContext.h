
@interface _UIDelayedPresentationContext : NSObject {

    BOOL _enableUserInteraction;
    long long _reqcnt;
    NSInvocation* _presentInvocation;
    @? _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source>* _timerSource;
}
@property (nonatomic, copy, readwrite) NSNumber* cancellationHandler;
@property (nonatomic, retain, readwrite) NSInvocation* presentInvocation;

 - (void) setCancellationHandler:(@?)a ;
 - (@?) cancellationHandler;
 - (void) dealloc;
 - (id) invocationTarget;
 - (void) setPresentInvocation:(id)a ;
 - (id) delayingController;
 - (id) initWithTimeout:(double)a cancellationHandler:(@?)b ;
 - (long long) requestCount;
 - (long long) decrementRequestCount;
 - (long long) incrementRequestCount;
 - (void) cancelDelayedPresentation:(BOOL)a ;
 - (void) beginDelayedPresentation;
 - (void) finishDelayedPresentation:(id)a ;
 - (id) presentInvocation;


@end
