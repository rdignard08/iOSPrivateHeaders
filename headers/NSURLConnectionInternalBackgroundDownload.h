
@protocol NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate;
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {

    ^{__CFRunLoopSource=} _source;
    NSMutableArray* _pendingOps;
    NSCountedSet* _runloops;
    SSDownloadHandler* _handler;
    NSAsyncSSDownloadManager* _manager;
    long long _downloadIdent;
    long long _ctLast;
    BOOL _terminated;
    NSTimer* _deferredStartTimer;
}
 + (id) sharedDownloadManagerForMediaKind:(id)apersistenceIdentifier:(id)b;
 + (void) _enableLogging;

 - (id) description;
 - (void) dealloc;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) cancel;
 - (void) useCredential:(id)a forAuthenticationChallenge:(id)b ;
 - (void) performDefaultHandlingForAuthenticationChallenge:(id)a ;
 - (void) setDelegateQueue:(id)a ;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a ;
 - (void) cancelAuthenticationChallenge:(id)a ;
 - (void) rejectProtectionSpaceAndContinueWithChallenge:(id)a ;
 - (id) initWithInfo:(r^{InternalInit=@@@@Bq})a ;
 - (void) start;
 - (void) unscheduleFromRunLoop:(id)a forMode:(id)b ;
 - (void) _updateDownloadState:(id)a ;
 - (void) _invokeInvocation:(id)a withConnection:(id)b ;
 - (void) _preTerminalInvocation:(id)a ;
 - (void) _postTerminalInvocation:(id)a ;
 - (void) _invalidate;
 - (void) _sendTerminalErrorToDelegate:(id)a ;
 - (void) setHandlerForDownload:(id)a completionBlock:(@?)b ;
 - (void) _managerFailedToStartInTime;
 - (void) _createNewDownload;
 - (void) _updateClientWithCurrentWrites:(id)a ;
 - (void) _sendTerminalDidFinishToDelegate:(id)a ;
 - (void) downloadHandlerDidDisconnect:(id)a ;
 - (void) downloadHandler:(id)a cancelSession:(id)b ;
 - (BOOL) downloadHandler:(id)a pauseSession:(id)b ;
 - (void) downloadHandler:(id)a handleAuthenticationSession:(id)b ;
 - (void) invokeForDelegate:(@?)a ;
 - (void) _sourcePerform;
 - (long long) _getDownloadIdent;


@end
