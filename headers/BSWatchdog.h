
@interface BSWatchdog : NSObject {

    @"<BSWatchdogDelegate>" _delegate;
    @"<BSWatchdogProviding>" _provider;
    @"NSObject<OS_dispatch_queue>" _queue;
    d _timeout;
    @"BSTimer" _timer;
    @? _completion;
    @"NSDate" _startDate;
    BOOL _invalidated;
    BOOL _completed;
    BOOL _hasFired;
}
@property (nonatomic, retain, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readonly) NSNumber* provider;
@property (nonatomic, retain, readonly) NSNumber* queue;
@property (nonatomic, assign, readonly) NSNumber* timeout;
@property (nonatomic, retain, readonly) NSDate* startDate;
@property (nonatomic, assign, readonly, hasFired) NSNumber* fired;

 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (void) start;
 - (id) queue;
 - (id) initWithProvider:(id)aqueue:(id)bcompletion:(@?)c;
 - (id) initWithTimeout:(d)aqueue:(id)bcompletion:(@?)c;
 - (void) _startWatchdogTimer;
 - (void) _completeWatchdogAfterFiring:(BOOL)a;
 - (void) _invalidateTimer;
 - (void) _stageOneTimerFired;
 - (void) _setupTimerWithInterval:(d)ahandler:(@?)b;
 - (void) _stageTwoTimerFired;
 - (void) _watchdogTimerFired;
 - (id) initWithProvider:(id)aqueue:(id)b;
 - (id) initWithTimeout:(d)aqueue:(id)b;
 - (id) provider;
 - (id) startDate;
 - (BOOL) hasFired;
 - (d) timeout;


@end
