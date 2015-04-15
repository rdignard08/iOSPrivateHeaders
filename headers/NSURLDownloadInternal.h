
@interface NSURLDownloadInternal : NSObject {

    ^{_CFURLDownload=} cfDownload;
    ^{_CFURLAuthChallenge=} currCFChallenge;
    NSURLAuthenticationChallenge* currNSChallenge;
    id delegate;
    BOOL downloadActive;
    NSOperationQueue* _targetQueue;
}

 - (void) dealloc;


@end
