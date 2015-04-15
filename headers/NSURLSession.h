
@interface NSURLSession : NSObject {

    BOOL _invalid;
    BOOL __isSharedSession;
    NSOperationQueue* _delegateQueue;
    <NSURLSessionDelegate>* _delegate;
    NSString* _sessionDescription;
    NSURLSessionConfiguration* __local_immutable_configuration;
    NSObject<OS_dispatch_queue>* _workQueue;
    NSOperationQueue* _realDelegateQueue;
    @? __connBlock;
}
@property (atomic, retain, readwrite) NSOperationQueue* delegateQueue;
@property (atomic, retain, readwrite) NSNumber* delegate;
@property (atomic, copy, readonly) NSURLSessionConfiguration* configuration;
@property (atomic, copy, readwrite) NSString* sessionDescription;
@property (atomic, retain, readwrite) NSURLSessionConfiguration* _local_immutable_configuration;
@property (atomic, assign, readwrite) NSNumber* workQueue;
@property (atomic, assign, readwrite) NSNumber* invalid;
@property (atomic, retain, readwrite) NSOperationQueue* realDelegateQueue;
@property (atomic, assign, readwrite) NSNumber* _isSharedSession;
@property (atomic, copy, readwrite) NSNumber* _connBlock;
 + (void) _releaseProcessAssertionForSessionIdentifier:(id)a;
 + (void) _sendPendingCallbacksForSessionIdentifier:(id)a;
 + (id) sharedSession;
 + (id) sessionWithConfiguration:(id)a;
 + (id) sessionWithConfiguration:(id)adelegate:(id)bdelegateQueue:(id)c;
 + (void) _getActiveSessionIdentifiersWithCompletionHandler:(@?)a;
 + (void) _obliterateAllBackgroundSessionsWithCompletionHandler:(@?)a;

 - (id) dataTaskWithURL:(id)a;
 - (void) getTasksWithCompletionHandler:(@?)a;
 - (void) invalidateAndCancel;
 - (void) finishTasksAndInvalidate;
 - (id) dataTaskWithRequest:(id)a;
 - (id) uploadTaskWithRequest:(id)afromFile:(id)b;
 - (id) uploadTaskWithRequest:(id)afromData:(id)b;
 - (id) uploadTaskWithStreamedRequest:(id)a;
 - (id) downloadTaskWithResumeData:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) can_delegate_task_needNewBodyStream;
 - (id) workQueue;
 - (void) delegate_task:(id)aneedNewBodyStream:(@?)b;
 - (id) initWithConfiguration:(id)adelegate:(id)bdelegateQueue:(id)c;
 - (void) addDelegateBlock:(@?)a;
 - (void) finalizeDelegateWithError:(id)a;
 - (id) _local_immutable_configuration;
 - (BOOL) _isSharedSession;
 - (BOOL) can_delegate_dataTask_didReceiveResponse;
 - (void) delegate_dataTask:(id)adidReceiveResponse:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_dataTask_didBecomeDownloadTask;
 - (BOOL) can_delegate_dataTask_didBecomeStreamTask;
 - (void) delegate_dataTask:(id)adidBecomeStreamTask:(id)bcompletionHandler:(@?)c;
 - (void) delegate_dataTask:(id)adidBecomeDownloadTask:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_task_willPerformHTTPRedirection;
 - (void) delegate_task:(id)awillPerformHTTPRedirection:(id)bnewRequest:(id)ccompletionHandler:(@?)d;
 - (BOOL) can_delegate_didReceiveChallenge;
 - (void) delegate_didReceiveChallenge:(id)acompletionHandler:(@?)b;
 - (BOOL) can_delegate_task_didReceiveChallenge;
 - (void) delegate_task:(id)adidReceiveChallenge:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_dataTask_willCacheResponse;
 - (void) delegate_dataTask:(id)awillCacheResponse:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_task_didCompleteWithError;
 - (void) delegate_task:(id)adidCompleteWithError:(id)b;
 - (BOOL) can_delegate_dataTask_didReceiveData;
 - (void) delegate_dataTask:(id)adidReceiveData:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_task_willSendRequestForEstablishedConnection;
 - (void) delegate_task:(id)a_willSendRequestForEstablishedConnection:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_task_isWaitingForConnectionWithReason;
 - (void) delegate_task:(id)aisWaitingForConnectionWithReason:(long long)b;
 - (BOOL) can_delegate_task_isWaitingForConnection;
 - (void) delegate_task_isWaitingForConnection:(id)a;
 - (BOOL) can_delegate_task_conditionalRequirementsChanged;
 - (void) delegate_task:(id)aconditionalRequirementsChanged:(BOOL)b;
 - (BOOL) can_delegate_task_didSendBodyData;
 - (void) delegate_task:(id)adidSendBodyData:(long long)btotalBytesSent:(long long)ctotalBytesExpectedToSend:(long long)d;
 - (BOOL) can_delegate_downloadTaskNeedsDownloadDirectory;
 - (id) delegate_downloadTaskNeedsDownloadDirectory:(id)a;
 - (BOOL) can_delegate_openFileAtPath;
 - (int) delegate_openFileAtPath:(id)amode:(int)b;
 - (BOOL) can_delegate_downloadTask_didWriteData;
 - (void) delegate_downloadTask:(id)adidWriteData:(long long)btotalBytesWritten:(long long)ctotalBytesExpectedToWrite:(long long)dcompletionHandler:(@?)e;
 - (BOOL) can_delegate_downloadTask_didFinishDownloadingToURL;
 - (void) delegate_downloadTask:(id)adidFinishDownloadingToURL:(id)bcompletionHandler:(@?)c;
 - (BOOL) can_delegate_downloadTask_didReceiveResponse;
 - (void) delegate_downloadTask:(id)adidReceiveResponse:(id)b;
 - (BOOL) can_delegate_downloadTask_didResumeAtOffset;
 - (void) delegate_downloadTask:(id)adidResumeAtOffset:(long long)bexpectedTotalBytes:(long long)c;
 - (id) delegateQueue;
 - (void) setDelegateQueue:(id)a;
 - (id) delegate;
 - (void) set_local_immutable_configuration:(id)a;
 - (id) configuration;
 - (BOOL) can_delegate_willRetryBackgroundDataTask;
 - (void) delegate_willRetryBackgroundDataTask:(id)awithError:(id)b;
 - (BOOL) can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
 - (void) delegate_AVAssetDownloadTask:(id)adidReceiveDownloadToken:(unsigned long long)b;
 - (BOOL) can_delegate_didFinishEventsForBackgroundURLSession;
 - (void) delegate_didFinishEventsForBackgroundURLSession;
 - (BOOL) can_delegate_task_isWaitingForConnectionWithError;
 - (void) delegate_task:(id)aisWaitingForConnectionWithError:(id)b;
 - (BOOL) can_delegate_AVAssetDownloadTask_didWriteData;
 - (void) delegate_AVAssetDownloadTask:(id)adidWriteData:(long long)btotalBytesWritten:(long long)ctotalBytesExpectedToWrite:(long long)d;
 - (void) setWorkQueue:(id)a;
 - (void) set_isSharedSession:(BOOL)a;
 - (void) setInvalid:(BOOL)a;
 - (id) dataTaskWithRequest:(id)acompletionHandler:(@?)b;
 - (id) downloadTaskWithRequest:(id)a;
 - (id) downloadTaskWithRequest:(id)acompletionHandler:(@?)b;
 - (BOOL) can_delegate_task_actually_didCompleteWithError;
 - (id) _copyConfiguration;
 - (BOOL) isBackgroundSession;
 - (void) resetWithCompletionHandler:(@?)a;
 - (void) flushWithCompletionHandler:(@?)a;
 - (id) dataTaskWithHTTPGetRequest:(id)acompletionHandler:(@?)b;
 - (id) dataTaskWithHTTPGetRequest:(id)a;
 - (id) dataTaskWithURL:(id)acompletionHandler:(@?)b;
 - (id) uploadTaskWithRequest:(id)afromFile:(id)bcompletionHandler:(@?)c;
 - (id) uploadTaskWithRequest:(id)afromData:(id)bcompletionHandler:(@?)c;
 - (id) _downloadTaskWithRequest:(id)adownloadFilePath:(id)b;
 - (id) downloadTaskWithURL:(id)a;
 - (id) downloadTaskWithURL:(id)acompletionHandler:(@?)b;
 - (id) downloadTaskWithResumeData:(id)acompletionHandler:(@?)b;
 - (id) _AVAssetDownloadTaskWithURL:(id)adestinationURL:(id)boptions:(id)c;
 - (id) streamTaskForHost:(id)aport:(long long)btls:(BOOL)c;
 - (id) streamTaskForHost:(id)aport:(long long)btls:(BOOL)ccompletionHandler:(@?)d;
 - (BOOL) can_delegate_streamTask_didCreateInputStreamoutputStream;
 - (void) delegate_streamTask:(id)adidCreateInputStream:(id)boutputStream:(id)ccompletionHandler:(@?)d;
 - (id) sessionDescription;
 - (void) setSessionDescription:(id)a;
 - (BOOL) invalid;
 - (id) realDelegateQueue;
 - (void) setRealDelegateQueue:(id)a;
 - (@?) _connBlock;
 - (void) set_connBlock:(@?)a;


@end
