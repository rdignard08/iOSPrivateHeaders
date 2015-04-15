
@interface WebDownload : NSURLDownload {

    WebDownloadInternal* _webInternal;
}

 - (void) dealloc;
 - (id) init;
 - (id) initWithRequest:(id)a delegate:(id)b ;
 - (id) _initWithLoadingCFURLConnection:(^{_CFURLConnection=})a request:(^{_CFURLRequest=})b response:(^{_CFURLResponse=})c delegate:(id)d proxy:(id)e ;
 - (id) _initWithLoadingConnection:(id)a request:(id)b response:(id)c delegate:(id)d proxy:(id)e ;
 - (id) _initWithRequest:(id)a delegate:(id)b directory:(id)c ;
 - (void) _setRealDelegate:(id)a ;


@end
