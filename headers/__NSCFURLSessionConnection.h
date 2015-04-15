
@protocol NSURLAuthenticationChallengeSender, NSCopying;
@interface __NSCFURLSessionConnection : NSObject <NSURLAuthenticationChallengeSender, NSCopying> {

    ^{SessionConnectionLoadable=^^?qqqq^^?^^?@} _loaderClient;
    ^{URLConnectionLoader=^^?^{__CFAllocator}^^?CC^{InterfaceRequiredForLoader}@^^?^^?^{PerformanceTiming}@q^{RedirectionRecorder}CCC@Cd^{URLProtocol}@C^{CoreSchedulingSet}ddQ{ConfigFlags=b1b1b1b1b1b1b1}CCCC} _loader;
    @"NSObject<OS_dispatch_queue>" _workQueue;
    BOOL _canceled;
    long long _suspended;
    @"NSURLResponse" _currentResponse;
    @"NSObject<OS_dispatch_data>" _pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    @"NSError" _pendingError;
    int _state;
    @"NSURLResponse" _cacheResponse;
    @"NSObject<OS_dispatch_data>" _cacheData;
    unsigned long long _cacheDataMax;
    long long _clientBufferLength;
    @"NSObject<OS_dispatch_data>" _sniffData;
    @"NSURLResponse" _sniffResponse;
    BOOL _isMixedReplace;
    BOOL _didCheckMixedReplace;
    @"NSURLSessionTask" _task;
    @"<SessionConnectionDelegate>" _delegate;
    @"NSObject<OS_dispatch_queue>" _delegateQueue;
}
@property (atomic, copy, readwrite) NSURLSessionTask* task;
@property (atomic, retain, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* delegateQueue;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) cancel;
 - (id) initWithTask:(id)adelegate:(id)bdelegateQueue:(id)c;
 - (void) useCredential:(id)aforAuthenticationChallenge:(id)b;
 - (void) suspend;
 - (void) setPoolPriority:(long long)a;
 - (void) setPriorityHint:(float)a;
 - (void) setTask:(id)a;
 - (id) delegateQueue;
 - (void) setDelegateQueue:(id)a;
 - (id) task;
 - (void) _tick;
 - (void) withWorkQueueAsync:(@?)a;
 - (void) withLoaderAsync:(@?)a;
 - (id) delegate;
 - (void) withLoaderOnQueue:(@?)a;
 - (void) _didFinishWithError:(id)a;
 - (void) _didReceiveResponse:(id)asniff:(BOOL)b;
 - (void) _didReceiveData:(id)a;
 - (void) _tick_sniffNow;
 - (void) _tossCache;
 - (void) afterDelegateWithTick:(@?)a;
 - (void) withDelegateAndPendingCompletionAsync:(@?)a;
 - (void) _cleanup;
 - (void) _task_sendFinish;
 - (void) _tick_initialize;
 - (void) _tick_running;
 - (void) _tick_finishing;
 - (void) _setupForCache:(BOOL)aexpectedLength:(long long)bresponse:(id)c;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a;
 - (void) cancelAuthenticationChallenge:(id)a;
 - (void) _didSendBodyData:({UploadProgressInfo=qqq})a;
 - (void) _didReceiveConnectionCacheKey:(^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})a;
 - (void) _willSendRequestForEstablishedConnection:(id)acompletion:(@?)b;
 - (void) _connectionIsWaitingWithReason:(long long)a;
 - (void) _conditionalRequirementsChanged:(BOOL)a;
 - (void) _redirectRequest:(id)aredirectResponse:(id)bcompletion:(@?)c;
 - (void) _didReceiveChallenge:(id)a;
 - (void) _needNewBodyStream;
 - (void) resume;


@end
