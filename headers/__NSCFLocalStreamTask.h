
@protocol NSURLSessionStreamTaskSubclass;
@interface __NSCFLocalStreamTask : __NSCFLocalSessionTask <NSURLSessionStreamTaskSubclass> {

    ^{__CFWriteStream=} _sinkForResponseBytes;
    @"NSObject<OS_dispatch_data>" _buffer;
    @? _streamCompletion;
}
 + (id) rawRequestForHost:(id)aport:(long long)btls:(BOOL)c;

 - (void) setStreamCompletion:(@?)a;
 - (void) _onqueue_suspend;
 - (id) initWithTask:(id)a;
 - (void) _onqueue_resume;
 - (void) _task_onqueue_didFinish;
 - (void) _onqueue_cancel;
 - (void) _task_onqueue_didReceiveDispatchData:(id)acompletionHandler:(@?)b;
 - (void) _onqueue_adjustPoolPriority;
 - (void) _onqueue_adjustPriorityHint:(float)a;
 - (void) _onqueue_issueWrite;
 - (@?) streamCompletion;
 - (void) _onqueue_newStreams;
 - (void) _onqueue_createBoundStreams;


@end
