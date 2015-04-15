
@protocol SSDownloadManagerObserver;
@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

    SSDownloadManager* _manager;
    NSOperationQueue* _queue;
    NSMutableDictionary* _downloads;
    BOOL _reconnectInProgress;
}

 - (void) dealloc;
 - (void) addOperationWithBlock:(@?)a ;
 - (void) withDownload:(long long)a perform:(@?)b ;
 - (void) withDownload:(long long)a performAsync:(@?)b ;
 - (void) addDownloads:(id)a completionBlock:(@?)b ;
 - (void) _attemptReconnect;
 - (void) downloadManager:(id)a downloadStatesDidChange:(id)b ;
 - (void) downloadManagerDownloadsDidChange:(id)a ;
 - (id) initWithDownloadManager:(id)a ;
 - (void) setDelegate:(id)a forDownload:(long long)b ;
 - (void) cancelDownload:(long long)a completionBlock:(@?)b ;
 - (void) withDownloadMatchingIdentifier:(id)a perform:(@?)b ;
 - (void) finishDownload:(long long)a ;
 - (void) addDownload:(id)a completionBlock:(@?)b ;
 - (void) downloadHandlerDisconnected:(BOOL)a ;


@end
