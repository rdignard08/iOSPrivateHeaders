
@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {

    unsigned long long _AVAssetDownloadToken;
    @"NSURL" _URL;
    @"NSURL" _destinationURL;
}

 - (id) URL;
 - (unsigned long long) AVAssetDownloadToken;
 - (id) destinationURL;


@end
