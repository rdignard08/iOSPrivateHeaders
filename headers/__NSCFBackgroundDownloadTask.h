
@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

    BOOL _finished;
}

 - (BOOL) isKindOfClass:(Class)a;
 - (void) _onqueue_didFinishWithError:(id)a;
 - (void) _onqueue_cancelByProducingResumeData:(@?)a;
 - (void) cancelByProducingResumeData:(@?)a;
 - (void) _onqueue_didReceiveResponse:(id)a;
 - (void) _onqueue_didFinishDownloadingToURL:(id)a;
 - (void) _onqueue_didWriteData:(long long)atotalBytesWritten:(long long)btotalBytesExpectedToWrite:(long long)c;
 - (void) _onqueue_didResumeAtOffset:(long long)aexpectedTotalBytes:(long long)b;
 - (BOOL) finished;
 - (void) setFinished:(BOOL)a;


@end
