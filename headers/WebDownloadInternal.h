
@protocol NSURLDownloadDelegate;
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {

    id realDelegate;
}

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (void) download:(id)a didFailWithError:(id)b ;
 - (void) downloadDidBegin:(id)a ;
 - (id) download:(id)a willSendRequest:(id)b redirectResponse:(id)c ;
 - (void) download:(id)a didReceiveAuthenticationChallenge:(id)b ;
 - (void) download:(id)a didReceiveResponse:(id)b ;
 - (void) download:(id)a didReceiveDataOfLength:(unsigned long long)b ;
 - (BOOL) download:(id)a shouldDecodeSourceDataOfMIMEType:(id)b ;
 - (void) download:(id)a decideDestinationWithSuggestedFilename:(id)b ;
 - (void) download:(id)a didCreateDestination:(id)b ;
 - (void) downloadDidFinish:(id)a ;
 - (void) download:(id)a didCancelAuthenticationChallenge:(id)b ;
 - (void) setRealDelegate:(id)a ;


@end
