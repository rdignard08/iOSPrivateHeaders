
@interface BSSerializedRequestQueue : NSObject {

    NSObject<OS_dispatch_queue>* _serialQueue;
    NSObject<OS_dispatch_queue>* _workQueue;
    @? _conditionBlock;
}
@property (nonatomic, retain, readonly) NSNumber* serialQueue;

 - (void) dealloc;
 - (void) _enqueueSerialConditionalRequest:(@?)a ;
 - (id) initWithSerialQueue:(id)a workQueue:(id)b executionCondition:(@?)c ;
 - (void) enqueueRequest:(@?)a ;
 - (void) enqueueAsyncRequest:(@?)a ;
 - (id) serialQueue;


@end
