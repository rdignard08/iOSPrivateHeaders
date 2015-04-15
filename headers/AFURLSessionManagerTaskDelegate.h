
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate;
@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {

    @"AFURLSessionManager" _manager;
    @"NSMutableData" _mutableData;
    @"NSProgress" _progress;
    @"NSURL" _downloadFileURL;
    @? _downloadTaskDidFinishDownloading;
    @? _completionHandler;
}
@property (nonatomic, weak, readwrite) AFURLSessionManager* manager;
@property (nonatomic, retain, readwrite) NSMutableData* mutableData;
@property (nonatomic, retain, readwrite) NSProgress* progress;
@property (nonatomic, copy, readwrite) NSURL* downloadFileURL;
@property (nonatomic, copy, readwrite) NSNumber* downloadTaskDidFinishDownloading;
@property (nonatomic, copy, readwrite) NSNumber* completionHandler;

 - (void) setMutableData:(id)a;
 - (@?) downloadTaskDidFinishDownloading;
 - (void) setManager:(id)a;
 - (void) setDownloadTaskDidFinishDownloading:(@?)a;
 - (id) manager;
 - (id) progress;
 - (void) setProgress:(id)a;
 - (void) .cxx_destruct;
 - (@?) completionHandler;
 - (void) setCompletionHandler:(@?)a;
 - (id) init;
 - (void) setDownloadFileURL:(id)a;
 - (id) downloadFileURL;
 - (void) URLSession:(id)atask:(id)bdidSendBodyData:(q)ctotalBytesSent:(q)dtotalBytesExpectedToSend:(q)e;
 - (void) URLSession:(id)atask:(id)bdidCompleteWithError:(id)c;
 - (void) URLSession:(id)adataTask:(id)bdidReceiveData:(id)c;
 - (void) URLSession:(id)adownloadTask:(id)bdidFinishDownloadingToURL:(id)c;
 - (void) URLSession:(id)adownloadTask:(id)bdidWriteData:(q)ctotalBytesWritten:(q)dtotalBytesExpectedToWrite:(q)e;
 - (void) URLSession:(id)adownloadTask:(id)bdidResumeAtOffset:(q)cexpectedTotalBytes:(q)d;
 - (id) mutableData;


@end
