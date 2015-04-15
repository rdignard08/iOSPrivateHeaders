
@protocol NSURLConnectionRequired;
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {

    int _cfConnLock;
    ^{_CFURLConnection=} _cfConn;
    ^{_CFURLAuthChallenge=} _currCFChallenge;
    NSURLAuthenticationChallenge* _currNSChallenge;
    ^{__CFString=} _fileName;
    BOOL _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

 - (void) dealloc;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) cancel;
 - (void) useCredential:(id)a forAuthenticationChallenge:(id)b ;
 - (void) performDefaultHandlingForAuthenticationChallenge:(id)a ;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a ;
 - (void) cancelAuthenticationChallenge:(id)a ;
 - (void) rejectProtectionSpaceAndContinueWithChallenge:(id)a ;
 - (id) initWithInfo:(r^{InternalInit=@@@@Bq})a ;
 - (void) start;
 - (id) _timingData;
 - (void) _setDelegateQueue:(id)a ;
 - (void) unscheduleFromRunLoop:(id)a forMode:(id)b ;
 - (void) _suspendLoading;
 - (void) _resumeLoading;
 - (void) _invalidate;
 - (void) _setShouldSkipCancelOnRelease:(BOOL)a ;
 - (void) invokeForDelegate:(@?)a ;
 - (void) sendCFChallenge:(^{_CFURLAuthChallenge=})a toSelector:(SEL)b ;
 - (^{_CFURLConnection=}) _retainCFURLConnection;
 - (^{_CFURLConnection=}) _atomic_CFURLConnection;
 - (void) cleanupChallenges;
 - (^{_CFURLConnection=}) _CFURLConnection;


@end
