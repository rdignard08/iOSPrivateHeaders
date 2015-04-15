
@protocol NSURLAuthenticationChallengeSender;
@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

    @"NSURLConnectionInternal" _internal;
}
@property (atomic, copy, readonly) NSURLRequest* originalRequest;
@property (atomic, copy, readonly) NSURLRequest* currentRequest;
 + (id) sendSynchronousRequest:(id)areturningResponse:(^@)berror:(^@)c;
 + (id) connectionWithRequest:(id)adelegate:(id)b;
 + (void) _setMIMETypesWithNoSizeLimit:(id)a;
 + (void) _resourceLoadLoop:(id)a;
 + (^{__CFRunLoop=}) resourceLoaderRunLoop;
 + (void) _setLoaderThreadPriority:(i)a;
 + (void) _setCollectsTimingData:(BOOL)a;
 + (BOOL) _collectsTimingData;
 + (void) _collectTimingDataWithOptions:(Q)a;
 + (Q) _timingDataOptions;
 + (void) sendAsynchronousRequest:(id)aqueue:(id)bcompletionHandler:(@?)c;
 + (Q) _sweeperInterval;
 + (void) _setSweeperInterval:(Q)a;
 + (BOOL) canHandleRequest:(id)a;

 - (id) initWithRequest:(id)adelegate:(id)bstartImmediately:(BOOL)c;
 - (id) description;
 - (void) dealloc;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (BOOL) defersCallbacks;
 - (void) cancel;
 - (id) currentRequest;
 - (void) useCredential:(id)aforAuthenticationChallenge:(id)b;
 - (void) performDefaultHandlingForAuthenticationChallenge:(id)a;
 - (id) originalRequest;
 - (void) setDelegateQueue:(id)a;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a;
 - (void) cancelAuthenticationChallenge:(id)a;
 - (void) rejectProtectionSpaceAndContinueWithChallenge:(id)a;
 - (void) start;
 - (id) _initWithRequest:(id)adelegate:(id)busesCache:(BOOL)cmaxContentLength:(q)dstartImmediately:(BOOL)econnectionProperties:(id)f;
 - (id) _timingData;
 - (id) initWithRequest:(id)adelegate:(id)b;
 - (void) unscheduleFromRunLoop:(id)aforMode:(id)b;
 - (void) _suspendLoading;
 - (void) _resumeLoading;
 - (void) setDefersCallbacks:(BOOL)a;
 - (void) download;
 - (id) connectionProperties;
 - (id) _dlInternal;
 - (id) _cfInternal;


@end
