
@protocol NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener;
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

    BOOL _canWrite;
    BOOL _suppressProgress;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
    i _seqNo;
    @? _fileCompletion;
    @"__NSCFLocalDownloadFile" _downloadFile;
    @"NSObject<OS_dispatch_data>" _writeBuffer;
    Q _ioSuspend;
    Q _totalWrote;
    @? _resumeCallback;
    q _initialResumeSize;
    @"NSDictionary" _originalResumeInfo;
    Q __transientWriteProgress;
    @? __afterDidReportProgressOnQueue;
}

 - (void) dealloc;
 - (BOOL) isKindOfClass:(Class)a;
 - (void) _onqueue_completeInitialization;
 - (id) initWithSession:(id)arequest:(id)bfilePath:(id)cident:(Q)d;
 - (id) initWithSession:(id)aresumeData:(id)bident:(Q)c;
 - (void) setFileCompletion:(@?)a;
 - (void) _onqueue_didReceiveResponse:(id)acompletion:(@?)b;
 - (id) initWithTask:(id)a;
 - (void) _task_onqueue_didFinish;
 - (void) _task_onqueue_didReceiveDispatchData:(id)acompletionHandler:(@?)b;
 - (void) _onqueue_willCacheResponse:(id)awithCompletion:(@?)b;
 - (void) setDownloadFile:(id)a;
 - (id) downloadFile;
 - (void) setCanWrite:(BOOL)a;
 - (BOOL) canWrite;
 - (void) setInitialResumeSize:(q)a;
 - (BOOL) setupForNewDownload:(id)a;
 - (void) setTotalWrote:(Q)a;
 - (q) initialResumeSize;
 - (void) setOriginalResumeInfo:(id)a;
 - (void) setWriteBuffer:(id)a;
 - (void) setResumeCallback:(@?)a;
 - (id) originalResumeInfo;
 - (BOOL) needFinish;
 - (void) setNeedFinish:(BOOL)a;
 - (void) checkWrite;
 - (@?) resumeCallback;
 - (void) _onqueue_cancelByProducingResumeData:(@?)a;
 - (Q) totalWrote;
 - (Q) _transientWriteProgress;
 - (void) set_transientWriteProgress:(Q)a;
 - (BOOL) suppressProgress;
 - (void) setSuppressProgress:(BOOL)a;
 - (@?) fileCompletion;
 - (@?) _afterDidReportProgressOnQueue;
 - (void) reportProgress:(Q)a;
 - (void) set_afterDidReportProgressOnQueue:(@?)a;
 - (id) writeBuffer;
 - (i) seqNo;
 - (void) setSeqNo:(i)a;
 - (id) createResumeInformation:(id)a;
 - (void) _private_errorCompletion;
 - (void) writeAndResume;
 - (Q) ioSuspend;
 - (void) setIoSuspend:(Q)a;
 - (BOOL) didIssueNeedFinish;
 - (void) setDidIssueNeedFinish:(BOOL)a;
 - (void) _private_fileCompletion;
 - (i) openItemForPath:(id)amode:(i)b;
 - (id) initWithSession:(id)arequest:(id)bident:(Q)c;
 - (void) cancelByProducingResumeData:(@?)a;
 - (void) _private_posixError:(i)a;


@end
