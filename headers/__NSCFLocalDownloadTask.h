
@protocol NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener;
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

    BOOL _canWrite;
    BOOL _suppressProgress;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
    int _seqNo;
    @? _fileCompletion;
    __NSCFLocalDownloadFile* _downloadFile;
    NSObject<OS_dispatch_data>* _writeBuffer;
    unsigned long long _ioSuspend;
    unsigned long long _totalWrote;
    @? _resumeCallback;
    long long _initialResumeSize;
    NSDictionary* _originalResumeInfo;
    unsigned long long __transientWriteProgress;
    @? __afterDidReportProgressOnQueue;
}

 - (void) dealloc;
 - (BOOL) isKindOfClass:(Class)a;
 - (void) _onqueue_completeInitialization;
 - (id) initWithSession:(id)arequest:(id)bfilePath:(id)cident:(unsigned long long)d;
 - (id) initWithSession:(id)aresumeData:(id)bident:(unsigned long long)c;
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
 - (void) setInitialResumeSize:(long long)a;
 - (BOOL) setupForNewDownload:(id)a;
 - (void) setTotalWrote:(unsigned long long)a;
 - (long long) initialResumeSize;
 - (void) setOriginalResumeInfo:(id)a;
 - (void) setWriteBuffer:(id)a;
 - (void) setResumeCallback:(@?)a;
 - (id) originalResumeInfo;
 - (BOOL) needFinish;
 - (void) setNeedFinish:(BOOL)a;
 - (void) checkWrite;
 - (@?) resumeCallback;
 - (void) _onqueue_cancelByProducingResumeData:(@?)a;
 - (unsigned long long) totalWrote;
 - (unsigned long long) _transientWriteProgress;
 - (void) set_transientWriteProgress:(unsigned long long)a;
 - (BOOL) suppressProgress;
 - (void) setSuppressProgress:(BOOL)a;
 - (@?) fileCompletion;
 - (@?) _afterDidReportProgressOnQueue;
 - (void) reportProgress:(unsigned long long)a;
 - (void) set_afterDidReportProgressOnQueue:(@?)a;
 - (id) writeBuffer;
 - (int) seqNo;
 - (void) setSeqNo:(int)a;
 - (id) createResumeInformation:(id)a;
 - (void) _private_errorCompletion;
 - (void) writeAndResume;
 - (unsigned long long) ioSuspend;
 - (void) setIoSuspend:(unsigned long long)a;
 - (BOOL) didIssueNeedFinish;
 - (void) setDidIssueNeedFinish:(BOOL)a;
 - (void) _private_fileCompletion;
 - (int) openItemForPath:(id)amode:(int)b;
 - (id) initWithSession:(id)arequest:(id)bident:(unsigned long long)c;
 - (void) cancelByProducingResumeData:(@?)a;
 - (void) _private_posixError:(int)a;


@end
