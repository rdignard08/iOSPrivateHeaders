
@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    @"NSURL" _URL;
    @"NSURL" _destinationURL;
}

 - (void) dealloc;
 - (id) URL;
 - (unsigned long long) AVAssetDownloadToken;
 - (id) destinationURL;
 - (id) initWithTaskInfo:(id)asession:(id)bremoteSession:(id)cident:(unsigned long long)d;
 - (id) initWithSession:(id)aremoteSession:(id)bURL:(id)cdestinationURL:(id)dident:(unsigned long long)e;
 - (void) _onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)atotalBytesExpectedToWrite:(long long)b;
 - (void) setAVAssetDownloadToken:(unsigned long long)a;
 - (void) setURL:(id)a;
 - (void) setDestinationURL:(id)a;


@end
