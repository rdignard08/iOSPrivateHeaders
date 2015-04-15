
@interface UIKeyboardScheduledTask : NSObject {

    @? _task;
    d _timeInterval;
    @"UIKeyboardTaskQueue" _taskQueue;
    @"NSTimer" _timer;
    @"_UIActionWhenIdle" _deferredAction;
    @? _enqueuedTask;
}
@property (nonatomic, assign, readonly) NSNumber* task;
@property (nonatomic, assign, readonly) NSNumber* timeInterval;
@property (nonatomic, assign, readonly) NSNumber* repeats;
@property (nonatomic, assign, readonly) UIKeyboardTaskQueue* taskQueue;
@property (nonatomic, retain, readwrite) NSTimer* timer;
@property (nonatomic, retain, readwrite) _UIActionWhenIdle* deferredAction;
@property (nonatomic, copy, readwrite) NSNumber* enqueuedTask;

 - (id) timer;
 - (void) setTimer:(id)a;
 - (void) dealloc;
 - (void) invalidate;
 - (BOOL) isValid;
 - (d) timeInterval;
 - (void) timerFired:(id)a;
 - (id) taskQueue;
 - (id) initWithTaskQueue:(id)atimeInterval:(d)brepeats:(BOOL)ctask:(@?)d;
 - (id) deferredAction;
 - (@?) enqueuedTask;
 - (void) handleDeferredTimerFiredEvent;
 - (void) setDeferredAction:(id)a;
 - (void) setEnqueuedTask:(@?)a;
 - (BOOL) repeats;
 - (@?) task;
 - (void) resetTimer;


@end
