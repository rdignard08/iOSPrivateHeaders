
@protocol SSDownloadManagerObserver;
@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

    @"SSDownloadManager" _manager;
    @"NSOperationQueue" _queue;
    @"NSMutableDictionary" _downloads;
    BOOL _reconnectInProgress;
}

 - (void) dealloc;
 - (void) addOperationWithBlock:(@?)a;
 - (void) withDownload:(q)aperform:(@?)b;
 - (void) withDownload:(q)aperformAsync:(@?)b;
 - (void) addDownloads:(id)acompletionBlock:(@?)b;
 - (void) _attemptReconnect;
 - (void) downloadManager:(id)adownloadStatesDidChange:(id)b;
 - (void) downloadManagerDownloadsDidChange:(id)a;
 - (id) initWithDownloadManager:(id)a;
 - (void) setDelegate:(id)aforDownload:(q)b;
 - (void) cancelDownload:(q)acompletionBlock:(@?)b;
 - (void) withDownloadMatchingIdentifier:(id)aperform:(@?)b;
 - (void) finishDownload:(q)a;
 - (void) addDownload:(id)acompletionBlock:(@?)b;
 - (void) downloadHandlerDisconnected:(BOOL)a;


@end
