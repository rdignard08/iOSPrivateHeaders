
@interface _UIDelayedPresentationContext : NSObject {

    BOOL _enableUserInteraction;
    q _reqcnt;
    @"NSInvocation" _presentInvocation;
    @? _cancellationHandler;
    d _timeout;
    @"NSObject<OS_dispatch_source>" _timerSource;
}
@property (nonatomic, copy, readwrite) NSNumber* cancellationHandler;
@property (nonatomic, retain, readwrite) NSInvocation* presentInvocation;

 - (void) setCancellationHandler:(@?)a;
 - (@?) cancellationHandler;
 - (void) dealloc;
 - (id) invocationTarget;
 - (void) setPresentInvocation:(id)a;
 - (id) delayingController;
 - (id) initWithTimeout:(d)acancellationHandler:(@?)b;
 - (q) requestCount;
 - (q) decrementRequestCount;
 - (q) incrementRequestCount;
 - (void) cancelDelayedPresentation:(BOOL)a;
 - (void) beginDelayedPresentation;
 - (void) finishDelayedPresentation:(id)a;
 - (id) presentInvocation;


@end
