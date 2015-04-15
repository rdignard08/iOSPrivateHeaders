
@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {

    Q _AVAssetDownloadToken;
    @"NSURL" _URL;
    @"NSURL" _destinationURL;
}

 - (id) URL;
 - (Q) AVAssetDownloadToken;
 - (id) destinationURL;


@end
