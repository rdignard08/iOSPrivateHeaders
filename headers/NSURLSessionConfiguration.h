
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
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    NSString* _identifier;
    unsigned long long _requestCachePolicy;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _networkServiceType;
    NSString* _sharedContainerIdentifier;
    NSDictionary* _connectionProxyDictionary;
    unsigned long long _HTTPCookieAcceptPolicy;
    NSDictionary* _HTTPAdditionalHeaders;
    long long _HTTPMaximumConnectionsPerHost;
    NSArray* _protocolClasses;
    NSURL* __directoryForDownloadedFiles;
    NSString* __sourceApplicationBundleIdentifier;
    NSString* __sourceApplicationSecondaryIdentifier;
    unsigned long long __TCPAdaptiveReadTimeout;
    unsigned long long __TCPAdaptiveWriteTimeout;
    NSString* __ledBellyServiceIdentifier;
    double __connectionCachePurgeTimeout;
    double __connectionCacheCellPurgeTimeout;
    NSString* __connectionPoolName;
    NSString* _disposition;
    NSURLCredentialStorage* __phskip_credStorage;
    NSURLCache* __phskip_urlCache;
    NSHTTPCookieStorage* __phskip_cookieStorage;
    ^{_CFHSTSPolicy=} __phskip_hstsStorage;
    long long _pipeliningHighWatermark;
    long long _pipeliningLowWatermark;
    long long _numPriorityLevels;
    long long _numFastLanes;
    long long _minimumFastLanePriority;
    NSString* __tcpConnectionPoolName;
    NSDictionary* __socketStreamProperties;
    NSArray* __contentDispHeadEncFallback;
}
@property (atomic, copy, readwrite) NSString* identifier;
@property (atomic, assign, readwrite) NSNumber* requestCachePolicy;
@property (atomic, assign, readwrite) NSNumber* timeoutIntervalForRequest;
@property (atomic, assign, readwrite) NSNumber* timeoutIntervalForResource;
@property (atomic, assign, readwrite) NSNumber* networkServiceType;
@property (atomic, assign, readwrite) NSNumber* allowsCellularAccess;
@property (atomic, assign, readwrite, getter=isDiscretionary) NSNumber* discretionary;
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
@property (atomic, assign, readwrite, getter=isBackgroundSession) NSNumber* backgroundSession;
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
@property (atomic, assign, readwrite, getter=_isProxySession) NSNumber* _proxySession;
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
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - ({HTTPConnectionCacheLimits=iiiiiiiiii}) getConnectionCacheLimits;
 - (^{_CFHSTSPolicy=}) copyHSTSPolicy;
 - (id) URLCache;
 - (id) HTTPCookieStorage;
 - (id) URLCredentialStorage;
 - (id) protocolClasses;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (double) timeoutIntervalForResource;
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
 - (unsigned long long) HTTPCookieAcceptPolicy;
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
 - (unsigned long long) networkServiceType;
 - (BOOL) allowsCellularAccess;
 - (void) setNetworkServiceType:(unsigned long long)a;
 - (void) setAllowsCellularAccess:(BOOL)a;
 - (BOOL) HTTPShouldUsePipelining;
 - (void) setHTTPShouldUsePipelining:(BOOL)a;
 - (void) setHTTPMaximumConnectionsPerHost:(long long)a;
 - (void) set_connectionCachePurgeTimeout:(double)a;
 - (void) set_connectionCacheCellPurgeTimeout:(double)a;
 - (unsigned long long) requestCachePolicy;
 - (double) timeoutIntervalForRequest;
 - (void) set_shouldSkipPreferredClientCertificateLookup:(BOOL)a;
 - (BOOL) _requiresPowerPluggedIn;
 - (id) _socketStreamProperties;
 - (BOOL) _allowsExpensiveAccess;
 - (unsigned long long) _TCPAdaptiveReadTimeout;
 - (unsigned long long) _TCPAdaptiveWriteTimeout;
 - (BOOL) _allowsPowerNapScheduling;
 - (id) _tcpConnectionPoolName;
 - (id) _sourceApplicationBundleIdentifier;
 - (id) _sourceApplicationSecondaryIdentifier;
 - (BOOL) _preventsIdleSleepOnceConnected;
 - (BOOL) _forcesNewConnections;
 - (void) setDisposition:(id)a;
 - (void) setBackgroundSession:(BOOL)a;
 - (void) setRequestCachePolicy:(unsigned long long)a;
 - (void) setTimeoutIntervalForRequest:(double)a;
 - (void) setTimeoutIntervalForResource:(double)a;
 - (void) setSessionSendsLaunchEvents:(BOOL)a;
 - (void) setConnectionProxyDictionary:(id)a;
 - (void) setTLSMinimumSupportedProtocol:(int)a;
 - (void) setTLSMaximumSupportedProtocol:(int)a;
 - (void) setHTTPShouldSetCookies:(BOOL)a;
 - (void) setHTTPCookieAcceptPolicy:(unsigned long long)a;
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
 - (void) setNumFastLanes:(long long)a;
 - (void) setNumPriorityLevels:(long long)a;
 - (void) setPipeliningHighWatermark:(long long)a;
 - (void) setPipeliningLowWatermark:(long long)a;
 - (void) setMinimumFastLanePriority:(long long)a;
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
 - (int) TLSMinimumSupportedProtocol;
 - (int) TLSMaximumSupportedProtocol;
 - (id) connectionProxyDictionary;
 - (long long) HTTPMaximumConnectionsPerHost;
 - (void) set_directoryForDownloadedFiles:(id)a;
 - (void) set_sourceApplicationBundleIdentifier:(id)a;
 - (void) set_sourceApplicationSecondaryIdentifier:(id)a;
 - (void) set_TCPAdaptiveReadTimeout:(unsigned long long)a;
 - (void) set_TCPAdaptiveWriteTimeout:(unsigned long long)a;
 - (double) _connectionCachePurgeTimeout;
 - (double) _connectionCacheCellPurgeTimeout;
 - (id) _connectionPoolName;
 - (void) set_connectionPoolName:(id)a;
 - (long long) pipeliningHighWatermark;
 - (long long) pipeliningLowWatermark;
 - (long long) numPriorityLevels;
 - (long long) numFastLanes;
 - (long long) minimumFastLanePriority;
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
