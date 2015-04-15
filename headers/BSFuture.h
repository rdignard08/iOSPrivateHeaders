
@protocol BSFuture;
@interface BSFuture : NSObject <BSFuture> {

    NSConditionLock* _stateLock;
    id _result;
    NSError* _error;
    NSMutableArray* _completionBlocks;
}
@property (atomic, assign, readonly, getter=isFinished) NSNumber* finished;
@property (atomic, assign, readonly, getter=isCancelled) NSNumber* cancelled;

 - (BOOL) isCancelled;
 - (BOOL) isFinished;
 - (void) dealloc;
 - (id) init;
 - (BOOL) cancel;
 - (id) resultBeforeDate:(id)a error:(^@)b ;
 - (BOOL) _nts_isFinished;
 - (void) _flushCompletionBlocks;
 - (void) didCancel;
 - (BOOL) finishWithResult:(id)a error:(id)b ;
 - (void) _addCompletionBlock:(@?)a ;
 - (id) result:(^@)a ;
 - (void) addSuccessBlock:(@?)a ;
 - (void) addFailureBlock:(@?)a ;
 - (BOOL) finishWithResult:(id)a ;
 - (BOOL) finishWithError:(id)a ;


@end
