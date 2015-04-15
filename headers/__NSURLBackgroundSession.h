
@protocol NDBackgroundSessionClient, NSURLSessionSubclass;
@interface __NSURLBackgroundSession : NSURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {

    Q _identSeed;
    @"<NDBackgroundSessionProtocol>" _remoteSession;
    @"NSXPCConnection" _xpcConn;
    @"NSMutableDictionary" _tasks;
    @"NSMutableArray" _taskIDsToFailOnReconnection;
    @"NSObject<OS_dispatch_queue>" _invalidateQueue;
    @? _invalidateCallback;
    @"NSString" _appWakeUUID;
    @"NSURL" _downloadDirectory;
    BOOL _isPrivileged;
    BOOL _isInvalid;
}

 - (void) dealloc;
 - (void) _onqueue_invokeInvalidateCallback;
 - (id) copyTasks;
 - (id) initWithConfiguration:(id)adelegate:(id)bdelegateQueue:(id)c;
 - (void) _onqueue_invalidateSession:(BOOL)awithQueue:(id)bcompletion:(@?)c;
 - (id) dataTaskForRequest:(id)acompletion:(@?)b;
 - (id) uploadTaskForRequest:(id)auploadFile:(id)bbodyData:(id)ccompletion:(@?)d;
 - (id) downloadTaskForRequest:(id)adownloadFilePath:(id)bresumeData:(id)ccompletion:(@?)d;
 - (id) _AVAssetDownloadTaskForURL:(id)adestinationURL:(id)boptions:(id)c;
 - (id) _streamTaskForHost:(id)aport:(q)btls:(BOOL)ccompletionHandler:(@?)d;
 - (void) _onqueue_flushWithCompletionHandler:(@?)a;
 - (void) _onqueue_completeInvalidation:(BOOL)a;
 - (void) _onqueue_resetStorageWithCompletionHandler:(@?)a;
 - (void) _onqueue_getTasksWithCompletionHandler:(@?)a;
 - (id) backgroundDownloadsDirectory;
 - (id) cachesDirectory;
 - (void) setupXPCConnection;
 - (void) setupBackgroundSession;
 - (void) sendInvalidationRequest;
 - (void) cleanupConfig;
 - (void) wentToBackground:(id)a;
 - (void) cameIntoForeground:(id)a;
 - (void) recreateExistingTasks:(id)a;
 - (void) failDisconnectedTasks;
 - (void) _onqueue_retryDataTaskWithIdentifier:(Q)a;
 - (id) taskForIdentifier:(Q)a;
 - (id) disconnectedErrorWithURL:(id)a;
 - (id) _onqueue_dataTaskForRequest:(id)acompletion:(@?)b;
 - (void) performBlockOnQueueAndRethrowExceptions:(@?)a;
 - (void) validateSerializabilityForRequest:(id)acompletion:(id)b;
 - (id) _onqueue_dummyTaskForClass:(Class)awithError:(id)b;
 - (id) requestWithCookiesApplied:(id)a;
 - (id) placeholderErrorWithURL:(id)a;
 - (id) _onqueue_uploadTaskForRequest:(id)auploadFile:(id)bbodyData:(id)ccompletion:(@?)d;
 - (void) validateUploadFile:(id)a;
 - (id) _onqueue_downloadTaskForRequest:(id)aresumeData:(id)bcompletion:(@?)c;
 - (id) backgroundResumeDataFromClientResumeData:(id)a;
 - (id) _downloadTaskForResumeData:(id)a;
 - (id) _downloadTaskForRequest:(id)a;
 - (id) _onqueue_AVAssetDownloadTaskForURL:(id)adestinationURL:(id)boptions:(id)c;
 - (id) connectionLostErrorWithURL:(id)a;
 - (void) setCookiesFromResponse:(id)aforOriginalRequest:(id)b;
 - (id) appWakeUUID;
 - (void) setAppWakeUUID:(id)a;
 - (void) backgroundTaskDidResume:(Q)a;
 - (void) backgroundTaskDidSuspend:(Q)a;
 - (void) backgroundTask:(Q)adidReceiveChallenge:(id)breply:(@?)c;
 - (void) backgroundTask:(Q)awillPerformHTTPRedirection:(id)bwithNewRequest:(id)creply:(@?)d;
 - (void) backgroundTask:(Q)a_willSendRequestForEstablishedConnection:(id)breply:(@?)c;
 - (void) backgroundTaskHasConnectionWaiting:(Q)a;
 - (void) backgroundTask:(Q)ahasConnectionWaitingWithReason:(q)b;
 - (void) backgroundTask:(Q)ahasConnectionWaitingWithError:(id)b;
 - (void) backgroundTask:(Q)adidReceiveResponse:(id)btimingData:(id)c;
 - (void) backgroundTask:(Q)adidReceiveResponse:(id)btimingData:(id)creply:(@?)d;
 - (void) backgroundTask:(Q)adidSendBodyData:(q)btotalBytesSent:(q)ctotalBytesExpectedToSend:(q)d;
 - (void) backgroundTask:(Q)aneedNewBodyStream:(BOOL)bwithReply:(@?)c;
 - (void) backgroundTask:(Q)adidCompleteWithError:(id)btimingData:(id)creply:(@?)d;
 - (void) backgroundDataTask:(Q)adidReceiveData:(id)bwithReply:(@?)c;
 - (void) backgroundDataTaskDidBecomeDownloadTask:(Q)a;
 - (void) willRetryBackgroundDataTask:(Q)awithError:(id)btimingData:(id)c;
 - (void) backgroundDownloadTask:(Q)adidWriteData:(q)btotalBytesWritten:(q)ctotalBytesExpectedToWrite:(q)d;
 - (void) backgroundDownloadTask:(Q)adidResumeAtOffset:(q)bexpectedTotalBytes:(q)c;
 - (void) backgroundDownloadTask:(Q)adidFinishDownloadingToURL:(id)breply:(@?)c;
 - (void) openFileAtPath:(id)amode:(i)bwithReply:(@?)c;
 - (void) backgroundAVAssetDownloadTaskDidUpdateProgress:(Q)atotalBytesWritten:(Q)btotalBytesExpectedToWrite:(Q)c;
 - (void) backgroundAVAssetDownloadTask:(Q)adidReceiveDownloadToken:(Q)b;
 - (void) backgroundSessionDidStartAppWake:(id)areply:(@?)b;
 - (void) backgroundSessionDidFinishAppWake:(id)areply:(@?)b;
 - (void) credStorage_getInitialCredentialDictionariesWithReply:(@?)a;
 - (void) credStorage_credentialsForProtectionSpace:(id)areply:(@?)b;
 - (void) credStorage_allCredentialsWithReply:(@?)a;
 - (void) credStorage_setCredential:(id)aforProtectionSpace:(id)b;
 - (void) credStorage_removeCredential:(id)aforProtectionSpace:(id)b;
 - (void) credStorage_defaultCredentialForProtectionSpace:(id)areply:(@?)b;
 - (void) credStorage_setDefaultCredential:(id)aforProtectionSpace:(id)b;
 - (id) clientResumeDataFromBackgroundResumeData:(id)a;
 - (void) _onqueue_disavowTask:(id)a;


@end