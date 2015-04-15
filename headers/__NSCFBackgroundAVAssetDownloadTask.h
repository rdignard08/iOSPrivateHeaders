
@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

    Q _downloadToken;
    Q _AVAssetDownloadToken;
    @"NSURL" _URL;
    @"NSURL" _destinationURL;
}

 - (void) dealloc;
 - (id) URL;
 - (Q) AVAssetDownloadToken;
 - (id) destinationURL;
 - (id) initWithTaskInfo:(id)asession:(id)bremoteSession:(id)cident:(Q)d;
 - (id) initWithSession:(id)aremoteSession:(id)bURL:(id)cdestinationURL:(id)dident:(Q)e;
 - (void) _onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(q)atotalBytesExpectedToWrite:(q)b;
 - (void) setAVAssetDownloadToken:(Q)a;
 - (void) setURL:(id)a;
 - (void) setDestinationURL:(id)a;


@end
