
@protocol NSURLSessionSubclass;
@interface __NSURLSessionLocal : NSURLSession <NSURLSessionSubclass> {

    unsigned long long _identSeed;
    ^{XTubeManager=^^?^{__CFAllocator}i^{RetainableTypedDict<const CoreSchedulingSet *, TubeManager *>}{_opaque_pthread_mutex_t=q[56c]}{HTTPConnectionCacheLimits=iiiiiiiiii}} _tubeManager;
    NSMutableDictionary* _tasks;
    NSObject<OS_dispatch_queue>* _invalidateQueue;
    @? _invalidateCallback;
    r^{XURLCache=^^?^{__CFAllocator}i} _xCache;
    long long _xCacheOnce;
    r^{XCookieStorage=^^?^{__CFAllocator}i} _xCookies;
    long long _xCookiesOnce;
    r^{XCredentialStorage=^^?^{__CFAllocator}i} _xCreds;
    long long _xCredsOnce;
    NSArray* _localProtocolClassesForDefaultSession;
    BOOL _isInvalid;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) _onqueue_connectUploadTask:(id)a strippedRequest:(id)b bodyStream:(id)c bodyParts:(id)d ;
 - (unsigned long long) nextSeed;
 - (void) _onqueue_invokeInvalidateCallback;
 - (void) _onqueue_checkForCompletion;
 - (id) copyTasks;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache;
 - (id) initWithConfiguration:(id)a delegate:(id)b delegateQueue:(id)c ;
 - (id) taskForClass:(Class)a request:(id)b uploadFile:(id)c bodyData:(id)d completion:(@?)e ;
 - (void) _flushOrResetStorage:(@?)a reset:(unsigned char)b ;
 - (void) _onqueue_invalidateSession:(BOOL)a withQueue:(id)b completion:(@?)c ;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache0;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage0;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage0;
 - (^{XTubeManager=^^?^{__CFAllocator}i^{RetainableTypedDict<const CoreSchedulingSet *, TubeManager *>}{_opaque_pthread_mutex_t=q[56c]}{HTTPConnectionCacheLimits=iiiiiiiiii}}) _actualTubeManager;
 - (id) _protocolClasses;
 - (Class) _protocolClassForTask:(id)a ;
 - (Class) _protocolClassForRequest:(id)a ;
 - (BOOL) _request:(id)a isCacheEquivalentTo:(id)b ;
 - (^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}}) _newURLProtocolForTask:(id)a client:(^{URLProtocolClient=^^?})b protocolClass:(Class)c ;
 - (id) dataTaskForRequest:(id)a completion:(@?)b ;
 - (id) uploadTaskForRequest:(id)a uploadFile:(id)b bodyData:(id)c completion:(@?)d ;
 - (id) downloadTaskForRequest:(id)a downloadFilePath:(id)b resumeData:(id)c completion:(@?)d ;
 - (id) _AVAssetDownloadTaskForURL:(id)a destinationURL:(id)b options:(id)c ;
 - (id) _streamTaskForHost:(id)a port:(long long)b tls:(BOOL)c completionHandler:(@?)d ;
 - (void) _onqueue_flushWithCompletionHandler:(@?)a ;
 - (void) _onqueue_completeInvalidation:(BOOL)a ;
 - (void) _onqueue_resetStorageWithCompletionHandler:(@?)a ;
 - (void) _onqueue_getTasksWithCompletionHandler:(@?)a ;
 - (id) connToTask:(id)a ;
 - (void) replaceTask:(id)a withTask:(id)b ;
 - (void) task:(id)a terminatedConnection:(id)b ;
 - (^{_CFHSTSPolicy=}) _copyHSTSPolicy;
 - (void) _invalidateAllConnections;
 - (void) _purgeIdleConnections;
 - (void) invalidateUnpurgeableConnectionsForConnectionCacheKey:(^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})a ;
 - (id) _createTaskFromOriginalCFURLRequest:(^{_CFURLRequest=})a updatedCFURLRequest:(^{_CFURLRequest=})b connProps:(^{__CFDictionary=})c sockProps:(^{__CFDictionary=})d ;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) copyBaseStorageForRequest:(^{_CFURLRequest=})a ;
 - (void) _getCookieHeadersForTask:(id)a completionHandler:(@?)b ;
 - (^{__CFString=}) _withConnectionCache_getCurrentSSLMethodForKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})a scheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})b ;
 - (void) _withConnectionCache_setCurrentSSLMethod:(^{__CFString=})a forKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})b scheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})c ;
 - (BOOL) _withConnectionCache_enqueueRequest:(r^{HTTPRequestMessage=^^?^^?^^?C{HTTPVersionMixedValue=^^?^{__CFString}}^{HTTPBodyData}iq^{_CFHTTPAuthentication}^{_CFHTTPAuthentication}^{HTTPParser}^{HTTPHeaderDict}^{HTTPHeaderDict}^^?^{__CFAllocator}{HTTPMethodMixedValue=^^?^{__CFString}}*^{__CFURL}*})a forProtocol:(^{MetaConnectionCacheClient=^^?})b scheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})c options:({MetaConnectionOptions=ifQCCC})d ;
 - (^{Tube=^^?^{__CFAllocator}i^^?^^?^{HTTPConnectionCacheKey}^{BaseTubeManager}^{CoreSchedulingSet}^{BaseAwaitingTube}^{SocketStreamObject}iB{?=BQ}iBBB^{__CFArray}^{__SecTrust}^{NetworkProxy}@?@?^{__CFReadStream}^{__CFWriteStream}}) _withConnectionCache_getPendingTubeForProtocol:(^{MetaConnectionCacheClient=^^?})a withKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})b scheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})c ;
 - (id) _createCanonicalRequest:(id)a ;
 - (id) _createCanonicalRequestForTask:(id)a ;
 - (BOOL) _cfurlRequest:(^{_CFURLRequest=})a isCacheEquivalentTo:(^{_CFURLRequest=})b ;
 - (^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}}) _newURLProtocolForTask:(id)a client:(^{URLProtocolClient=^^?})b ;
 - (BOOL) _prependProtocolClassForDefaultSession:(Class)a ;
 - (void) _removeProtocolClassForDefaultSession:(Class)a ;


@end
