
@protocol NSURLSessionTaskSubclass;
@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {

    BOOL _sentCancel;
    @"<NDBackgroundSessionProtocol>" _remoteSession;
    Q _ident;
    @"NSError" _immediateError;
}

 - (void) dealloc;
 - (void) _onqueue_suspend;
 - (void) _onqueue_resume;
 - (void) _onqueue_cancel;
 - (void) _onqueue_didFinishWithError:(id)a;
 - (void) _onqueue_didReceiveChallenge:(id)arequest:(id)bwithCompletion:(@?)c;
 - (void) _onqueue_didSendBodyBytes:(q)atotalBytesSent:(q)btotalBytesExpectedToSend:(q)c;
 - (void) _onqueue_willSendRequestForEstablishedConnection:(id)awithCompletion:(@?)b;
 - (void) _onqueue_connectionWaitingWithReason:(q)a;
 - (void) _onqueue_adjustPoolPriority;
 - (void) _onqueue_disavow;
 - (void) _onqueue_adjustPriorityHint:(f)a;
 - (id) _timingData;
 - (id) initWithTaskInfo:(id)asession:(id)bremoteSession:(id)cident:(Q)d;
 - (Q) ident;
 - (void) setRemoteSession:(id)a;
 - (id) initWithSession:(id)aremoteSession:(id)brequest:(id)cident:(Q)d;
 - (void) setImmediateError:(id)a;
 - (void) _onqueue_didResume;
 - (void) _onqueue_connectionWaitingWithError:(id)a;
 - (void) _onqueue_didReceiveResponse:(id)a;
 - (id) initWithBackgroundTask:(id)a;
 - (id) remoteSession;
 - (void) setTaskDescription:(id)a;
 - (id) immediateError;


@end
