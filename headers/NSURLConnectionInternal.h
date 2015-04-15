
@protocol NSURLConnectionRequired, NSURLAuthenticationChallengeSender;
@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {

    NSURLConnection* _connection;
    NSOperationQueue* _delegateQueue;
    NSURL* _url;
    NSURLRequest* _originalRequest;
    NSURLRequest* _currentRequest;
    id _delegate;
    NSDictionary* _connectionProperties;
    BOOL _connectionActive;
}

 - (void) dealloc;
 - (id) currentRequest;
 - (void) useCredential:(id)aforAuthenticationChallenge:(id)b;
 - (void) performDefaultHandlingForAuthenticationChallenge:(id)a;
 - (id) originalRequest;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a;
 - (void) cancelAuthenticationChallenge:(id)a;
 - (void) rejectProtectionSpaceAndContinueWithChallenge:(id)a;
 - (id) initWithInfo:(r^{InternalInit=@@@@Bq})a;
 - (id) _timingData;
 - (void) _setDelegateQueue:(id)a;
 - (id) _connectionProperties;
 - (void) _withConnectionAndDelegate:(@?)a;
 - (void) _withConnectionDisconnectFromConnection;
 - (void) _invalidate;
 - (void) setConnectionActive:(BOOL)a;
 - (void) _withActiveConnectionAndDelegate:(@?)a;
 - (BOOL) isConnectionActive;
 - (void) invokeForDelegate:(@?)a;
 - (void) _withConnectionAndDelegate:(@?)aonlyActive:(BOOL)b;


@end
