
@protocol NSStreamDelegate;
@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

    NSInputStream* _requestBodyStream;
    NSInputStream* _initialStream;
    NSObject<OS_dispatch_queue>* _writeQueue;
    NSObject<OS_dispatch_io>* _pipeIO;
    unsigned long long _bytesRead;
    BOOL _streamBased;
    NSFileHandle* _readHandle;
}

 - (void) dealloc;
 - (BOOL) isKindOfClass:(Class)a ;
 - (void) stream:(id)a handleEvent:(unsigned long long)b ;
 - (void) _onqueue_didFinishWithError:(id)a ;
 - (void) _onqueue_didReceiveResponse:(id)a redirectRequest:(id)b withCompletion:(@?)c ;
 - (void) _onqueue_needNewBodyStream:(BOOL)a withCompletion:(@?)b ;
 - (void) _onqueue_willSendRequestForEstablishedConnection:(id)a withCompletion:(@?)b ;
 - (id) initWithSession:(id)a remoteSession:(id)b request:(id)c ident:(unsigned long long)d ;
 - (void) _onqueue_willBeRetried;
 - (void) _onqueue_didReceiveResponse:(id)a withCompletion:(@?)b ;
 - (void) _onqueue_didReceiveData:(id)a withCompletion:(@?)b ;
 - (void) captureStream:(id)a ;
 - (void) _onqueue_openStream;
 - (void) finishStream:(BOOL)a ;
 - (void) readFromStream;
 - (id) readHandle;
 - (BOOL) isStreamBased;


@end
