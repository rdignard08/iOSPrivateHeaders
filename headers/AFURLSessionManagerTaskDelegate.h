
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate;
@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {

    AFURLSessionManager* _manager;
    NSMutableData* _mutableData;
    NSProgress* _progress;
    NSURL* _downloadFileURL;
    @? _downloadTaskDidFinishDownloading;
    @? _completionHandler;
}
@property (nonatomic, weak, readwrite) AFURLSessionManager* manager;
@property (nonatomic, retain, readwrite) NSMutableData* mutableData;
@property (nonatomic, retain, readwrite) NSProgress* progress;
@property (nonatomic, copy, readwrite) NSURL* downloadFileURL;
@property (nonatomic, copy, readwrite) NSNumber* downloadTaskDidFinishDownloading;
@property (nonatomic, copy, readwrite) NSNumber* completionHandler;

 - (void) setMutableData:(id)a ;
 - (@?) downloadTaskDidFinishDownloading;
 - (void) setManager:(id)a ;
 - (void) setDownloadTaskDidFinishDownloading:(@?)a ;
 - (id) manager;
 - (id) progress;
 - (void) setProgress:(id)a ;
 - (void) .cxx_destruct;
 - (@?) completionHandler;
 - (void) setCompletionHandler:(@?)a ;
 - (id) init;
 - (void) setDownloadFileURL:(id)a ;
 - (id) downloadFileURL;
 - (void) URLSession:(id)a task:(id)b didSendBodyData:(long long)c totalBytesSent:(long long)d totalBytesExpectedToSend:(long long)e ;
 - (void) URLSession:(id)a task:(id)b didCompleteWithError:(id)c ;
 - (void) URLSession:(id)a dataTask:(id)b didReceiveData:(id)c ;
 - (void) URLSession:(id)a downloadTask:(id)b didFinishDownloadingToURL:(id)c ;
 - (void) URLSession:(id)a downloadTask:(id)b didWriteData:(long long)c totalBytesWritten:(long long)d totalBytesExpectedToWrite:(long long)e ;
 - (void) URLSession:(id)a downloadTask:(id)b didResumeAtOffset:(long long)c expectedTotalBytes:(long long)d ;
 - (id) mutableData;


@end
