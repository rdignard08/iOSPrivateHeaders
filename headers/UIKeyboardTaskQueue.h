
@interface UIKeyboardTaskQueue : NSObject {

    BOOL _executingOnMainThread;
    NSConditionLock* _lock;
    NSMutableArray* _tasks;
    NSMutableArray* _deferredTasks;
    UIKeyboardTaskExecutionContext* _executionContext;
    @? _mainThreadContinuation;
}
@property (nonatomic, retain, readwrite) UIKeyboardTaskExecutionContext* executionContext;

 - (void) dealloc;
 - (void) lock;
 - (void) unlock;
 - (void) performTask:(@?)a;
 - (BOOL) isMainThreadExecutingTask;
 - (void) waitUntilAllTasksAreFinished;
 - (void) addTask:(@?)a;
 - (void) addDeferredTask:(@?)a;
 - (id) scheduleTask:(@?)atimeInterval:(double)brepeats:(BOOL)c;
 - (id) executionContext;
 - (void) setExecutionContext:(id)a;
 - (void) finishExecution;
 - (void) performTaskOnMainThread:(@?)awaitUntilDone:(BOOL)b;
 - (void) continueExecutionOnMainThread;
 - (BOOL) tryLockWhenReadyForMainThread;
 - (void) performDeferredTaskIfIdle;
 - (void) lockWhenReadyForMainThread;
 - (void) promoteDeferredTaskIfIdle;
 - (id) init;


@end
