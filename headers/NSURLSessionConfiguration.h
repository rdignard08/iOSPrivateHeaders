
@protocol NSSecureCoding, NSCopying;
@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {

    BOOL _allowsCellularAccess;
    BOOL _discretionary;
    BOOL _sessionSendsLaunchEvents;
    BOOL _HTTPShouldUsePipelining;
    BOOL _HTTPShouldSetCookies;
    BOOL __requiresPowerPluggedIn;
    BOOL __allowsExpensiveAccess;
    BOOL __allowsPowerNapScheduling;
    BOOL __preventsIdleSleepOnceConnected;
    BOOL __sessionSendsLaunchOnDemandEvents;
    BOOL __collectsTimingData;
    BOOL __shouldSkipPreferredClientCertificateLookup;
    BOOL __allowsRetryForBackgroundDataTasks;
    BOOL __respectsAllowsCellularAccessForDiscretionaryTasks;
    BOOL __overridesBackgroundSessionAutoRedirect;
    BOOL __performsEVCertCheck;
    BOOL __infersDiscretionaryFromOriginatingClient;
    BOOL __prefersInfraWiFi;
    BOOL _backgroundSession;
    BOOL __phskip_credStorageSet;
    BOOL __phskip_urlCacheSet;
    BOOL __phskip_cookieStorageSet;
    BOOL __phskip_hstsStorageSet;
    BOOL _skip_download_unlink;
    BOOL __requiresClientToOpenFiles;
    BOOL __forcesNewConnections;
    BOOL __supportsAVAssetDownloads;
    BOOL __proxySession;
    BOOL __disallowsSPDY;
    BOOL __preventsIdleSleep;
    BOOL __usePipeliningHeuristics;
    i _TLSMinimumSupportedProtocol;
    i _TLSMaximumSupportedProtocol;
    @"NSString" _identifier;
    Q _requestCachePolicy;
    d _timeoutIntervalForRequest;
    d _timeoutIntervalForResource;
    Q _networkServiceType;
    @"NSString" _sharedContainerIdentifier;
    @"NSDictionary" _connectionProxyDictionary;
    Q _HTTPCookieAcceptPolicy;
    @"NSDictionary" _HTTPAdditionalHeaders;
    q _HTTPMaximumConnectionsPerHost;
    @"NSArray" _protocolClasses;
    @"NSURL" __directoryForDownloadedFiles;
    @"NSString" __sourceApplicationBundleIdentifier;
    @"NSString" __sourceApplicationSecondaryIdentifier;
    Q __TCPAdaptiveReadTimeout;
    Q __TCPAdaptiveWriteTimeout;
    @"NSString" __ledBellyServiceIdentifier;
    d __connectionCachePurgeTimeout;
    d __connectionCacheCellPurgeTimeout;
    @"NSString" __connectionPoolName;
    @"NSString" _disposition;
    @"NSURLCredentialStorage" __phskip_credStorage;
    @"NSURLCache" __phskip_urlCache;
    @"NSHTTPCookieStorage" __phskip_cookieStorage;
    ^{_CFHSTSPolicy=} __phskip_hstsStorage;
    q _pipeliningHighWatermark;
    q _pipeliningLowWatermark;
    q _numPriorityLevels;
    q _numFastLanes;
    q _minimumFastLanePriority;
    @"NSString" __tcpConnectionPoolName;
    @"NSDictionary" __socketStreamProperties;
    @"NSArray" __contentDispHeadEncFallback;
}
@property (atomic, copy, readwrite) NSString* identifier;
@property (atomic, assign, readwrite) NSNumber* requestCachePolicy;
@property (atomic, assign, readwrite) NSNumber* timeoutIntervalForRequest;
@property (atomic, assign, readwrite) NSNumber* timeoutIntervalForResource;
@property (atomic, assign, readwrite) NSNumber* networkServiceType;
@property (atomic, assign, readwrite) NSNumber* allowsCellularAccess;
@property (atomic, assign, readwrite, isDiscretionary) NSNumber* discretionary;
@property (atomic, copy, readwrite) NSString* sharedContainerIdentifier;
@property (atomic, assign, readwrite) NSNumber* sessionSendsLaunchEvents;
@property (atomic, copy, readwrite) NSDictionary* connectionProxyDictionary;
@property (atomic, assign, readwrite) NSNumber* TLSMinimumSupportedProtocol;
@property (atomic, assign, readwrite) NSNumber* TLSMaximumSupportedProtocol;
@property (atomic, assign, readwrite) NSNumber* HTTPShouldUsePipelining;
@property (atomic, assign, readwrite) NSNumber* HTTPShouldSetCookies;
@property (atomic, assign, readwrite) NSNumber* HTTPCookieAcceptPolicy;
@property (atomic, copy, readwrite) NSDictionary* HTTPAdditionalHeaders;
@property (atomic, assign, readwrite) NSNumber* HTTPMaximumConnectionsPerHost;
@property (atomic, retain, readwrite) NSHTTPCookieStorage* HTTPCookieStorage;
@property (atomic, retain, readwrite) NSURLCredentialStorage* URLCredentialStorage;
@property (atomic, retain, readwrite) NSURLCache* URLCache;
@property (atomic, copy, readwrite) NSArray* protocolClasses;
@property (atomic, assign, readwrite) NSNumber* _requiresPowerPluggedIn;
@property (atomic, copy, readwrite) NSURL* _directoryForDownloadedFiles;
@property (atomic, copy, readwrite) NSString* _sourceApplicationBundleIdentifier;
@property (atomic, copy, readwrite) NSString* _sourceApplicationSecondaryIdentifier;
@property (atomic, assign, readwrite) NSNumber* _TCPAdaptiveReadTimeout;
@property (atomic, assign, readwrite) NSNumber* _TCPAdaptiveWriteTimeout;
@property (atomic, assign, readwrite) NSNumber* _allowsExpensiveAccess;
@property (atomic, assign, readwrite) NSNumber* _allowsPowerNapScheduling;
@property (atomic, assign, readwrite) NSNumber* _preventsIdleSleepOnceConnected;
@property (atomic, assign, readwrite) NSNumber* _sessionSendsLaunchOnDemandEvents;
@property (atomic, assign, readwrite) NSNumber* _collectsTimingData;
@property (atomic, assign, readwrite) NSNumber* _shouldSkipPreferredClientCertificateLookup;
@property (atomic, copy, readwrite) NSString* _ledBellyServiceIdentifier;
@property (atomic, assign, readwrite) NSNumber* _connectionCachePurgeTimeout;
@property (atomic, assign, readwrite) NSNumber* _connectionCacheCellPurgeTimeout;
@property (atomic, assign, readwrite) NSNumber* _allowsRetryForBackgroundDataTasks;
@property (atomic, assign, readwrite) NSNumber* _respectsAllowsCellularAccessForDiscretionaryTasks;
@property (atomic, assign, readwrite) NSNumber* _overridesBackgroundSessionAutoRedirect;
@property (atomic, assign, readwrite) NSNumber* _performsEVCertCheck;
@property (atomic, assign, readwrite) NSNumber* _infersDiscretionaryFromOriginatingClient;
@property (atomic, copy, readwrite) NSString* _connectionPoolName;
@property (atomic, assign, readwrite) NSNumber* _prefersInfraWiFi;
@property (atomic, assign, readwrite, isBackgroundSession) NSNumber* backgroundSession;
@property (atomic, assign, readwrite) NSString* disposition;
@property (atomic, retain, readwrite) NSURLCredentialStorage* _phskip_credStorage;
@property (atomic, assign, readwrite) NSNumber* _phskip_credStorageSet;
@property (atomic, retain, readwrite) NSURLCache* _phskip_urlCache;
@property (atomic, assign, readwrite) NSNumber* _phskip_urlCacheSet;
@property (atomic, retain, readwrite) NSHTTPCookieStorage* _phskip_cookieStorage;
@property (atomic, assign, readwrite) NSNumber* _phskip_cookieStorageSet;
@property (atomic, retain, readwrite) NSNumber* _phskip_hstsStorage;
@property (atomic, assign, readwrite) NSNumber* _phskip_hstsStorageSet;
@property (atomic, assign, readwrite) NSNumber* pipeliningHighWatermark;
@property (atomic, assign, readwrite) NSNumber* pipeliningLowWatermark;
@property (atomic, assign, readwrite) NSNumber* numPriorityLevels;
@property (atomic, assign, readwrite) NSNumber* numFastLanes;
@property (atomic, assign, readwrite) NSNumber* minimumFastLanePriority;
@property (atomic, assign, readwrite) NSNumber* skip_download_unlink;
@property (atomic, assign, readwrite) NSNumber* _requiresClientToOpenFiles;
@property (atomic, copy, readwrite) NSString* _tcpConnectionPoolName;
@property (atomic, assign, readwrite) NSNumber* _forcesNewConnections;
@property (atomic, copy, readwrite) NSDictionary* _socketStreamProperties;
@property (atomic, assign, readwrite) NSNumber* _supportsAVAssetDownloads;
@property (atomic, assign, readwrite, _isProxySession) NSNumber* _proxySession;
@property (atomic, assign, readwrite) NSNumber* _disallowsSPDY;
@property (atomic, assign, readwrite) NSNumber* _preventsIdleSleep;
@property (atomic, assign, readwrite) NSNumber* _usePipeliningHeuristics;
@property (atomic, copy, readwrite) NSArray* _contentDispHeadEncFallback;
 + (BOOL) supportsSecureCoding;
 + (id) _defaultProtocolClasses;
 + (id) defaultSessionConfiguration;
 + (id) sessionConfigurationForSharedSession;
 + (id) backgroundSessionConfigurationWithIdentifier:(id)a;
 + (id) ephemeralSessionConfiguration;
 + (id) _AVBackgroundSessionConfigurationWithIdentifier:(id)a;
 + (id) _proxySessionConfigurationWithIdentifier:(id)a;
 + (id) backgroundSessionConfiguration:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - ({HTTPConnectionCacheLimits=iiiiiiiiii}) getConnectionCacheLimits;
 - (^{_CFHSTSPolicy=}) copyHSTSPolicy;
 - (id) URLCache;
 - (id) HTTPCookieStorage;
 - (id) URLCredentialStorage;
 - (id) protocolClasses;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (d) timeoutIntervalForResource;
 - (BOOL) _requiresClientToOpenFiles;
 - (id) _directoryForDownloadedFiles;
 - (BOOL) skip_download_unlink;
 - (BOOL) _collectsTimingData;
 - (BOOL) _isProxySession;
 - (id) HTTPAdditionalHeaders;
 - (void) setHTTPAdditionalHeaders:(id)a;
 - (id) sharedContainerIdentifier;
 - (BOOL) _allowsRetryForBackgroundDataTasks;
 - (BOOL) HTTPShouldSetCookies;
 - (Q) HTTPCookieAcceptPolicy;
 - (BOOL) _overridesBackgroundSessionAutoRedirect;
 - (BOOL) isDiscretionary;
 - (void) setDiscretionary:(BOOL)a;
 - (id) disposition;
 - (BOOL) isBackgroundSession;
 - (^v) _copyAttribute:(^{__CFString=})a;
 - (^{OpaqueCFHTTPCookieStorage=}) _copyCFCookieStorage;
 - (id) _ledBellyServiceIdentifier;
 - (void) set_ledBellyServiceIdentifier:(id)a;
 - (BOOL) _disallowsSPDY;
 - (BOOL) _shouldSkipPreferredClientCertificateLookup;
 - (Q) networkServiceType;
 - (BOOL) allowsCellularAccess;
 - (void) setNetworkServiceType:(Q)a;
 - (void) setAllowsCellularAccess:(BOOL)a;
 - (BOOL) HTTPShouldUsePipelining;
 - (void) setHTTPShouldUsePipelining:(BOOL)a;
 - (void) setHTTPMaximumConnectionsPerHost:(q)a;
 - (void) set_connectionCachePurgeTimeout:(d)a;
 - (void) set_connectionCacheCellPurgeTimeout:(d)a;
 - (Q) requestCachePolicy;
 - (d) timeoutIntervalForRequest;
 - (void) set_shouldSkipPreferredClientCertificateLookup:(BOOL)a;
 - (BOOL) _requiresPowerPluggedIn;
 - (id) _socketStreamProperties;
 - (BOOL) _allowsExpensiveAccess;
 - (Q) _TCPAdaptiveReadTimeout;
 - (Q) _TCPAdaptiveWriteTimeout;
 - (BOOL) _allowsPowerNapScheduling;
 - (id) _tcpConnectionPoolName;
 - (id) _sourceApplicationBundleIdentifier;
 - (id) _sourceApplicationSecondaryIdentifier;
 - (BOOL) _preventsIdleSleepOnceConnected;
 - (BOOL) _forcesNewConnections;
 - (void) setDisposition:(id)a;
 - (void) setBackgroundSession:(BOOL)a;
 - (void) setRequestCachePolicy:(Q)a;
 - (void) setTimeoutIntervalForRequest:(d)a;
 - (void) setTimeoutIntervalForResource:(d)a;
 - (void) setSessionSendsLaunchEvents:(BOOL)a;
 - (void) setConnectionProxyDictionary:(id)a;
 - (void) setTLSMinimumSupportedProtocol:(i)a;
 - (void) setTLSMaximumSupportedProtocol:(i)a;
 - (void) setHTTPShouldSetCookies:(BOOL)a;
 - (void) setHTTPCookieAcceptPolicy:(Q)a;
 - (void) set_phskip_hstsStorageSet:(BOOL)a;
 - (void) set_phskip_hstsStorage:(^{_CFHSTSPolicy=})a;
 - (void) set_phskip_cookieStorage:(id)a;
 - (void) set_phskip_cookieStorageSet:(BOOL)a;
 - (void) set_phskip_credStorage:(id)a;
 - (void) set_phskip_credStorageSet:(BOOL)a;
 - (void) set_phskip_urlCache:(id)a;
 - (void) set_phskip_urlCacheSet:(BOOL)a;
 - (void) setProtocolClasses:(id)a;
 - (void) set_allowsExpensiveAccess:(BOOL)a;
 - (void) setNumFastLanes:(q)a;
 - (void) setNumPriorityLevels:(q)a;
 - (void) setPipeliningHighWatermark:(q)a;
 - (void) setPipeliningLowWatermark:(q)a;
 - (void) setMinimumFastLanePriority:(q)a;
 - (void) setSkip_download_unlink:(BOOL)a;
 - (BOOL) _phskip_hstsStorageSet;
 - (^{_CFHSTSPolicy=}) _phskip_hstsStorage;
 - (BOOL) _phskip_cookieStorageSet;
 - (id) _phskip_cookieStorage;
 - (BOOL) _phskip_urlCacheSet;
 - (id) _phskip_urlCache;
 - (BOOL) _phskip_credStorageSet;
 - (id) _phskip_credStorage;
 - (void) setSharedContainerIdentifier:(id)a;
 - (BOOL) sessionSendsLaunchEvents;
 - (void) set_requiresPowerPluggedIn:(BOOL)a;
 - (void) set_allowsPowerNapScheduling:(BOOL)a;
 - (BOOL) _sessionSendsLaunchOnDemandEvents;
 - (void) set_sessionSendsLaunchOnDemandEvents:(BOOL)a;
 - (void) set_collectsTimingData:(BOOL)a;
 - (void) set_allowsRetryForBackgroundDataTasks:(BOOL)a;
 - (BOOL) _respectsAllowsCellularAccessForDiscretionaryTasks;
 - (void) set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)a;
 - (BOOL) _infersDiscretionaryFromOriginatingClient;
 - (void) set_infersDiscretionaryFromOriginatingClient:(BOOL)a;
 - (void) set_requiresClientToOpenFiles:(BOOL)a;
 - (void) set_forcesNewConnections:(BOOL)a;
 - (BOOL) _supportsAVAssetDownloads;
 - (void) set_supportsAVAssetDownloads:(BOOL)a;
 - (void) set_proxySession:(BOOL)a;
 - (BOOL) _preventsIdleSleep;
 - (void) set_preventsIdleSleep:(BOOL)a;
 - (BOOL) _usePipeliningHeuristics;
 - (void) set_usePipeliningHeuristics:(BOOL)a;
 - (i) TLSMinimumSupportedProtocol;
 - (i) TLSMaximumSupportedProtocol;
 - (id) connectionProxyDictionary;
 - (q) HTTPMaximumConnectionsPerHost;
 - (void) set_directoryForDownloadedFiles:(id)a;
 - (void) set_sourceApplicationBundleIdentifier:(id)a;
 - (void) set_sourceApplicationSecondaryIdentifier:(id)a;
 - (void) set_TCPAdaptiveReadTimeout:(Q)a;
 - (void) set_TCPAdaptiveWriteTimeout:(Q)a;
 - (d) _connectionCachePurgeTimeout;
 - (d) _connectionCacheCellPurgeTimeout;
 - (id) _connectionPoolName;
 - (void) set_connectionPoolName:(id)a;
 - (q) pipeliningHighWatermark;
 - (q) pipeliningLowWatermark;
 - (q) numPriorityLevels;
 - (q) numFastLanes;
 - (q) minimumFastLanePriority;
 - (void) set_tcpConnectionPoolName:(id)a;
 - (void) set_socketStreamProperties:(id)a;
 - (id) _contentDispHeadEncFallback;
 - (void) set_contentDispHeadEncFallback:(id)a;
 - (void) set_preventsIdleSleepOnceConnected:(BOOL)a;
 - (void) set_overridesBackgroundSessionAutoRedirect:(BOOL)a;
 - (BOOL) _performsEVCertCheck;
 - (void) set_performsEVCertCheck:(BOOL)a;
 - (BOOL) _prefersInfraWiFi;
 - (void) set_prefersInfraWiFi:(BOOL)a;
 - (void) setURLCredentialStorage:(id)a;
 - (void) setURLCache:(id)a;
 - (void) setHTTPCookieStorage:(id)a;
 - (void) setHSTSPolicy:(^{_CFHSTSPolicy=})a;
 - (id) initWithDisposition:(id)a;
 - (void) setSourceApplicationBundleIdentifier:(id)a;
 - (id) sourceApplicationBundleIdentifier;
 - (void) set_disallowsSPDY:(BOOL)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;


@end
