
@protocol NSStreamDelegate;
@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

    @"NSInputStream" _requestBodyStream;
    @"NSInputStream" _initialStream;
    @"NSObject<OS_dispatch_queue>" _writeQueue;
    @"NSObject<OS_dispatch_io>" _pipeIO;
    Q _bytesRead;
    BOOL _streamBased;
    @"NSFileHandle" _readHandle;
}

 - (void) dealloc;
 - (BOOL) isKindOfClass:(Class)a;
 - (void) stream:(id)ahandleEvent:(Q)b;
 - (void) _onqueue_didFinishWithError:(id)a;
 - (void) _onqueue_didReceiveResponse:(id)aredirectRequest:(id)bwithCompletion:(@?)c;
 - (void) _onqueue_needNewBodyStream:(BOOL)awithCompletion:(@?)b;
 - (void) _onqueue_willSendRequestForEstablishedConnection:(id)awithCompletion:(@?)b;
 - (id) initWithSession:(id)aremoteSession:(id)brequest:(id)cident:(Q)d;
 - (void) _onqueue_willBeRetried;
 - (void) _onqueue_didReceiveResponse:(id)awithCompletion:(@?)b;
 - (void) _onqueue_didReceiveData:(id)awithCompletion:(@?)b;
 - (void) captureStream:(id)a;
 - (void) _onqueue_openStream;
 - (void) finishStream:(BOOL)a;
 - (void) readFromStream;
 - (id) readHandle;
 - (BOOL) isStreamBased;


@end
