
@protocol NSCopying;
@interface NSURLSessionTask : NSObject <NSCopying> {

    BOOL __shouldSkipPreferredClientCertificateLookup;
    BOOL __shouldPipelineHTTP;
    BOOL __shouldUsePipelineHeuristics;
    BOOL __shouldSkipPipelineProbe;
    BOOL __shouldHandleCookies;
    BOOL __preventsIdleSystemSleep;
    BOOL __allowsCellular;
    BOOL __prohibitAuthUI;
    BOOL __strictContentLength;
    BOOL __disallowCellular;
    BOOL __connectionIsCellular;
    f __priorityHint;
    i __cachePolicy;
    i __cookieAcceptPolicy;
    i __networkServiceType;
    I __powerAssertion;
    Q _taskIdentifier;
    @"NSURLRequest" _originalRequest;
    @"NSURLResponse" _response;
    q _countOfBytesReceived;
    q _countOfBytesSent;
    q _countOfBytesExpectedToSend;
    q _countOfBytesExpectedToReceive;
    @"NSString" _taskDescription;
    q _state;
    @"NSError" _error;
    @"NSURL" __ledBellyFallbackURL;
    ^{_CFURLRequest=} __currentCFURLRequest;
    d _startTime;
    @"NSURLSession" _session;
    @"NSObject<OS_dispatch_queue>" _workQueue;
    @"NSString" __ledBellyServiceIdentifier;
    q __priorityValue;
    ^{__PerformanceTiming=} __performanceTiming;
    @"NSDictionary" __backgroundTaskTimingData;
    @"NSDictionary" __legacySocketStreamProperties;
    ^{_CFHSTSPolicy=} __cfHSTS;
    ^{_CFURLCache=} __cfCache;
    ^{_CFURLCredentialStorage=} __cfCreds;
    ^{OpaqueCFHTTPCookieStorage=} __cfCookies;
    d __timeoutInterval;
    @"NSDictionary" __proxySettings;
    @"NSDictionary" __sslSettings;
    @"NSArray" __contentDispositionFallbackArray;
    @"NSValue" __connectionPropertyDuet;
    q __suspensionThreshhold;
    @"NSString" __boundInterfaceIdentifier;
    Q __allowedProtocolTypes;
    q __requestPriority;
    q __expectedWorkload;
    d __timeWindowDelay;
    d __timeWindowDuration;
    @"NSString" __uniqueIdentifier;
    id __protocolForTask;
}
@property (atomic, assign, readwrite) NSNumber* taskIdentifier;
@property (atomic, copy, readwrite) NSURLRequest* originalRequest;
@property (atomic, copy, readonly) NSURLRequest* currentRequest;
@property (atomic, copy, readwrite) NSURLResponse* response;
@property (atomic, assign, readwrite) NSNumber* countOfBytesReceived;
@property (atomic, assign, readwrite) NSNumber* countOfBytesSent;
@property (atomic, assign, readwrite) NSNumber* countOfBytesExpectedToSend;
@property (atomic, assign, readwrite) NSNumber* countOfBytesExpectedToReceive;
@property (atomic, copy, readwrite) NSString* taskDescription;
@property (atomic, assign, readwrite) NSNumber* state;
@property (atomic, copy, readwrite) NSError* error;
@property (atomic, assign, readwrite) NSNumber* priority;
@property (atomic, assign, readwrite) NSNumber* _priority;
@property (atomic, copy, readwrite) NSURL* _ledBellyFallbackURL;
@property (atomic, retain, readwrite) NSNumber* _currentCFURLRequest;
@property (atomic, retain, readonly) NSURL* currentRequest_URL;
@property (atomic, retain, readonly) NSURL* originalRequest_mainDocumentURL;
@property (atomic, assign, readwrite) NSNumber* startTime;
@property (atomic, retain, readwrite) NSURLSession* session;
@property (atomic, assign, readwrite) NSNumber* workQueue;
@property (atomic, copy, readwrite) NSString* _ledBellyServiceIdentifier;
@property (atomic, assign, readwrite) NSNumber* _priorityHint;
@property (atomic, assign, readwrite) NSNumber* _priorityValue;
@property (nonatomic, assign, readwrite) NSNumber* _performanceTiming;
@property (nonatomic, copy, readwrite) NSDictionary* _backgroundTaskTimingData;
@property (atomic, assign, readwrite) NSNumber* _shouldSkipPreferredClientCertificateLookup;
@property (atomic, retain, readwrite) NSDictionary* _legacySocketStreamProperties;
@property (atomic, retain, readwrite) NSNumber* _cfHSTS;
@property (atomic, retain, readwrite) NSNumber* _cfCache;
@property (atomic, retain, readwrite) NSNumber* _cfCreds;
@property (atomic, retain, readwrite) NSNumber* _cfCookies;
@property (atomic, assign, readwrite) NSNumber* _cachePolicy;
@property (atomic, assign, readwrite) NSNumber* _timeoutInterval;
@property (atomic, retain, readwrite) NSDictionary* _proxySettings;
@property (atomic, retain, readwrite) NSDictionary* _sslSettings;
@property (atomic, assign, readwrite) NSNumber* _shouldPipelineHTTP;
@property (atomic, assign, readwrite) NSNumber* _shouldUsePipelineHeuristics;
@property (atomic, assign, readwrite) NSNumber* _shouldSkipPipelineProbe;
@property (atomic, assign, readwrite) NSNumber* _shouldHandleCookies;
@property (atomic, assign, readwrite) NSNumber* _cookieAcceptPolicy;
@property (atomic, assign, readwrite) NSNumber* _preventsIdleSystemSleep;
@property (atomic, retain, readwrite) NSArray* _contentDispositionFallbackArray;
@property (atomic, assign, readwrite) NSNumber* _allowsCellular;
@property (atomic, assign, readwrite) NSNumber* _networkServiceType;
@property (atomic, assign, readwrite) NSNumber* _prohibitAuthUI;
@property (atomic, assign, readwrite) NSNumber* _strictContentLength;
@property (atomic, copy, readwrite) NSValue* _connectionPropertyDuet;
@property (atomic, assign, readwrite) NSNumber* _suspensionThreshhold;
@property (atomic, retain, readwrite) NSString* _boundInterfaceIdentifier;
@property (atomic, assign, readwrite) NSNumber* _disallowCellular;
@property (atomic, assign, readwrite) NSNumber* _allowedProtocolTypes;
@property (atomic, assign, readwrite) NSNumber* _requestPriority;
@property (atomic, assign, readwrite) NSNumber* _expectedWorkload;
@property (atomic, assign, readwrite) NSNumber* _timeWindowDelay;
@property (atomic, assign, readwrite) NSNumber* _timeWindowDuration;
@property (atomic, copy, readwrite) NSString* _uniqueIdentifier;
@property (atomic, assign, readwrite) NSNumber* _powerAssertion;
@property (atomic, assign, readwrite, _setConnectionIsCellular:) NSNumber* _connectionIsCellular;
@property (nonatomic, assign, readwrite) NSNumber* _protocolForTask;
 + (BOOL) supportsSecureCoding;
 + (id) taskForWrappedRequest:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (I) _powerAssertion;
 - (void) set_powerAssertion:(I)a;
 - (void) cancel;
 - (id) workQueue;
 - (void) updateCurrentRequest:(id)a;
 - (id) initWithOriginalRequest:(id)aupdatedRequest:(id)bident:(Q)csession:(id)d;
 - (q) state;
 - (r^{XCookieStorage=^^?^{__CFAllocator}i}) _createXCookieStorage;
 - (r^{XCredentialStorage=^^?^{__CFAllocator}i}) _createXCredentialStorage;
 - (r^{XURLCache=^^?^{__CFAllocator}i}) _createXURLCache;
 - (^{_CFURLRequest=}) _currentCFURLRequest;
 - (BOOL) shouldHandleCookiesAndSchemeIsAppropriate;
 - (id) _protocolForTask;
 - (id) currentRequest;
 - (void) set_protocolForTask:(id)a;
 - (^{_CFHSTSPolicy=}) _copyHSTSPolicy;
 - (id) response;
 - (void) setState:(q)a;
 - (id) initWithTask:(id)a;
 - (id) error;
 - (void) setError:(id)a;
 - (void) setResponse:(id)a;
 - (void) setCountOfBytesExpectedToReceive:(q)a;
 - (q) countOfBytesReceived;
 - (void) setCountOfBytesReceived:(q)a;
 - (void) setCountOfBytesSent:(q)a;
 - (void) setCountOfBytesExpectedToSend:(q)a;
 - (void) suspend;
 - (q) _priorityValue;
 - (id) currentRequest_URL;
 - (d) startTime;
 - (void) _onqueue_releasePowerAsssertion;
 - (void) _onqueue_adjustPriorityHint:(f)a;
 - (void) setOriginalRequest:(id)a;
 - (id) session;
 - (q) countOfBytesExpectedToReceive;
 - (id) originalRequest;
 - (id) _timingData;
 - (q) countOfBytesSent;
 - (q) countOfBytesExpectedToSend;
 - (void) set_backgroundTaskTimingData:(id)a;
 - (^{_CFURLCache=}) _cfCache;
 - (id) taskDescription;
 - (void) setTaskDescription:(id)a;
 - (id) _backgroundTaskTimingData;
 - (void) setSession:(id)a;
 - (void) setWorkQueue:(id)a;
 - (Q) taskIdentifier;
 - (id) _uniqueIdentifier;
 - (void) cleanupAndBreakCycles;
 - (^{_CFURLRequest=}) _copyCurrentCFURLRequest;
 - (^{_CFURLRequest=}) _copyOriginalCFURLRequest;
 - (^{__CFDictionary=}) _copySocketStreamProperties;
 - (^{__PerformanceTiming=}) _performanceTiming;
 - (void) _setSocketProperties:(^{__CFDictionary=})aconnectionProperties:(^{__CFDictionary=})b;
 - (void) _setExplicitStorageSession:(^{__CFURLStorageSession=})a;
 - (void) _setExplicitCookieStorage:(^{OpaqueCFHTTPCookieStorage=})a;
 - (^{__CFHTTPMessage=}) _copyHTTPMessage;
 - (void) set_cachePolicy:(i)a;
 - (void) set_timeoutInterval:(d)a;
 - (void) set_shouldPipelineHTTP:(BOOL)a;
 - (void) set_shouldUsePipelineHeuristics:(BOOL)a;
 - (void) set_shouldSkipPipelineProbe:(BOOL)a;
 - (void) set_shouldHandleCookies:(BOOL)a;
 - (void) set_cookieAcceptPolicy:(i)a;
 - (void) set_preventsIdleSystemSleep:(BOOL)a;
 - (void) set_contentDispositionFallbackArray:(id)a;
 - (void) set_allowsCellular:(BOOL)a;
 - (void) set_networkServiceType:(i)a;
 - (void) set_proxySettings:(id)a;
 - (void) set_sslSettings:(id)a;
 - (void) set_boundInterfaceIdentifier:(id)a;
 - (void) set_disallowCellular:(BOOL)a;
 - (void) set_allowedProtocolTypes:(Q)a;
 - (void) set_requestPriority:(q)a;
 - (void) set_expectedWorkload:(q)a;
 - (void) set_timeWindowDelay:(d)a;
 - (void) set_timeWindowDuration:(d)a;
 - (i) _cachePolicy;
 - (d) _timeoutInterval;
 - (id) _proxySettings;
 - (id) _sslSettings;
 - (BOOL) _shouldPipelineHTTP;
 - (BOOL) _shouldUsePipelineHeuristics;
 - (BOOL) _shouldSkipPipelineProbe;
 - (q) _requestPriority;
 - (Q) _allowedProtocolTypes;
 - (BOOL) _prohibitAuthUI;
 - (BOOL) _strictContentLength;
 - (id) _connectionPropertyDuet;
 - (q) _suspensionThreshhold;
 - (BOOL) _preventsIdleSystemSleep;
 - (q) _expectedWorkload;
 - (d) _timeWindowDelay;
 - (d) _timeWindowDuration;
 - (void) _takePreventIdleSleepAssertionIfAppropriate;
 - (f) priority;
 - (void) _setConnectionIsCellular:(BOOL)a;
 - (id) _ledBellyFallbackURL;
 - (id) _ledBellyServiceIdentifier;
 - (void) set_ledBellyServiceIdentifier:(id)a;
 - (void) _releasePreventIdleSleepAssertionIfAppropriate;
 - (BOOL) _shouldSkipPreferredClientCertificateLookup;
 - (id) originalRequest_mainDocumentURL;
 - (void) set_currentCFURLRequest:(^{_CFURLRequest=})a;
 - (void) setTaskIdentifier:(Q)a;
 - (void) setStartTime:(d)a;
 - (void) _initializeTimingDataWithSessionConfiguration:(id)a;
 - (void) set_suspensionThreshhold:(q)a;
 - (void) set_connectionPropertyDuet:(id)a;
 - (void) set_legacySocketStreamProperties:(id)a;
 - (void) set_strictContentLength:(BOOL)a;
 - (void) setPriority:(f)a;
 - (void) set_shouldSkipPreferredClientCertificateLookup:(BOOL)a;
 - (void) set_priorityValue:(q)a;
 - (void) set_ledBellyFallbackURL:(id)a;
 - (id) _legacySocketStreamProperties;
 - (^{_CFHSTSPolicy=}) _cfHSTS;
 - (void) set_cfHSTS:(^{_CFHSTSPolicy=})a;
 - (void) set_cfCache:(^{_CFURLCache=})a;
 - (^{_CFURLCredentialStorage=}) _cfCreds;
 - (void) set_cfCreds:(^{_CFURLCredentialStorage=})a;
 - (^{OpaqueCFHTTPCookieStorage=}) _cfCookies;
 - (void) set_cfCookies:(^{OpaqueCFHTTPCookieStorage=})a;
 - (BOOL) _shouldHandleCookies;
 - (i) _cookieAcceptPolicy;
 - (id) _contentDispositionFallbackArray;
 - (BOOL) _allowsCellular;
 - (i) _networkServiceType;
 - (id) _boundInterfaceIdentifier;
 - (BOOL) _disallowCellular;
 - (void) set_uniqueIdentifier:(id)a;
 - (f) _priorityHint;
 - (void) set_priorityHint:(f)a;
 - (void) adjustConditionalConnectionProperties:(^{__CFDictionary=})a;
 - (^{__CFDictionary=}) _copySocketStreamProperties0;
 - (void) set_performanceTiming:(^{__PerformanceTiming=})a;
 - (void) set_prohibitAuthUI:(BOOL)a;
 - (BOOL) headerWasAddedDuringCanonicalization:(id)a;
 - (q) _priority;
 - (void) set_priority:(q)a;
 - (BOOL) _connectionIsCellular;
 - (void) resume;


@end