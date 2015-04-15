
@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    NSURL* _URL;
    NSURL* _destinationURL;
}

 - (void) dealloc;
 - (id) URL;
 - (unsigned long long) AVAssetDownloadToken;
 - (id) destinationURL;
 - (id) initWithTaskInfo:(id)a session:(id)b remoteSession:(id)c ident:(unsigned long long)d ;
 - (id) initWithSession:(id)a remoteSession:(id)b URL:(id)c destinationURL:(id)d ident:(unsigned long long)e ;
 - (void) _onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)a totalBytesExpectedToWrite:(long long)b ;
 - (void) setAVAssetDownloadToken:(unsigned long long)a ;
 - (void) setURL:(id)a ;
 - (void) setDestinationURL:(id)a ;


@end
