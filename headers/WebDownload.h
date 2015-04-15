
@interface WebDownload : NSURLDownload {

    WebDownloadInternal _webInternal;
}

 - (void) dealloc;
 - (id) init;
 - (id) initWithRequest:(id)adelegate:(id)b;
 - (id) _initWithLoadingCFURLConnection:(^{_CFURLConnection=})arequest:(^{_CFURLRequest=})bresponse:(^{_CFURLResponse=})cdelegate:(id)dproxy:(id)e;
 - (id) _initWithLoadingConnection:(id)arequest:(id)bresponse:(id)cdelegate:(id)dproxy:(id)e;
 - (id) _initWithRequest:(id)adelegate:(id)bdirectory:(id)c;
 - (void) _setRealDelegate:(id)a;


@end
