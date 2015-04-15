
@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

    BOOL _finished;
}

 - (BOOL) isKindOfClass:(Class)a;
 - (void) _onqueue_didFinishWithError:(id)a;
 - (void) _onqueue_cancelByProducingResumeData:(@?)a;
 - (void) cancelByProducingResumeData:(@?)a;
 - (void) _onqueue_didReceiveResponse:(id)a;
 - (void) _onqueue_didFinishDownloadingToURL:(id)a;
 - (void) _onqueue_didWriteData:(q)atotalBytesWritten:(q)btotalBytesExpectedToWrite:(q)c;
 - (void) _onqueue_didResumeAtOffset:(q)aexpectedTotalBytes:(q)b;
 - (BOOL) finished;
 - (void) setFinished:(BOOL)a;


@end
