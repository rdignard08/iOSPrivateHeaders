
@protocol NSURLSessionTaskSubclass;
@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {

    BOOL _sentCancel;
    <NDBackgroundSessionProtocol>* _remoteSession;
    unsigned long long _ident;
    NSError* _immediateError;
}

 - (void) dealloc;
 - (void) _onqueue_suspend;
 - (void) _onqueue_resume;
 - (void) _onqueue_cancel;
 - (void) _onqueue_didFinishWithError:(id)a ;
 - (void) _onqueue_didReceiveChallenge:(id)a request:(id)b withCompletion:(@?)c ;
 - (void) _onqueue_didSendBodyBytes:(long long)a totalBytesSent:(long long)b totalBytesExpectedToSend:(long long)c ;
 - (void) _onqueue_willSendRequestForEstablishedConnection:(id)a withCompletion:(@?)b ;
 - (void) _onqueue_connectionWaitingWithReason:(long long)a ;
 - (void) _onqueue_adjustPoolPriority;
 - (void) _onqueue_disavow;
 - (void) _onqueue_adjustPriorityHint:(float)a ;
 - (id) _timingData;
 - (id) initWithTaskInfo:(id)a session:(id)b remoteSession:(id)c ident:(unsigned long long)d ;
 - (unsigned long long) ident;
 - (void) setRemoteSession:(id)a ;
 - (id) initWithSession:(id)a remoteSession:(id)b request:(id)c ident:(unsigned long long)d ;
 - (void) setImmediateError:(id)a ;
 - (void) _onqueue_didResume;
 - (void) _onqueue_connectionWaitingWithError:(id)a ;
 - (void) _onqueue_didReceiveResponse:(id)a ;
 - (id) initWithBackgroundTask:(id)a ;
 - (id) remoteSession;
 - (void) setTaskDescription:(id)a ;
 - (id) immediateError;


@end
