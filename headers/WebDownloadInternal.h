
@protocol NSURLDownloadDelegate;
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {

    id realDelegate;
}

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a;
 - (void) download:(id)adidFailWithError:(id)b;
 - (void) downloadDidBegin:(id)a;
 - (id) download:(id)awillSendRequest:(id)bredirectResponse:(id)c;
 - (void) download:(id)adidReceiveAuthenticationChallenge:(id)b;
 - (void) download:(id)adidReceiveResponse:(id)b;
 - (void) download:(id)adidReceiveDataOfLength:(Q)b;
 - (BOOL) download:(id)ashouldDecodeSourceDataOfMIMEType:(id)b;
 - (void) download:(id)adecideDestinationWithSuggestedFilename:(id)b;
 - (void) download:(id)adidCreateDestination:(id)b;
 - (void) downloadDidFinish:(id)a;
 - (void) download:(id)adidCancelAuthenticationChallenge:(id)b;
 - (void) setRealDelegate:(id)a;


@end
