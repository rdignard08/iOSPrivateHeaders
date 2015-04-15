
@protocol NSURLAuthenticationChallengeSender;
@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

    NSURLConnectionInternal* _internal;
}
@property (atomic, copy, readonly) NSURLRequest* originalRequest;
@property (atomic, copy, readonly) NSURLRequest* currentRequest;
 + (id) sendSynchronousRequest:(id)areturningResponse:(^@)berror:(^@)c;
 + (id) connectionWithRequest:(id)adelegate:(id)b;
 + (void) _setMIMETypesWithNoSizeLimit:(id)a;
 + (void) _resourceLoadLoop:(id)a;
 + (^{__CFRunLoop=}) resourceLoaderRunLoop;
 + (void) _setLoaderThreadPriority:(int)a;
 + (void) _setCollectsTimingData:(BOOL)a;
 + (BOOL) _collectsTimingData;
 + (void) _collectTimingDataWithOptions:(unsigned long long)a;
 + (unsigned long long) _timingDataOptions;
 + (void) sendAsynchronousRequest:(id)aqueue:(id)bcompletionHandler:(@?)c;
 + (unsigned long long) _sweeperInterval;
 + (void) _setSweeperInterval:(unsigned long long)a;
 + (BOOL) canHandleRequest:(id)a;

 - (id) initWithRequest:(id)a delegate:(id)b startImmediately:(BOOL)c ;
 - (id) description;
 - (void) dealloc;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (BOOL) defersCallbacks;
 - (void) cancel;
 - (id) currentRequest;
 - (void) useCredential:(id)a forAuthenticationChallenge:(id)b ;
 - (void) performDefaultHandlingForAuthenticationChallenge:(id)a ;
 - (id) originalRequest;
 - (void) setDelegateQueue:(id)a ;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a ;
 - (void) cancelAuthenticationChallenge:(id)a ;
 - (void) rejectProtectionSpaceAndContinueWithChallenge:(id)a ;
 - (void) start;
 - (id) _initWithRequest:(id)a delegate:(id)b usesCache:(BOOL)c maxContentLength:(long long)d startImmediately:(BOOL)e connectionProperties:(id)f ;
 - (id) _timingData;
 - (id) initWithRequest:(id)a delegate:(id)b ;
 - (void) unscheduleFromRunLoop:(id)a forMode:(id)b ;
 - (void) _suspendLoading;
 - (void) _resumeLoading;
 - (void) setDefersCallbacks:(BOOL)a ;
 - (void) download;
 - (id) connectionProperties;
 - (id) _dlInternal;
 - (id) _cfInternal;


@end
