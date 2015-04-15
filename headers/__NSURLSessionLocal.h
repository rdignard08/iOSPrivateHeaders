
@protocol NSURLSessionSubclass;
@interface __NSURLSessionLocal : NSURLSession <NSURLSessionSubclass> {

    unsigned long long _identSeed;
    ^{XTubeManager=^^?^{__CFAllocator}i^{RetainableTypedDict<const CoreSchedulingSet *, TubeManager *>}{_opaque_pthread_mutex_t=q[56c]}{HTTPConnectionCacheLimits=iiiiiiiiii}} _tubeManager;
    NSMutableDictionary _tasks;
    NSObject<OS_dispatch_queue> _invalidateQueue;
    @? _invalidateCallback;
    r^{XURLCache=^^?^{__CFAllocator}i} _xCache;
    long long _xCacheOnce;
    r^{XCookieStorage=^^?^{__CFAllocator}i} _xCookies;
    long long _xCookiesOnce;
    r^{XCredentialStorage=^^?^{__CFAllocator}i} _xCreds;
    long long _xCredsOnce;
    NSArray _localProtocolClassesForDefaultSession;
    BOOL _isInvalid;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) _onqueue_connectUploadTask:(id)astrippedRequest:(id)bbodyStream:(id)cbodyParts:(id)d;
 - (unsigned long long) nextSeed;
 - (void) _onqueue_invokeInvalidateCallback;
 - (void) _onqueue_checkForCompletion;
 - (id) copyTasks;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache;
 - (id) initWithConfiguration:(id)adelegate:(id)bdelegateQueue:(id)c;
 - (id) taskForClass:(Class)arequest:(id)buploadFile:(id)cbodyData:(id)dcompletion:(@?)e;
 - (void) _flushOrResetStorage:(@?)areset:(unsigned char)b;
 - (void) _onqueue_invalidateSession:(BOOL)awithQueue:(id)bcompletion:(@?)c;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache0;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage0;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage0;
 - (^{XTubeManager=^^?^{__CFAllocator}i^{RetainableTypedDict<const CoreSchedulingSet *, TubeManager *>}{_opaque_pthread_mutex_t=q[56c]}{HTTPConnectionCacheLimits=iiiiiiiiii}}) _actualTubeManager;
 - (id) _protocolClasses;
 - (Class) _protocolClassForTask:(id)a;
 - (Class) _protocolClassForRequest:(id)a;
 - (BOOL) _request:(id)aisCacheEquivalentTo:(id)b;
 - (^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}}) _newURLProtocolForTask:(id)aclient:(^{URLProtocolClient=^^?})bprotocolClass:(Class)c;
 - (id) dataTaskForRequest:(id)acompletion:(@?)b;
 - (id) uploadTaskForRequest:(id)auploadFile:(id)bbodyData:(id)ccompletion:(@?)d;
 - (id) downloadTaskForRequest:(id)adownloadFilePath:(id)bresumeData:(id)ccompletion:(@?)d;
 - (id) _AVAssetDownloadTaskForURL:(id)adestinationURL:(id)boptions:(id)c;
 - (id) _streamTaskForHost:(id)aport:(long long)btls:(BOOL)ccompletionHandler:(@?)d;
 - (void) _onqueue_flushWithCompletionHandler:(@?)a;
 - (void) _onqueue_completeInvalidation:(BOOL)a;
 - (void) _onqueue_resetStorageWithCompletionHandler:(@?)a;
 - (void) _onqueue_getTasksWithCompletionHandler:(@?)a;
 - (id) connToTask:(id)a;
 - (void) replaceTask:(id)awithTask:(id)b;
 - (void) task:(id)aterminatedConnection:(id)b;
 - (^{_CFHSTSPolicy=}) _copyHSTSPolicy;
 - (void) _invalidateAllConnections;
 - (void) _purgeIdleConnections;
 - (void) invalidateUnpurgeableConnectionsForConnectionCacheKey:(^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})a;
 - (id) _createTaskFromOriginalCFURLRequest:(^{_CFURLRequest=})aupdatedCFURLRequest:(^{_CFURLRequest=})bconnProps:(^{__CFDictionary=})csockProps:(^{__CFDictionary=})d;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) copyBaseStorageForRequest:(^{_CFURLRequest=})a;
 - (void) _getCookieHeadersForTask:(id)acompletionHandler:(@?)b;
 - (^{__CFString=}) _withConnectionCache_getCurrentSSLMethodForKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})ascheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})b;
 - (void) _withConnectionCache_setCurrentSSLMethod:(^{__CFString=})aforKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})bscheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})c;
 - (BOOL) _withConnectionCache_enqueueRequest:(r^{HTTPRequestMessage=^^?^^?^^?C{HTTPVersionMixedValue=^^?^{__CFString}}^{HTTPBodyData}iq^{_CFHTTPAuthentication}^{_CFHTTPAuthentication}^{HTTPParser}^{HTTPHeaderDict}^{HTTPHeaderDict}^^?^{__CFAllocator}{HTTPMethodMixedValue=^^?^{__CFString}}*^{__CFURL}*})aforProtocol:(^{MetaConnectionCacheClient=^^?})bscheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})coptions:({MetaConnectionOptions=ifQCCC})d;
 - (^{Tube=^^?^{__CFAllocator}i^^?^^?^{HTTPConnectionCacheKey}^{BaseTubeManager}^{CoreSchedulingSet}^{BaseAwaitingTube}^{SocketStreamObject}iB{?=BQ}iBBB^{__CFArray}^{__SecTrust}^{NetworkProxy}@?@?^{__CFReadStream}^{__CFWriteStream}}) _withConnectionCache_getPendingTubeForProtocol:(^{MetaConnectionCacheClient=^^?})awithKey:(r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii})bscheduling:(r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i})c;
 - (id) _createCanonicalRequest:(id)a;
 - (id) _createCanonicalRequestForTask:(id)a;
 - (BOOL) _cfurlRequest:(^{_CFURLRequest=})aisCacheEquivalentTo:(^{_CFURLRequest=})b;
 - (^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}}) _newURLProtocolForTask:(id)aclient:(^{URLProtocolClient=^^?})b;
 - (BOOL) _prependProtocolClassForDefaultSession:(Class)a;
 - (void) _removeProtocolClassForDefaultSession:(Class)a;


@end
