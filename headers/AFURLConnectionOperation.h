
@protocol NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying;
@interface AFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying> {

    BOOL _shouldUseCredentialStorage;
    @"NSOutputStream" _outputStream;
    @"NSSet" _runLoopModes;
    @"NSURLRequest" _request;
    @"NSURLResponse" _response;
    @"NSError" _error;
    @"NSData" _responseData;
    @"NSString" _responseString;
    Q _responseStringEncoding;
    @"NSURLCredential" _credential;
    @"AFSecurityPolicy" _securityPolicy;
    @"NSObject<OS_dispatch_queue>" _completionQueue;
    @"NSObject<OS_dispatch_group>" _completionGroup;
    @"NSDictionary" _userInfo;
    q _state;
    @"NSRecursiveLock" _lock;
    @"NSURLConnection" _connection;
    q _totalBytesRead;
    Q _backgroundTaskIdentifier;
    @? _uploadProgress;
    @? _downloadProgress;
    @? _authenticationChallenge;
    @? _cacheResponse;
    @? _redirectResponse;
}
 + (void) networkRequestThreadEntryPoint:(id)a;
 + (id) networkRequestThread;
 + (id) batchOfRequestOperations:(id)aprogressBlock:(@?)bcompletionBlock:(@?)c;
 + (BOOL) supportsSecureCoding;

 - (id) responseData;
 - (id) outputStream;
 - (void) setRequest:(id)a;
 - (void) setSecurityPolicy:(id)a;
 - (void) setShouldUseCredentialStorage:(BOOL)a;
 - (id) completionQueue;
 - (BOOL) shouldUseCredentialStorage;
 - (id) credential;
 - (void) setCredential:(id)a;
 - (id) securityPolicy;
 - (void) setCompletionQueue:(id)a;
 - (id) completionGroup;
 - (void) setCompletionGroup:(id)a;
 - (void) setRunLoopModes:(id)a;
 - (Q) responseStringEncoding;
 - (void) setResponseString:(id)a;
 - (void) setResponseStringEncoding:(Q)a;
 - (BOOL) isPaused;
 - (void) operationDidPause;
 - (void) setUploadProgress:(@?)a;
 - (void) setDownloadProgress:(@?)a;
 - (void) setAuthenticationChallenge:(@?)a;
 - (void) setCacheResponse:(@?)a;
 - (void) setRedirectResponse:(@?)a;
 - (void) cancelConnection;
 - (void) operationDidStart;
 - (@?) redirectResponse;
 - (@?) uploadProgress;
 - (q) totalBytesRead;
 - (void) setTotalBytesRead:(q)a;
 - (@?) downloadProgress;
 - (void) setResponseData:(id)a;
 - (@?) cacheResponse;
 - (id) responseString;
 - (void) setShouldExecuteAsBackgroundTaskWithExpirationHandler:(@?)a;
 - (void) setUploadProgressBlock:(@?)a;
 - (void) setDownloadProgressBlock:(@?)a;
 - (void) setWillSendRequestForAuthenticationChallengeBlock:(@?)a;
 - (void) setCacheResponseBlock:(@?)a;
 - (void) setRedirectResponseBlock:(@?)a;
 - (id) inputStream;
 - (void) setInputStream:(id)a;
 - (void) setOutputStream:(id)a;
 - (void) setLock:(id)a;
 - (BOOL) isFinished;
 - (BOOL) isReady;
 - (void) setCompletionBlock:(@?)a;
 - (BOOL) isExecuting;
 - (BOOL) isConcurrent;
 - (id) connection;
 - (id) runLoopModes;
 - (void) pause;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) lock;
 - (id) userInfo;
 - (id) initWithRequest:(id)a;
 - (void) finish;
 - (void) cancel;
 - (void) setConnection:(id)a;
 - (q) state;
 - (id) response;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setState:(q)a;
 - (id) error;
 - (void) setError:(id)a;
 - (void) setResponse:(id)a;
 - (id) request;
 - (void) start;
 - (void) connection:(id)adidFailWithError:(id)b;
 - (@?) authenticationChallenge;
 - (void) connection:(id)awillSendRequestForAuthenticationChallenge:(id)b;
 - (id) connection:(id)awillSendRequest:(id)bredirectResponse:(id)c;
 - (void) connection:(id)adidReceiveResponse:(id)b;
 - (void) connection:(id)adidReceiveData:(id)b;
 - (void) connectionDidFinishLoading:(id)a;
 - (id) connection:(id)awillCacheResponse:(id)b;
 - (void) connection:(id)adidSendBodyData:(q)btotalBytesWritten:(q)ctotalBytesExpectedToWrite:(q)d;
 - (BOOL) connectionShouldUseCredentialStorage:(id)a;
 - (void) setUserInfo:(id)a;
 - (void) resume;
 - (void) setBackgroundTaskIdentifier:(Q)a;
 - (Q) backgroundTaskIdentifier;


@end
