
@interface CONNECTION_SessionTask : NSObject {

    ^{_CFURLRequest=} _originalRequest;
    ^{_CFURLRequest=} _currentRequest;
    ^{__CFDictionary=} _connectionProperties;
    ^{__CFDictionary=} _socketProperties;
    @"NSMutableURLRequest" _nsCurrentRequest;
    @"NSURLRequest" _nsOriginalRequest;
    @"NSURLSession" _session;
    BOOL _is_cellular;
    Class _my_protocolForTask;
    ^{__PerformanceTiming=} __performanceTiming;
}

 - (void) dealloc;
 - (id) workQueue;
 - (void) updateCurrentRequest:(id)a;
 - (id) state;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache;
 - (id) initWithRequest:(^{_CFURLRequest=})amutableCurrent:(^{_CFURLRequest=})bconnProps:(^{__CFDictionary=})csockProps:(^{__CFDictionary=})dsession:(id)e;
 - (^{_CFURLRequest=}) _currentCFURLRequest;
 - (BOOL) shouldHandleCookiesAndSchemeIsAppropriate;
 - (id) _protocolForTask;
 - (id) currentRequest;
 - (void) set_protocolForTask:(id)a;
 - (^{_CFHSTSPolicy=}) _copyHSTSPolicy;
 - (id) error;
 - (id) countOfBytesReceived;
 - (id) _priorityValue;
 - (^{__CFURL=}) currentRequest_URL;
 - (id) startTime;
 - (id) session;
 - (id) countOfBytesExpectedToReceive;
 - (id) originalRequest;
 - (id) countOfBytesSent;
 - (id) countOfBytesExpectedToSend;
 - (id) _cfCache;
 - (id) _backgroundTaskTimingData;
 - (id) taskIdentifier;
 - (void) cleanupAndBreakCycles;
 - (^{_CFURLRequest=}) _copyCurrentCFURLRequest;
 - (^{_CFURLRequest=}) _copyOriginalCFURLRequest;
 - (^{__CFDictionary=}) _copySocketStreamProperties;
 - (^{__PerformanceTiming=}) _performanceTiming;
 - (void) _setSocketProperties:(^{__CFDictionary=})aconnectionProperties:(^{__CFDictionary=})b;
 - (^{__CFHTTPMessage=}) _copyHTTPMessage;
 - (int) _cachePolicy;
 - (double) _timeoutInterval;
 - (^{__CFDictionary=}) _proxySettings;
 - (^{__CFDictionary=}) _sslSettings;
 - (unsigned char) _shouldPipelineHTTP;
 - (unsigned char) _shouldUsePipelineHeuristics;
 - (unsigned char) _shouldSkipPipelineProbe;
 - (long long) _requestPriority;
 - (unsigned long long) _allowedProtocolTypes;
 - (id) _prohibitAuthUI;
 - (unsigned char) _strictContentLength;
 - (id) _connectionPropertyDuet;
 - (long long) _suspensionThreshhold;
 - (unsigned char) _preventsIdleSystemSleep;
 - (id) _expectedWorkload;
 - (id) _timeWindowDelay;
 - (id) _timeWindowDuration;
 - (void) _takePreventIdleSleepAssertionIfAppropriate;
 - (float) priority;
 - (void) _setConnectionIsCellular:(BOOL)a;
 - (void) _releasePreventIdleSleepAssertionIfAppropriate;
 - (BOOL) _shouldSkipPreferredClientCertificateLookup;
 - (^{__CFURL=}) originalRequest_mainDocumentURL;
 - (void) _initializeTimingDataWithSessionConfiguration:(id)a;
 - (id) _cfHSTS;
 - (id) _cfCreds;
 - (id) _cfCookies;
 - (id) _shouldHandleCookies;
 - (id) _cookieAcceptPolicy;
 - (id) _contentDispositionFallbackArray;
 - (id) _allowsCellular;
 - (id) _networkServiceType;
 - (id) _boundInterfaceIdentifier;
 - (id) _disallowCellular;


@end
